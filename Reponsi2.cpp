#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

typedef struct Node_matakuliah
{
    int sks,bobot,total;
    char nilai;
    string namamakul;
    string kodemakul;
    Node_matakuliah *next;
}data_matakuliah;

Node_matakuliah *Headmatakuliah;

void tambah_matakuliah()
{
	char p;
	int sks = 0;
	int bobot;
	int total;
	char nilai;
	int jmlsks = 0;
	string namamakul;
	string kodemakul;
	do{
		Node_matakuliah *baru,*temp;
		baru = new Node_matakuliah;
		cout <<"Kode Makul = ";cin >> kodemakul;
		cin.ignore();
		cout <<"Nama Makul = ";getline(cin,namamakul);
		cout <<"Jumlah SKS = ";cin >> sks;
		cout <<"Nilai = ";cin >> nilai;
		baru->kodemakul = kodemakul;
		baru->namamakul = namamakul;
		baru->sks = sks;
		baru->nilai = nilai;
		baru->bobot = bobot;
		baru->total = total;
		baru->next = NULL;
					// bobot
			if (baru->nilai == 'A' || baru->nilai == 'a'){
				bobot = 4;
				baru->bobot = bobot;
			}
			else if (baru->nilai == 'B' || baru->nilai == 'b'){
				bobot = 3;
				baru->bobot = bobot;
			}
			else if (baru->nilai == 'C' || baru->nilai == 'c'){
				bobot = 2;
				baru->bobot = bobot;
			}
			else if (baru->nilai == 'D' || baru->nilai == 'd'){
				bobot = 1;
				baru->bobot = bobot;
			}
			else{
				bobot = 0;
				baru->bobot = bobot;
			}
			// Total
			if (baru->nilai == 'A' || baru->nilai == 'a'){
				total = 8;
				baru->total = total;
			}
			else if (baru->nilai == 'B' || baru->nilai == 'b'){
				total = 6;
				baru->total = total;
			}
			else if (baru->nilai == 'C' || baru->nilai == 'c'){
				total = 4;
				baru->total = total;
			}
			else if (baru->nilai == 'D' || baru->nilai == 'd'){
				total = 2;
				baru->total = total;
			}
			else{
				total = 0;
				baru->total = total;
			}
		if(Headmatakuliah==NULL)
		{
			Headmatakuliah=baru;
			Headmatakuliah->next=NULL;
		}
		else
		{
			temp=Headmatakuliah;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=baru;
		}
		cout << "Masih ingin menghitung (y/n) ";
		cin >>p;
	}while(p=='y');
}

void tampil()
{
	float jmlsks = 0;
	float totalsemua = 0;
	float sks,ipk,total;
	cout<<"\n\nNilai Mata Kuliah Yang Diambil"<<endl;
  	cout<<"Kode Makul \t Nama Makul \t SKS \t Nilai \t Bobot \t Total"<<endl;
	if (Headmatakuliah!=NULL)
	{
		Node_matakuliah *tampil;
		tampil = Headmatakuliah;
		while(tampil!=NULL)
		{
			cout<<setiosflags(ios::left)<<setw(17)<<tampil->kodemakul;
            cout<<setiosflags(ios::left)<<setw(16)<<tampil->namamakul;
            cout<<setiosflags(ios::left)<<setw(7)<<tampil->sks;
            sks = tampil->sks;
			jmlsks = jmlsks + sks;
            cout<<setiosflags(ios::right)<<setw(5)<<tampil->nilai;
            cout<<setiosflags(ios::left)<<setw(7)<<tampil->bobot;
            cout<<setiosflags(ios::left)<<setw(7)<<tampil->total<<endl;
            total = tampil->total;
			totalsemua = totalsemua + total;
			tampil = tampil->next;
		}
	}   
		cout << "Total SKS : "<<jmlsks<<endl; 
		ipk = totalsemua/jmlsks;
		cout << "IPK : "<<ipk<<endl;
}

int main(int argc, char const *argv[])
{
	string induk;
	string namamhs;
	string prodi;
	char kelas;
	int tahunangkatan;
	string namadosen;

	cout << "Nomor Induk Mahasiswa = ";cin>>induk;
	cin.ignore( );
	cout << "Nama Mahasiswa = ";getline(cin,namamhs);
	cout << "Progam Studi = ";getline(cin,prodi);;
	cout << "Kelas = ";cin>>kelas;
	cout << "Tahun Angkatan = ";cin>>tahunangkatan;
	cin.ignore( );
	cout << "Nama Dosen Wali = ";getline(cin,namadosen);

	cout <<endl;
	tambah_matakuliah();
	tampil();

	cout << "Dosen Wali \n\n"<<namadosen;
	return 0;
}
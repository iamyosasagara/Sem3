#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{	
	struct
	{
		string kodejenis;
		int kodeisi;
		int jumlahbeli;
		string besarisi;
		int harga;
		
	}pembeli[10];

	string nama, nama2;
	int banyak;
	cout << "Masukkan Nama pembeli = ";
	cin >> nama;
	cout << "Masukkan banyak beli = ";
	cin >> banyak;
	cout << endl;
	// Input
	for (int i = 0; i <banyak ; ++i)
	{
		cout << "Pembelian ke-"<<i+1<<endl;
		lagi:
		cout << "Masukkan Kode Jenis = ";
		cin >> pembeli[i].kodejenis;
		if (pembeli[i].kodejenis !="P" && pembeli[i].kodejenis !="D" && pembeli[i].kodejenis !="p" && pembeli[i].kodejenis !="d" )
		{
			cout <<"Kode jenis tidak ada"<<endl;
			goto lagi;
		}
		cout << "Masukkan Kode Isi = ";
		cin >> pembeli[i].kodeisi;
		cout << "Masukkan Jumlah beli = ";
		cin >> pembeli[i].jumlahbeli;
		
		if (pembeli[i].kodejenis == "P" || pembeli[i].kodejenis == "p")
		{
			if (pembeli[i].kodeisi == 1)
			{
				pembeli[i].kodejenis = "Pulsa";
				pembeli[i].besarisi = "25000";
				pembeli[i].harga = pembeli[i].jumlahbeli * 27000;
			}
			else if (pembeli[i].kodeisi == 2)
			{
				pembeli[i].kodejenis = "Pulsa";
				pembeli[i].besarisi = "50000";
				pembeli[i].harga = pembeli[i].jumlahbeli * 52000;
			}
 		}
		else if (pembeli[i].kodejenis == "D" || pembeli[i].kodejenis == "d")
		{
			if (pembeli[i].kodeisi == 1)
			{
				pembeli[i].kodejenis = "Data";
				pembeli[i].besarisi = "10 GB";
				pembeli[i].harga = pembeli[i].jumlahbeli * 110000;
			}
			else if (pembeli[i].kodeisi == 2)
			{
				pembeli[i].kodejenis = "Data";
				pembeli[i].besarisi = "15 GB";
				pembeli[i].harga = pembeli[i].jumlahbeli * 160000;
			}
		}
	cout <<endl;

	}
	cout << "Nama Kasir = ";
	cin >>nama2;
	cout<<endl;
	// Output
	cout << "Nama Pembeli = "<<nama<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;
	cout<<"No |	Jenis	|	Besar Isi	|	Jumlah beli	|	Total	|"<<endl;
	cout<<"----------------------------------------------------------------------------"<<endl;

	for (int i = 0; i < banyak; ++i)
	{
		cout << i+1 <<"	"<<pembeli[i].kodejenis<<"	"<<pembeli[i].besarisi<<"	"<<pembeli[i].jumlahbeli<<"	"<<pembeli[i].harga<<endl;
	}
	cout <<endl;
	cout <<"============================================================================"<<endl;

	// Total Beli
	int totalbeli = 0;
	int bayar, kembali;
	for (int i = 0; i < banyak; ++i)
	{
		totalbeli = totalbeli + pembeli[i].harga;
	}
	cout << "Total beli = "<<totalbeli<<endl;
	cout << "Bayar = ";
	cin >> bayar;
	// Bayar dan kembalian
	kembali = bayar - totalbeli;
	cout << "Kembalian = "<<kembali<<endl;
	cout << "Nama Kasir = "<<nama2;
	return 0;
}
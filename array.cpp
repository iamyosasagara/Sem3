#include <iostream>

using namespace std;
int main()
{
	int jml = 0;
	int i;
	int cek;
	cout << "Masukkan jumlah nilai = ";
	cin >> jml;
	int angka[jml];

	for (int i = 0; i < jml; ++i)
	{
		cout << " Masukkan Angka ke "<<i+1<<" = ";
		cin >>angka[i];
	}

	cout << "Angka yang lebih besar dari 50 = ";

	for (int i = 0; i < jml; ++i)
	{
		if ( angka[i] > 50)
		{
			cout <<angka[i]<<" "; 
		}
	}
	cout << endl;
	cout << "Angka yang lebih kecil dari 50 = ";

	for (int i = 0; i < jml; ++i)
	{
		if ( angka[i] < 50 )
		{
			cout << angka[i]<<" ";
		}
	}

	cout << "Bilangan Prima = ";
	for (int i = 0; i < jml; ++i)
	{
		cek = 1;
		for (int j = 2; j < angka[i]; ++j)
		{
			if (angka[i]%j==0)
			{
				cek = 0;
			}
		}
		if (cek == 1)
		{
			cout << angka[i]<<" ";
		}
	}

}

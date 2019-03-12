/*
Nama : falah rizqi abdullah fairuz
NPM : 140810180069
tgl buat :12 baret 2019
*/
#include<iostream>
using namespace std;

struct r_mhs
{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n)
{
    cout << "Input banyak data : "; cin >> n;
}

void inputMhs(larikMhs& mhs, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "Mahasiswa " << i+1 << endl;
        cout << "NPM : "; cin.getline(mhs[i].npm, 14);
        cout << "Nama :"; cin.getline(mhs[i].nama, 40);
        cout << "IPK : "; cin >> mhs[i].ipk;
    }
}

void cetakMhs(larikMhs mhs, int n)
{
    for (int i=0; i<n;2 i++)
    {
        cout << "Mahasiswa " << i+1 << endl;
        cout << "NPM : " << mhs[i].npm << endl;
        cout << "Nama :" << mhs[i].nama << endl;
        cout << "IPK : " << mhs[i].ipk << endl;
    }
}

void sortNPM(larikMhs& mhs, int n)
{
	int posisi;
	for (int i=0; i<n; i++)
	{
		posisi=i;
		for (int j=i+1; j<n; j++)
		{
			if (mhs[posisi].npm>mhs[j].npm)
			{
				posisi=j;
			}
		}
		swap (mhs[i], mhs[posisi]);
	}
}

main ()
{
    int banyak;
    larikMhs m;
    banyakData(banyak);
    inputMhs(m, banyak);
    sortNPM(m, banyak);
    cetakMhs(m, banyak);
}
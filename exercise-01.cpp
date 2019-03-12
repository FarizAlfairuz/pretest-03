/*
Nama : Falah Rizqi Abdullah Fairuz
NPM : 140810180069
Deskripsi : 
Tanggal buat : 12 Maret 2019
*/
#include<iostream>
#include<math.h>
using namespace std;

typedef struct
{
    float panjang;
    float lebar;
} segiempat;

void input(segiempat *s)
{
    cout << "Masukkan panjang : "; cin >> s->panjang;
    cout << "Masukkan lebar : "; cin >> s->lebar;
}

float keliling(segiempat s)
{
    return 2*(s.panjang+s.lebar);
}

float luas(segiempat s)
{
    return s.panjang*s.lebar;
}

float diagonal(segiempat s)
{
    return sqrt((s.panjang*s.panjang) + (s.lebar*s.lebar));
}

void print(segiempat s)
{
    cout << "Panjang = " << s.panjang << endl;
    cout << "Lebar = " << s.lebar << endl;
    cout << "Keliling = " << keliling(s) << endl;
    cout << "Luas = " << luas(s) << endl;
    cout << "Diagonal = " << diagonal(s) << endl;
}

int main()
{
    segiempat* sg;
    sg = new segiempat;
    input (sg);
    print (*sg);
    return 0;
}
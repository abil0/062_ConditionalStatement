#include <iostream>
using namespace std;

int arr[20] // Membuat Array dengan panjang 20
int n; // Memanggil variable inputan n

void input()
{ // procedure input 
    while (true)
}
cout << "Masukkan jumlah Data pada Array : "; // Membuat inputan jumlah element Array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{ // Membuat Kondisi n tidak lebih dari 20
break;
}
else
{
cout <<"\nArray yang Anda Masukkan maksimal 20 Elemen.\n"; // Menampilkan pesan jika data lebih dari 20
}
{
cout << endl; // Memmbuat jarak per baris program
cout << "======================" << endl; //Membuat tampilan susunan data elemen array
cout << "Masukkan elemen array " << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
{
cout << "Data ke-" << (i + 1) <<":"; // Memasukkan atau menginputkan nilai data n
cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
}
}

void insertionsort()
{ // Procedure Insertionsort

int temp; // Membuat variable data temporer atau penyimpanan sementara
int j, i; // Membuat variable j sebagai penanda

for ( i = 1; i <= n -1; i++)
{// step 1 
    
temp = arr[i]; // step 2

j = i - 1;// step 3

while (j >= 0 && arr [j] > temp) // step 4
{
arr[j + 1] = arr[j]; // step 4a
j--; //step 4b
}

arr [j + 1] = temp ; // step 5
}
}

void display ()
{
cout << endl; // Output baris kosong
cout <<"===============================" << endl;
cout <<"Total pass = " << n - 1 << endl; // count element movement   
cout <<"===============================" << endl; // Output ke layar
cout <<"Element Array yang telah tersusun" << endl; // Output ke layar
cout <<"===============================" << endl; // Output ke layar

for (int j = 0; j < n; j++)
{ // Looping dengan j dimulai dari 0 hingga n-1
cout << arr[j] << endl; // Output ke layer
}
cout << endl; // Output baris kosong
}

int main()
{
input();
insertionsort();
display();
system("Pause");
return 0;
}
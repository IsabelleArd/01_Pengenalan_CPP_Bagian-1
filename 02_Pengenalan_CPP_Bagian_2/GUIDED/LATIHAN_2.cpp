// Array : 1 dimensi, 2 dimensi, berdimensi banyak
// Pointer : Data & memori, pointer & alamat, 

// Pointer
/*
#include <iostream> // Pemanggilan yg akan digunakan
#include <conio.h>
using namespace std;

int main() {
    int x, y; // x dan y bertipe int
    int *px; // px merupakan variabel pointer (*) menunjuk ke variabel int
    x = 87;
    px = &x;
    y = *px;
    cout << "Alamat x = " << &x << endl;
    cout << "Isi px = " << px << endl;
    cout << "Isi x = " << x << endl;
    cout << "Nilai yang ditunjuk px = " << *px << endl;
    cout << "Nilai y = " << y << endl;
    getch();
    return 0;
}*/

/*
#include <iostream>
#include <conio.h>
#define MAX 5
using namespace std;

int main() {
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun[MAX] [MAX] =
    {   {0,2,2,0,0},
        {0,1,1,1,0},
        {0,3,3,3,0},
        {4,4,0,0,4},
        {5,0,0,0,5}
    };
    //inisialisasi array dua dimensi
    for (i=0; i<MAX; i++){
        cout<<"masukkan nilai ke-"<<i+1<<endl;
        cin>>nilai[i];
    }
    cout<<"\ndata nilai siswa :\n";

    //menampilkan array satu dimensi 
    for (i=0; i<MAX; i++)
        cout<<"nilai k-"<<i+1<<"=" <<nilai[i]<<endl;
    cout<<"\n nilai tahunan : \n";

    // menampilkan array dua dimensi 
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++)
            cout<<nilai_tahun[i][j];
        cout<<"\n";
    }
    getch();
    return 0;
} */


// Next fungsi
/*
#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int maks3(int a, int b, int c);
    // Mendeklarasikan ptototype fungsi

int main() {
    system("cls");
    int x, y, z;
    cout << "Masukkan nilai bilangan ke-1 = ";
    cin >> x;
    cout << "Masukkan nilai bilangan ke-2 = ";
    cin >> y;
    cout << "Masukkan nilai bilangan ke-3 = ";
    cin >> z;
    cout << "Nilai maksimumnya adalah = " << maks3(x,y,z);
    getche();
    return 0;
}
// Badan fungsi
int maks3(int a, int b, int c) {
    // Deklarasi variabel lokal dalam fungsi
    int temp_max = a;
    if (b > temp_max) temp_max = b;
    if (c > temp_max) temp_max = c;
        return (temp_max);
}

// Dilanjutkan prosedur
*/
#include <iostream>
using namespace std;

struct clock{
    int jam;
    int menit;
    int detik;
};


int getJam(int jam){
    return jam;
};

int getMenit(int menit){

    return menit;
};

int getDetik(int detik){

    return detik;
};

int main()
{
    clock setJam;
    clock setMenit;
    clock setDetik;

    cout << "\t\t tugas basis data \n\n" << endl;
    cout << "============================================\n" << endl;
    cout << "Nama   : M.hutbi \nNIM     : 1121031055 \nKelas    : Informatika.A \n" <<endl;
    cout << "============================================\n" << endl;

    cout << "\t   Memasukan jam,menit dan detik dan di validasi dengan fungsi isValid \n" <<endl;


    cout << "Masukan Jam : ";
    cin >> setJam.jam;
    int hh = getJam(setJam.jam);

    cout << "Masukan Menit : ";
    cin >> setMenit.menit;
    int jj = getMenit(setMenit.menit);

    cout << "Masukan Detik : ";
    cin >> setDetik.detik;
    int dd = getDetik(setDetik.detik);


    if (hh < 23 && jj < 59 && dd < 59){
        cout << "Benar \n";
        cout << "Jam : " << hh << " Menit : " << jj << " Detik : " << dd;
    }else {
        cout << "Salah";
    }
    return 0;
};


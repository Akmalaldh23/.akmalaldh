#include<iostream>
using namespace std;
string kodematkul, namamatkul;
void kd_matkul(){
    cout<<"Masukkan Kode Mata Kuliah : ";
    cin>>kodematkul;
}

void nama_matkul(){
    cout<<"Masukkan Nama Mata Kuliah : ";
    cin>>namamatkul;
}

void panggil(){
    cout<<"Nama Kode Kuliah : "<<kodematkul<<endl;
    cout<<"Nama Mata Kuliah : "<<namamatkul<<endl;
}
int main(){
    kd_matkul();
    nama_matkul();
    panggil();
}
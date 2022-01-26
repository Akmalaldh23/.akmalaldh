#include <iostream>
using namespace std;

int main(){
    string kd_matkul;
    string nama_matkul;
    
    cout << "Masukan KD MATA KULIAH : ";
    getline(cin, kd_matkul);
    cout << "Masukan NAMA MATA KULIAH : ";
    cin>>nama_matkul;
    
    cout << "KD MATKUL : " << kd_matkul << endl;
    cout << "Alamat KD MATKUL : " << &kd_matkul << endl;
    cout << "Nama MATA KULIAH : " << nama_matkul << endl;
    cout << "Alamat MATA KULIAH : " << &nama_matkul << endl;
    
}
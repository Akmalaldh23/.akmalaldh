#include <iostream>
 
using namespace std;
 
class Komputer {
  public:
    string processor = "INTEL Core I3";
 
    string cekKomputer() {
      return "Ini berasal dari class Komputer";
    }
};
 
class Laptop: public Komputer {
  public:
    string merk = "acer";
 
    string cekLaptop() {
      return "Ini berasal dari class Laptop";
    }
};
 
int main()
{
  Laptop laptopAkmal;
 
  cout << laptopAkmal.processor << endl;
  cout << laptopAkmal.merk << endl;
  cout << laptopAkmal.cekKomputer() << endl;
  cout << laptopAkmal.cekLaptop() << endl;
 
  return 0;
}
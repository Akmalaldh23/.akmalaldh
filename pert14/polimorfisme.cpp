#include <iostream>
using namespace std;

class PrintData {
  public:
    PrintData() {}
    void printOutput() { 
      cout << "Perkenalkan diri Saya " << endl;
    }
    void printOutput(string data) { 
      cout << "Nama saya adalah "<< data << endl;
    }

    void printOutput(int data) { // Fungsi Overloading
      cout << "Usia Saya " << data << endl;
    }         
    ~PrintData() {}
};

int main() {
  PrintData print;
  
  print.printOutput();
  print.printOutput("AKMAL ALDHIYATAMA");
  print.printOutput(20);
  return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
  int islem;
  double sayi1, sayi2, sonuc;
  while (true) {
    cout << "\nHesap makinesi\n";
    cout << "Toplama işlemi için : 1\n";
    cout << "Çıkarma işlemi için : 2\n";
    cout << "Çarpma işlemi için : 3\n";
    cout << "Bölme işlemi için : 4\n";
    cin >> islem;
    switch (islem) {
    case 1:
      cout << "Birinci sayıyı giriniz\n";
      cin >> sayi1;
      cout << "İkinci sayıyı giriniz\n";
      cin >> sayi2;
      sonuc = sayi1 + sayi2;
      cout << sonuc;
      break;
    case 2:
      cout << "Birinci sayıyı giriniz\n";
      cin >> sayi1;
      cout << "İkinci sayıyı giriniz\n";
      cin >> sayi2;
      sonuc = sayi1 - sayi2;
      cout << sonuc;
      break;
    case 3:
      cout << "Birinci sayıyı giriniz\n";
      cin >> sayi1;
      cout << "İkinci sayıyı giriniz\n";
      cin >> sayi2;
      sonuc = sayi1 * sayi2;
      cout << sonuc;
      break;
    case 4:
      cout << "Birinci sayıyı giriniz\n";
      cin >> sayi1;
      cout << "İkinci sayıyı giriniz\n";
      cin >> sayi2;
      sonuc = sayi1 / sayi2;
      cout << sonuc;
      break;
    }
  }
}

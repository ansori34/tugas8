#include <iostream>

using namespace std;

bool checkNumber(int number);

int main()
{
  int number = 0;

  cout << "Masukkan Angka = ";
  cin >> number;

  if (checkNumber(number)) {
    cout << "Angka ini Perfect" << endl;
  } else {
    cout << "Angka ini bukan Perfect" << endl;
  }
}

bool checkNumber(int number)
{
  int jumlah = 0;
  bool status = false;

  for (int i = 1; i < number; i++) {
    jumlah += i;

    if (jumlah == number) {
      status = true;
      break;
    }
  }

  return status;
}

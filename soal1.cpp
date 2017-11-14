#include <iostream>

using namespace std;

int getGreatest(int bil[10], bool status);

int main()
{
  int angka[10];

  for (int i = 0; i < 10; i++) {
    cin >> angka[i];
  }

  cout << "Angka Terkecil = " << getGreatest(angka, false) << endl; // angka terkecil
  cout << "Angka Terbesar = " << getGreatest(angka, true) << endl; // angka terbesar
}

int getGreatest(int bil[10], bool status)
{
  int great, small;

  for (int i = 0; i < 10; i++) {
    if (i == 0) {
      great = bil[0];
      small = bil[0];
    }

    if (bil[i] > great) {
      great = bil[i];
    }
    else if (bil[i] < small) {
      small = bil[i];
    }
  }

  if (status) { // status == true
    return great;
  } else { // status == false
    return small;
  }
}

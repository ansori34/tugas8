#include <iostream>

using namespace std;

float averagePositive(int input[10], bool status);

int main()
{
  int input[10];

  cout << "Masukkan Bilangan Pada Array = " << endl;
  for (int i = 0; i < 10; i++) {
    cin >> input[i];
  }

  cout << "Rata - Rata Angka Positif = " << averagePositive(input, true) << endl;
  cout << "Rata - Rata Angka Negatif = " << averagePositive(input, false) << endl;
}

float averagePositive(int input[10], bool status)
{
  float positif = 0, negatif = 0, jumPos = 0, jumNeg = 0;

  for (int i = 0; i < 10; i++) {
    if (input[i] > 0) {
      positif += input[i];
      jumPos++;
    } else {
      negatif += input[i];
      jumNeg++;
    }
  }

  if (status) {
    return positif / jumPos;
  } else {
    return negatif / jumNeg;
  }
}

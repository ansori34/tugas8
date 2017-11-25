#include <iostream>

using namespace std;

// Prototypes
int *getFibbo();
float getAverage(int *fibbo);

// Declare Global Variable
int length = 0;

int main()
{
  // Declare variable to save user input
  int *fibbo;

  // Save user input to global variable
  cout << "Masukkan Panjang Fibbonaci = ";
  cin >> length;

  // Call function to get list of Fibbo
  fibbo = getFibbo();

  // Print list of fibbo
  for (int i = 0; i < length; i++) {
    cout << fibbo[i] << " ";
  }

  // Call function to get average
  cout << endl << "Rata - Rata = " << getAverage(fibbo);
}

// Function to couting average of fibbo
float getAverage(int *fibbo)
{
  // Declare variable to save count of fibbo
  float count = 0;

  // Counting
  for (int i = 0; i < length; i++) {
    count += fibbo[i];
  }

  return count / length;
}

// Function to generate list of fibbo
int *getFibbo()
{
  // Declare variable to save list of fibbo
  int *fibbo = new int[length];

  // Generate fibbo
  for (int i = 0; i < length; i++) {
    /*
      If i < 2, fibbo[i] = 1
      Else, fibbo[i] = fibbo[i-2] + fibbo[i-1]
    */
    fibbo[i] = (i < 2) ? 1 : fibbo[i - 2] + fibbo[i - 1];
  }

  return fibbo;
}

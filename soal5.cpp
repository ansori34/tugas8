#include <iostream>

using namespace std;

// Prototype
bool checkNumber(int number);

int main()
{
  // Declare variable to save user input
  int number = 0;

  // Save user input into variable
  cout << "Masukkan Angka = ";
  cin >> number;

  // If number is perfect
  if (checkNumber(number)) {
    cout << "Angka ini Perfect" << endl;
  }
  // If number is not perfect
  else {
    cout << "Angka ini bukan Perfect" << endl;
  }
}

// Function to check perfect number
bool checkNumber(int number)
{
  // Declare variable
  int count = 0;
  bool status = true;

  // Counting
  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      count += i;
    }
  }

  /*
    If count != number, return false
    Else, return true ( default value )
  */
  return (count != number) ? false : status;
}

#include <iostream>

using namespace std;

// Prototype
float averagePositive(int numbers[10], bool status);

int main()
{
  // Declare variable to save user numbers
  int numbers[10];

  // Save user numbers into variable
  cout << "Masukkan Bilangan Pada Array = " << endl;
  for (int i = 0; i < 10; i++) {
    cin >> numbers[i];
  }

  // Call function to get positive number
  cout << "Rata - Rata Angka Positif = " << averagePositive(numbers, true) << endl;
  // Call function to get negative number
  cout << "Rata - Rata Angka Negatif = " << averagePositive(numbers, false) << endl;
}

// Function to calculate average from list of numbers
float averagePositive(int numbers[10], bool status)
{
  // Declare variable
  float positive = 0, negative = 0, countPos = 0, countNeg = 0;

  // Calculate average
  for (int i = 0; i < 10; i++) {
    // If number is positive
    if (numbers[i] >= 0) {
      positive += numbers[i];
      countPos++;
    }
    // If number is negative
    else {
      negative += numbers[i];
      countNeg++;
    }
  }

  /*
    If status is true, return positive / countPos
    Else, return negative / countNeg
  */
  return (status) ? positive / countPos : negative / countNeg;
}

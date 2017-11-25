#include <iostream>

using namespace std;

// Prototype
int getGreatest(int num[10], bool status);

int main()
{
  // Declare variable for save user input
  int number[10];

  // Loop for save user input into array
  for (int i = 0; i < 10; i++) {
    cin >> number[i];
  }

  // Call function to get the smallest number
  cout << "Angka Terkecil = " << getGreatest(number, false) << endl;
  // Call function to get the greatest number
  cout << "Angka Terbesar = " << getGreatest(number, true) << endl;
}

// Function to checking list of number and return smallest / greatest value
// with 2 types of parameters ( integer and boolean )
int getGreatest(int num[10], bool status)
{
  // Declare variable with default value
  int great = num[0], small = num[0];

  for (int i = 0; i < 10; i++) {
    // Checking if number is the greatest
    if (num[i] > great) {
      // Replace the greatest value with greater value
      great = num[i];
    }
    // Checking if number is the smallest
    else if (num[i] < small) {
      // Replace the smallest value with smaller value
      small = num[i];
    }
  }

  /*
    If status is true, return great
    If status is false, return small
  */
  return (status) ? great : small;
}

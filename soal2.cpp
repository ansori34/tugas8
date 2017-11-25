#include <iostream>

using namespace std;

// Prototypes
int evenCount(int *numbersList);
int *getEven(int *numbersList);

// Declare global variable
int length = 0;

int main()
{
  // Declare variables
  int *even, count = 0;

  // Save user input into global variable
  cout << "Masukkan Panjang Array = ";
  cin >> length;

  // Declare variable for save user input into array
  int number[length];

  // Save user input into array
  for (int i = 0; i < length; i++) {
    cout << "Angka ke - " << i+1 << " = ";
    cin >> number[i];
  }

  // Save count of even number in this variable
  count = evenCount(number);
  // Save list of even number in this variable
  even = getEven(number);

  // Print list of even number
  for (int i = 0; i < count; i++) {
    cout << endl << even[i] << " ";
  }

  // Checking if even number not found
  if (count == 0) {
    cout << "Even Not Found";
  }
}

// Function to get count of even number
int evenCount(int *numbersList)
{
  // Declare variable to save count
  int numLength = 0;
  for (int i = 0; i < length; i++) {
    // Checking if number is even
    if (numbersList[i] % 2 == 0) {
      // Add 1 value to variable
      numLength++;
    }
  }

  return numLength;
}

// Get list of even number
int *getEven(int *numbersList)
{
  // Declare variables
  /*
    index is helper variable to get index of array which is empty
    list is variable to save list of even number
  */
  int index = 0, *list = new int[evenCount(numbersList)];
  for (int i = 0; i < length; i++) {
    // Checking if number is even
    if (numbersList[i] % 2 == 0) {
      // Save even number in array
      list[index] = numbersList[i];
      // Add 1 value to variable
      index++;
    }
  }

  return list;
}

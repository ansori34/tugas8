#include <iostream>

using namespace std;

// Prototypes
bool checkPrime(int bil);
int *generatePrime(int length);

int main()
{
  // Declare variable
  int length = 0, *listPrime;

  // Save user input into variable
  cout << "Masukkan Panjang Bilangan Prima = ";
  cin >> length;

  // Call function to get array of prime
  listPrime = generatePrime(length);

  // Print list of prime
  cout << "Bilangan Prima = " << endl;
  for (int i = 0; i < length; i++) {
    cout << listPrime[i] << endl;
  }
}

// Function to check prime number
bool checkPrime(int number)
{
  int factoredCount = 0;

  for (int i = 1; i <= number; i++) {
    // If number can factored by index
    if (number % i == 0) {
      factoredCount++;
    }
  }

  /*
    If factoredCount is 2, return true
    Else, return false
  */
  return (factoredCount == 2) ? true : false;
}

// Function to generate list of prime
int *generatePrime(int length)
{
  int limit = 0, number = 1, *prime = new int[length];

  // keep repeating as long as limit not reach length
  while (limit < length) {

    // If number is prime
    if (checkPrime(number)) {
      prime[limit] = number;
      limit++;
    }

    number++;
  }

  return prime;
}

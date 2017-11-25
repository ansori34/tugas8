#include <iostream>

using namespace std;

// Prototypes
int **askMatrix();
int **calculate(int **matrix1, int **matrix2);

int main()
{
  // Declare variable to save user input
  int **matrix1, **matrix2, **value;

  // Call function to save user input into 2d array
  cout << "Input Matrix Pertama = " << endl;
  matrix1 = askMatrix();
  cout << "Input Matrix Kedua = " << endl;
  matrix2 = askMatrix();

  // Call function to calculate matrix
  value = calculate(matrix1, matrix2);

  // Print matrix
  cout << endl << "Hasil Akhir = " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << value[i][j] << " ";
    }

    cout << endl;
  }
}

// Function to save user input
int **askMatrix()
{
  int **matrix = new int*[3];
  for (int i = 0; i < 3; i++) {
    matrix[i] = new int[3];

    for (int j = 0; j < 3; j++) {
      cin >> matrix[i][j];
    }
  }

  return matrix;
}

// Function to calculate matrix
int **calculate(int **matrix1, int **matrix2)
{
  int **hasil = new int*[3];
  int temp;

  // hasil[0][0] =
  //   ( matrix1[0][0] * matrix2[0][0] );
  // + ( matrix1[0][1] * matrix2[1][0] );
  // + ( matrix1[0][2] * matrix2[2][0] );

  // hasil[0][1] =
  //   ( matrix1[0][0] * matrix2[0][1] );
  // + ( matrix1[0][1] * matrix2[1][1] );
  // + ( matrix1[0][2] * matrix2[2][1] );

  // hasil[0][2] =
  //   ( matrix1[0][0] * matrix2[0][2] );
  // + ( matrix1[0][1] * matrix2[1][2] );
  // + ( matrix1[0][2] * matrix2[2][2] );

  // hasil[1][0] =
  //   ( matrix1[1][0] * matrix2[0][0] );
  // + ( matrix1[1][1] * matrix2[1][0] );
  // + ( matrix1[1][2] * matrix2[2][0] );

  for (int i = 0; i < 3; i++) {
    hasil[i] = new int[3];
    for (int j = 0; j < 3; j++) {
      temp = 0;
      for (int k = 0; k < 3; k++) {
        temp += matrix1[i][k] * matrix2[k][j];
      }
      hasil[i][j] = temp;
    }
  }

  return hasil;
}

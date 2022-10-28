/***********************************************************
Programmer: Dillon Hendrix
Discription: Create a 2 by 2 2d matrix that will inverse the matrix values. If
the inverse is not possible it will explain why. Date: 10/24/22
***********************************************************/

#include <iomanip>
#include <iostream>

using namespace std;

/***************** Function Prototypes ******************/
int inverseMatrix(int matrix[][2], int matrixinverse[][2], int row, int col);
void printMatrix(int generic[][2], int N_Rows, int N_Columns);

int main() {
  const int row = 2;
  const int col = 2;

  int matrix[row][col] = {{1, 5}, {2, 7}};
  int matrixinverse[row][col] = {0};

  inverseMatrix(matrix, matrixinverse, row, col);
  printMatrix(matrix, row, col);
  cout << endl;
  printMatrix(matrixinverse, row, col);
  return 0;
}

int inverseMatrix(int matrix[][2], int matrixinverse[][2], int row, int col) {

  int inverse = 0;
  int a = matrix[0][0];
  int b = matrix[0][1];
  int c = matrix[1][0];
  int d = matrix[1][1];

  matrixinverse[0][0] = d;
  matrixinverse[0][1] = -b;
  matrixinverse[1][0] = a;
  matrixinverse[1][1] = -c;
  inverse = (1 / (a * d - b * c)) * matrixinverse[row][col];

  return inverse;
}
void printMatrix(int generic[][2], int N_Rows, int N_Columns) {
  for (int row = 0; row < N_Rows; row++) {
    for (int column = 0; column < N_Columns; column++) {
      cout << setw(10) << generic[row][column] << " ";
    }
    cout << endl;
  }
  return;
}

/*int selectionSort(int matrix[][2], int row, int col) {
  int i, j, k, l, dindex, temp, moves = 0;

  for (i = 0; i < (row - 1); i++) {
    for (k = 0; k < (col - 1); i++) {
      d = matrix[i][k];
      dindex = k;
      for (j = i + 1; j < col; j++ ){
        if (matrix[i][j] == a){
          matrix[i][j] = d;
          matrix[i][dindex] = a;
        }
      }
    }

  }
  return 0;
} */
#include <iostream>

#include <iomanip>

using namespace std;

/************ Prototype Function **********************/
void printMatrix(int myMatrix[][3], int N_Rows, int city_col);
void CountUnhealthySensitive(int myMatrix[][3], int N_Rows, int city_col);

int main() {

  const int N_Rows = 10;
  const int city_col = 3;
  int AirQuality_Index[N_Rows][city_col] = {
      {50, 68, 58}, {58, 115, 78}, {62, 110, 81}, {66, 124, 110},
      {64, 152, 121}, {46, 143, 90}, {46, 143, 90}, {25, 91, 91},
      {27, 19, 59}, {17, 13, 27}};
  // Column 0 is
  printMatrix(AirQuality_Index, N_Rows, city_col);
  return 0;
}

/*********************** Functions *****************************/
void printMatrix(int myMatrix[][3], int N_Rows, int city_col) {
  for (int row = 0; row < N_Rows; row++) {
    for (int column = 0; column < city_col; column++) {
      cout << setw(8) << myMatrix[row][column] << " ";
    }
    cout << endl;
  }
  return;
}

void CountUnhealthySensitive(int myMatrix[][3], int N_Rows, int city_col) {
  int count = 0;
  int unhealthy_level = 101;
  for (int row = 0; row < N_Rows; row++) {
    if (myMatrix[N_Rows][city_col] >= unhealthy_level)
      count = 
  }
  return count;
}
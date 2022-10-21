#include <iostream>

#include <iomanip>

using namespace std;

const int N_Rows = 10;
/************ Prototype Function **********************/
void printMatrix(int myMatrix[][3], int N_Rows, int city_col);
//int CountUnhealthySensitive(int myMatrix[][3], int N_Rows, int city_col);
int CountAllUnhealthySensitive(int myMatrix[][3], int N_Rows, int city_col);
int CountUnhealthySensitiveGJ(int myMatrix[][3], int N_Rows, int city_col);
int CountUnhealthySensitiveFC(int myMatrix[][3], int N_Rows, int city_col);
int CountUnhealthySensitiveD(int myMatrix[][3], int N_Rows, int city_col);
int meanAirQualityIndexGJ(int matrix[][3], int N_Rows, int city_col);

int main() {


  const int city_col = 3;
  int AirQuality_Index[N_Rows][city_col] = {
      {50, 68, 58},   {58, 115, 78}, {62, 110, 81}, {66, 124, 110},
      {64, 152, 121}, {46, 143, 90}, {46, 143, 90}, {25, 91, 91},
      {27, 19, 59},   {17, 13, 27}};
  // Column 0 is
  printMatrix(AirQuality_Index, N_Rows, city_col);
  // Display count
  CountAllUnhealthySensitive(AirQuality_Index, N_Rows, city_col);

  //first city specifically
  CountUnhealthySensitiveGJ(AirQuality_Index, N_Rows, 0);
  //cout << "Grand Junction: " << count << endl;
  //second city specifically
  CountUnhealthySensitiveFC(AirQuality_Index, N_Rows, 1);

  //third city specifically
  CountUnhealthySensitiveD(AirQuality_Index, N_Rows, 2);
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

int CountUnhealthySensitiveGJ(int myMatrix[][3], int N_Rows, int city_col) {
  int count = 0;
  int unhealthy_level = 101;
  for (int row = 0; row < N_Rows; row++) {
    if (myMatrix[row][city_col] >= unhealthy_level) {
      // myMatrix[row]
      count++;
    }
  }
  cout << "Grand Junction: " << count << " times" << endl;
  return count;
}

int CountUnhealthySensitiveFC(int myMatrix[][3], int N_Rows, int city_col) {
  int count = 0;
  int unhealthy_level = 101;
  for (int row = 0; row < N_Rows; row++) {
    if (myMatrix[row][city_col] >= unhealthy_level) {
      // myMatrix[row]
      count++;
    }
  }
  cout << "Fort Collins: " << count << " times" << endl;
  return count;
}

int CountUnhealthySensitiveD(int myMatrix[][3], int N_Rows, int city_col) {
  int count = 0;
  int unhealthy_level = 101;
  for (int row = 0; row < N_Rows; row++) {
    if (myMatrix[row][city_col] >= unhealthy_level) {
      // myMatrix[row]
      count++;
    }
  }
  cout << "Denver: " << count << " times" << endl;
  return count;
}

int CountAllUnhealthySensitive(int myMatrix[][3], int N_Rows, int city_col) {
  int count = 0;
  int unhealthy_level = 101;
  for (int col = 0; col < city_col; col++) {
    for (int row = 0; row < N_Rows; row++) {
      if (myMatrix[row][col] >= unhealthy_level) {
        // myMatrix[row]
        count++;
      }
    }
  }
  cout << "The count of unhealthy air quility " << count << endl;
  return count;
}

int meanAirQualityIndex(int matrix[][3], int N_Rows, int city_col){
  int sum = 0;
  int row, avg;

  for (row = 0; row < N_Rows; row++)
    sum = sum + matrix[row][city_col];

  avg = sum / N_Rows;

  return avg;
}
/******************************************************
Programer: Dillon Hendrix
Discription: Add on to p1 with and 8th column that utilizes a function to drop
the lowest grade and average the remaining grades.
*******************************************************/

#include <iomanip>
#include <iostream>

using namespace std;
/************* Global Variable ****************/
/************ Prototype Function **********************/
void printMatrix(double generic[][8], int N_Rows, int N_Columns);
double dropGradeCol(double genericD[][8], int N_Rows, int N_Columns);

int main() {
const int N_Rows = 6;
const int N_Columns = 8;
  string s = "Student";
  string g1 = "Grade 1";

  // Display Column lables
  // cout << s << setw(5) << g1 << setw(5) << "Grade 2" << setw(5) << "Grade 3"
  // << setw(5) << "Grade 4" << setw(5) << "Test Average" << setw(5) << "Final
  // Grade" << endl;
  cout << "      Student   Grade 1   Grade 2    Grade 3    Grade 4    Avg "
          "Grade  Final Grade  Final Drop"
       << endl;
  cout << "     --------   -------   -------    -------    -------    "
          "---------  -----------  ----------"
       << endl;
  // SG stands for Student Grades
  double SG[N_Rows][N_Columns] = {{1, 100, 100, 100, 100},
                                  {2, 100, 0, 100, 0},
                                  {3, 82, 94, 73, 86},
                                  {4, 64, 74, 84, 94},
                                  {5, 94, 84, 74, 64}};

    int minGrade = 100;
  for (int column = 1; column < N_Columns; column++) {
    if (SG[2][column] < minGrade) {
      minGrade = SG[2][column];
      }
    cout << minGrade << endl;
  //dropGradeCol(SG, N_Rows, N_Columns);
  // Calculate the averaged test values
  SG[0][5] = (SG[0][1] + SG[0][2] + SG[0][3] + SG[0][4]) / 4;
  SG[1][5] = (SG[1][1] + SG[1][2] + SG[1][3] + SG[1][4]) / 4;
  SG[2][5] = (SG[2][1] + SG[2][2] + SG[2][3] + SG[2][4]) / 4;
  SG[3][5] = (SG[3][1] + SG[3][2] + SG[3][3] + SG[3][4]) / 4;
  SG[4][5] = (SG[4][1] + SG[4][2] + SG[4][3] + SG[4][4]) / 4;

  // Calculate the final weighted grade
  SG[0][6] = ((0.2 * SG[0][1]) + (0.3 * SG[0][2]) + (0.3 * SG[0][3]) +
              (0.2 * SG[0][4]));
  SG[1][6] = ((0.2 * SG[1][1]) + (0.3 * SG[1][2]) + (0.3 * SG[1][3]) +
              (0.2 * SG[1][4]));
  SG[2][6] = ((0.2 * SG[2][1]) + (0.3 * SG[2][2]) + (0.3 * SG[2][3]) +
              (0.2 * SG[2][4]));
  SG[3][6] = ((0.2 * SG[3][1]) + (0.3 * SG[3][2]) + (0.3 * SG[3][3]) +
              (0.2 * SG[3][4]));
  SG[4][6] = ((0.2 * SG[4][1]) + (0.3 * SG[4][2]) + (0.3 * SG[4][3]) +
              (0.2 * SG[4][4]));

  // Calculate average grade with drop
  //for (int row = 0; row < N_Rows; row++) {
    }
  printMatrix(SG, N_Rows, N_Columns);

  return 0;
}

/********************* Functions ***************************/

void printMatrix(double generic[][8], int N_Rows, int N_Columns) {
  for (int row = 0; row < N_Rows; row++) {
    for (int column = 0; column < N_Columns; column++) {
      cout << setw(10) << generic[row][column] << " ";
    }
    cout << endl;
  }
  return;
}

/*double dropGradeCol(double genericD[][8], int N_Rows, int N_Columns) {
  int row;
  int minGrade = 100;
  //for (int row = 0; row < N_Rows; row++) {
  for (int column = 1; column < N_Columns; column++) 
    if (genericD[2][column] < minGrade) {
      minGrade = genericD[2][column];
    }
    // return minGrade;
  //}
  cout << minGrade;

  int sum = 0;
  for (int row = 0; row < N_Rows; row++) {
    for (int column = 1; column < N_Columns; column++) {

      sum = SG[row][column] + sum;
    }
  }
  double AverageDG = 0;
  sum = sum - minGrade;
  AverageDG = sum / 3;

  for (int row = 0; row < N_Rows; row++) {
    SG[N_Rows][7] = AverageDG;
  }
  sum = sum - minGrade;
  AverageDG = sum / 3;
  cout << AverageDG;
  cout << endl << minGrade << endl;
  return minGrade;
} */

/* SG[0][7] = (SG[0][1] + SG[0][2] + SG[0][3] + SG[0][4])/3;
SG[1][7] = (SG[1][1] + SG[1][2] + SG[1][3] + SG[1][4])/3;
SG[2][7] = (SG[2][1] + SG[2][2] + SG[2][3] + SG[2][4])/3;
SG[3][7] = (SG[3][1] + SG[3][2] + SG[3][3] + SG[3][4])/3;
SG[4][7] = (SG[4][1] + SG[4][2] + SG[4][3] + SG[4][4])/3; */
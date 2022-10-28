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
//double dropGradeCol(double genericD[][8], int N_Rows, int N_Columns);
double dropGradeCol1(double genericD[][8], int N_Rows, int N_Columns);
double dropGradeCol2(double genericD[][8], int N_Rows, int N_Columns);
double dropGradeCol3(double genericD[][8], int N_Rows, int N_Columns);
double dropGradeCol4(double genericD[][8], int N_Rows, int N_Columns);
double dropGradeCol5(double genericD[][8], int N_Rows, int N_Columns);

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

  /* double minGrade = 100;
   int minGrade_index = 0;
   for (int column = 1; column < N_Columns; column++) {
     if (SG[2][column] < minGrade) {
       minGrade = SG[2][column];
       //minGrade_index = column;
       }

   double sum = 0;
     for (int column = 1; column < 5; column++) {
       sum = SG[2][column] + sum;
     }

   double FinalGrade = 0;
   sum = sum - minGrade;
   FinalGrade = sum / 3;
   SG[2][7] = FinalGrade;
   cout << setprecision(4) << SG[2][minGrade_index] << endl; */

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
  // for (int row = 0; row < N_Rows; row++) {
  dropGradeCol1(SG, N_Rows, N_Columns);
  dropGradeCol2(SG, N_Rows, N_Columns);
  dropGradeCol3(SG, N_Rows, N_Columns);
  dropGradeCol4(SG, N_Rows, N_Columns);
  dropGradeCol5(SG, N_Rows, N_Columns);
  //dropGradeCol3(SG, N_Rows, N_Columns);
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
  double minGrade = 100;
  double FinalGrade = 0;
  int minGrade_index = 0;
  double sum = 0;

  for (int column = 1; column < 5; column++) {
  for (int row = 0; row < 5; row++){
    if (genericD[N_Rows][column] < minGrade) {
      minGrade = genericD[N_Rows][column];
      minGrade_index = column;
      cout << minGrade << endl;
    }
  }
  }
  for (int column = 1; column < 5; column++) {
  for (int row = 0; row < 5; row++){
    sum = genericD[N_Rows][column] + sum;
  }
  }
  for (int row = 0; row < 5; row++) {
    sum = sum - minGrade;
    FinalGrade = sum / 3;
    genericD[N_Rows][7] = FinalGrade;
    // cout << sum;
  }
  //}
  // cout << setprecision(4) << genericD[N_Rows][minGrade_index] << endl;
  // genericD[N_Rows][7] = FinalGrade;
  return 0;
}  */
/******************* Useful Function ************************/
double dropGradeCol1(double genericD[][8], int N_Rows, int N_Columns) {
  double minGrade = 100;
  int minGrade_index = 0;
  for (int column = 1; column < 5; column++) {
    if (genericD[0][column] < minGrade) {
      minGrade = genericD[0][column];
      minGrade_index = column;
      //cout << minGrade << endl;
    }
    }
    double sum = 0;
    for (int column = 1; column < 5; column++) {
      sum = genericD[0][column] + sum;
    
    }
  
    double FinalGrade = 0;
    sum = sum - minGrade;
    FinalGrade = sum / 3;
    genericD[0][7] = FinalGrade;
    cout << setprecision(4) << genericD[0][minGrade_index] << endl;

  return 0;
  }
double dropGradeCol2(double genericD[][8], int N_Rows, int N_Columns) {
  double minGrade = 100;
  int minGrade_index = 0;
  for (int column = 1; column < 5; column++) {
    if (genericD[1][column] < minGrade) {
      minGrade = genericD[1][column];
      minGrade_index = column;
      //cout << minGrade << endl;
    }
    }
    double sum = 0;
    for (int column = 1; column < 5; column++) {
      sum = genericD[1][column] + sum;
    
    }
  
    double FinalGrade = 0;
    sum = sum - minGrade;
    FinalGrade = sum / 3;
    genericD[1][7] = FinalGrade;
    cout << setprecision(4) << genericD[1][minGrade_index] << endl;

  return 0;
  }

double dropGradeCol3(double genericD[][8], int N_Rows, int N_Columns) {
  double minGrade = 100;
  int minGrade_index = 0;
  for (int column = 1; column < 5; column++) {
    if (genericD[2][column] < minGrade) {
      minGrade = genericD[2][column];
      minGrade_index = column;
      //cout << minGrade << endl;
    }
    }
    double sum = 0;
    for (int column = 1; column < 5; column++) {
      sum = genericD[2][column] + sum;
    
    }
  
    double FinalGrade = 0;
    sum = sum - minGrade;
    FinalGrade = sum / 3;
    genericD[2][7] = FinalGrade;
    cout << setprecision(4) << genericD[2][minGrade_index] << endl;

  return 0;
  }

double dropGradeCol4(double genericD[][8], int N_Rows, int N_Columns) {
  double minGrade = 100;
  int minGrade_index = 0;
  for (int column = 1; column < 5; column++) {
    if (genericD[3][column] < minGrade) {
      minGrade = genericD[3][column];
      minGrade_index = column;
      //cout << minGrade << endl;
    }
    }
    double sum = 0;
    for (int column = 1; column < 5; column++) {
      sum = genericD[3][column] + sum;
    
    }
  
    double FinalGrade = 0;
    sum = sum - minGrade;
    FinalGrade = sum / 3;
    genericD[3][7] = FinalGrade;
    cout << setprecision(4) << genericD[3][minGrade_index] << endl;

  return 0;
  }
double dropGradeCol5(double genericD[][8], int N_Rows, int N_Columns) {
  double minGrade = 100;
  int minGrade_index = 0;
  for (int column = 1; column < 5; column++) {
    if (genericD[4][column] < minGrade) {
      minGrade = genericD[4][column];
      minGrade_index = column;
      //cout << minGrade << endl;
    }
    }
    double sum = 0;
    for (int column = 1; column < 5; column++) {
      sum = genericD[4][column] + sum;
    
    }
  
    double FinalGrade = 0;
    sum = sum - minGrade;
    FinalGrade = sum / 3;
    genericD[4][7] = FinalGrade;
    cout << setprecision(4) << genericD[4][minGrade_index] << endl;

  return 0;
  }
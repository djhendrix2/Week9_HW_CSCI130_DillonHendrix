/******************************************************
Programer: Dillon Hendrix
Discription: Any array that takes in 4 exam grades. The array has a column that averages them normally as well as a column to get the final weighted grade. All data needs to be displayed into a table. 
*******************************************************/

#include <iomanip>
#include <iostream>

using namespace std;

/************ Prototype Function **********************/
void printMatrix(double SG[][7], int N_Rows, int N_Columns);

int main() {
  string s = "Student";
  string g1 = "Grade 1";
  
  // Display Column lables 
  //cout << s << setw(5) << g1 << setw(5) << "Grade 2" << setw(5) << "Grade 3" << setw(5) << "Grade 4" << setw(5) << "Test Average" << setw(5) << "Final Grade" << endl;
  cout << "      Student   Grade 1   Grade 2    Grade 3    Grade 4    Avg Grade  Final Grade " << endl;
  cout << "     --------   -------   -------    -------    -------    ---------  ----------- " << endl;
  const int N_Rows = 60;
  const int N_Columns = 7;
  // SG stands for Student Grades 
  double SG[N_Rows][N_Columns] = {
      {1, 100, 100, 100, 100}, {2, 100, 0, 100, 0}, {3, 82, 94, 73, 86}, {4, 64, 74, 84, 94}, {5, 94, 84, 74, 64}};
  // Calculate the averaged test values
  SG[0][5] = (SG[0][1] + SG[0][2] + SG[0][3] + SG[0][4])/4;
  SG[1][5] = (SG[1][1] + SG[1][2] + SG[1][3] + SG[1][4])/4;
    SG[2][5] = (SG[2][1] + SG[2][2] + SG[2][3] + SG[2][4])/4;
    SG[3][5] = (SG[3][1] + SG[3][2] + SG[3][3] + SG[3][4])/4;
    SG[4][5] = (SG[4][1] + SG[4][2] + SG[4][3] + SG[4][4])/4;
  
  // Calculate the final weighted grade
  SG[0][6] = ((0.2*SG[0][1]) + (0.3*SG[0][2]) + (0.3*SG[0][3]) + (0.2*SG[0][4]));
  SG[1][6] = ((0.2*SG[1][1]) + (0.3*SG[1][2]) + (0.3*SG[1][3]) + (0.2*SG[1][4]));
  SG[2][6] = ((0.2*SG[2][1]) + (0.3*SG[2][2]) + (0.3*SG[2][3]) + (0.2*SG[2][4]));
  SG[3][6] = ((0.2*SG[3][1]) + (0.3*SG[3][2]) + (0.3*SG[3][3]) + (0.2*SG[3][4]));
  SG[4][6] = ((0.2*SG[4][1]) + (0.3*SG[4][2]) + (0.3*SG[4][3]) + (0.2*SG[4][4]));
  printMatrix(SG, N_Rows, N_Columns);
  return 0;
}

void printMatrix(double SG[][7], int N_Rows, int N_Columns) {
  for (int row = 0; row < N_Rows; row++) {
    for (int column = 0; column < N_Columns; column++) {
      cout << setw(10) << SG[row][column] << " ";
    }
    cout << endl;
  }
  return;
}
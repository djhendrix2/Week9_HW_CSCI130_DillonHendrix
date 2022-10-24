/************************************************
Programmer: Dillon Hendrix
Discription: Make a 2d string that takes in true false test values then a function that takes those test values and grades them using a 1d array
Date: 10/23/2022
***************************************************/

#include <iomanip>
#include <iostream>

using namespace std;

/************** Function Prototypes ***************/
void printMatrix(char TestAnswers[][5], int Test_Num, int N_Columns);
//int testGrades(char TestAnswers[][5], int Test_Num, int N_Columns);
/******************** Main ************************/
int main() {

  const int Test_Num = 6;
  const int N_Columns = 5;
  // A 2d array that inputs  
  char TestAnswers[Test_Num][N_Columns] = {{'T', 'F', 'T', 'T', 'T'}, {'T', 'T', 'T', 'T', 'T'}, {'T', 'T', 'F', 'F', 'T'}, {'F', 'T', 'F', 'F', 'F'}, {'F', 'F', 'F', 'F', 'F'}, {'T', 'T', 'F', 'T', 'F'}};
  cout << endl;
  printMatrix(TestAnswers, Test_Num, N_Columns);
  // initialize a 1d array to take in test grades
  int TestGrades[Test_Num];
  //testGrades(TestAnswers, Test_Num, N_Columns);
  return 0;
}

/******************** Function *********************/

void printMatrix(char TestAnswers[][5], int Test_Num, int N_Columns) {
  for (int row = 0; row < Test_Num; row++) {
    for (int column = 0; column < N_Columns; column++) {
      cout << setw(8) << TestAnswers[row][column] << " ";
    }
    cout << endl;
  }
  return;
}

/* int testGrades(char TestAnswers[][5], int Test_Num, int N_Columns) {
  int TestGrade = 0;
  for (int row = 0; row < Test_Num; row++) {
  if (TestAnswer[Test_Num][1] == 'T'){
    TestGrade = Testgrade + 5
  }
    else {
      TestGrade = Testgrade
    }
  if (TestAnswer[Test_Num][2] == 'T'){
    TestGrade = Testgrade + 5
  }
    else {
      TestGrade = Testgrade
    }
    if (TestAnswer[Test_Num][3] == 'F'){
    TestGrade = Testgrade + 5
  }
    else {
      TestGrade = Testgrade
    }
    if (TestAnswer[Test_Num][4] == 'F'){
    TestGrade = Testgrade + 5
  }
    else {
      TestGrade = Testgrade
    }
    if (TestAnswer[Test_Num][5] == 'T'){
    TestGrade = Testgrade + 5
  }
    else {
      TestGrade = Testgrade
    }
    cout << endl << TestGrade;
} */
/************************************************
Programmer: Dillon Hendrix
Discription: Make a 2d string that takes in true false test values then a function that takes those test values and grades them using a 1d array
Date: 10/23/2022
***************************************************/

#include <iomanip>
#include <iostream>

using namespace std;

/**************** Global Variables ****************/
  int Testgrade = 0;
  int TestGrade1 = 0;
  int TestGrade2 = 0;
  int TestGrade3 = 0;
  int TestGrade4 = 0;
  int TestGrade5 = 0;
  int TestGrade6 = 0;
  const int Test_Num = 6;
  const int N_Columns = 5;
  int StudentGrade[Test_Num];
/************** Function Prototypes ***************/
void printMatrix(char TestAnswers[][5], int Test_Num, int N_Columns);
/*int testGrades1(char TestAnswers[][5], int Test_Num, int N_Columns);
int testGrades2(char TestAnswers[][5], int Test_Num, int N_Columns);
int testGrades3(char TestAnswers[][5], int Test_Num, int N_Columns);
int testGrades4(char TestAnswers[][5], int Test_Num, int N_Columns);
int testGrades5(char TestAnswers[][5], int Test_Num, int N_Columns);
int testGrades6(char TestAnswers[][5], int Test_Num, int N_Columns); */
int testGrades(char TestAnswers[][5], int Test_Num, int N_Columns);
void printArray(int StudentGrade[], int Test_Num);


/******************** Main ************************/
int main() {
  
  // A 2d array that inputs  
  char TestAnswers[Test_Num][N_Columns] = {{'T', 'F', 'T', 'T', 'T'}, {'T', 'T', 'T', 'T', 'T'}, {'T', 'T', 'F', 'F', 'T'}, {'F', 'T', 'F', 'F', 'F'}, {'F', 'F', 'F', 'F', 'F'}, {'T', 'T', 'F', 'T', 'F'}};
  cout << endl;
  printMatrix(TestAnswers, Test_Num, N_Columns);
  // initialize a 1d array to take in test grades
  for (int row = 0; row < Test_Num; row ++){
  //int TestGrades[Test_Num];
  testGrades(TestAnswers, row, N_Columns);
  cout << endl;}
  /*testGrades2(TestAnswers, Test_Num, N_Columns);
  cout << endl;
  testGrades3(TestAnswers, Test_Num, N_Columns);
  cout << endl;
  testGrades4(TestAnswers, Test_Num, N_Columns);
  cout << endl;
  testGrades5(TestAnswers, Test_Num, N_Columns);
  cout << endl;
  testGrades6(TestAnswers, Test_Num, N_Columns);
  cout << endl; */
  //printArray(TestGrades, Test_Num);
  cout << setw(6) << "Student grade 1-6 out of 25 are displayed below: " << endl << endl;
  printArray(StudentGrade, Test_Num);
  cout << endl;
  
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

int testGrades(char TestAnswers[][5], int Test_Num, int N_Columns) {
  int testgrade = 0;
  char testKey[] = {'T', 'T', 'F', 'F', 'T'};

  //for (int row = 0; row < Test_Num; row++){
    for (int i= 0; i < N_Columns; i++){
     // cout << "Test answer i " << TestAnswer[0][i] << endl;
      if (TestAnswers[Test_Num][i] == testKey[i]){
        //cout << "Correct" << endl;
        testgrade = testgrade + 5;
      }
    else{
      //cout << "Incorrect" << endl;
    }
}
        cout << "Student  " <<  Test_Num + 1 << " grade equals " << testgrade << " / 25 " << endl;
    StudentGrade[Test_Num] = testgrade;
  return 0;
}

/* int testGrades1(char TestAnswers[][5], int Test_Num, int N_Columns) {
  int testgrade = 0;
  char testKey[] = {'T', 'T', 'F', 'F', 'T'};

  //for (int row = 0; row < Test_Num; row++){
    for (int i= 0; i < N_Columns; i++){
     // cout << "Test answer i " << TestAnswer[0][i] << endl;
      if (TestAnswers[0][i] == testKey[i]){
        //cout << "Correct" << endl;
        testgrade = testgrade + 5;
      }
    else{
      //cout << "Incorrect" << endl;
    }
        cout << "Student 1 grade = " << testgrade << " / 25 " << endl;
}
    StudentGrade[0] = testgrade;
  return 0;
} */
// Student 2
/* int testGrades2(char TestAnswers[][5], int Test_Num, int N_Columns) {
  int testgrade = 0;
  char testKey[] = {'T', 'T', 'F', 'F', 'T'};

  //for (int row = 0; row < Test_Num; row++){
    for (int i= 0; i < N_Columns; i++)
      if (TestAnswers[1][i] == testKey[i]){
        //cout << "Correct" << endl;
        testgrade = testgrade + 5;
      }
    else{
      //cout << "Incorrect" << endl;
    }
        cout << "Student 2 grade = " << testgrade << " / 25 " << endl;
  //}
  StudentGrade[1] = testgrade;
  return 0;
}
int testGrades3(char TestAnswers[][5], int Test_Num, int N_Columns) {
  int testgrade = 0;
  char testKey[] = {'T', 'T', 'F', 'F', 'T'};

  //for (int row = 0; row < Test_Num; row++){
    for (int i= 0; i < N_Columns; i++)
      if (TestAnswers[2][i] == testKey[i]){
        //cout << "Correct" << endl;
        testgrade = testgrade + 5;
      }
    else{
      //cout << "Incorrect" << endl;
    }
        cout << "Student 3 grade = " << testgrade << " / 25 " << endl;
  //}
  StudentGrade[2] = testgrade;
  return 0;
}
int testGrades4(char TestAnswers[][5], int Test_Num, int N_Columns) {
  int testgrade = 0;
  char testKey[] = {'T', 'T', 'F', 'F', 'T'};

  //for (int row = 0; row < Test_Num; row++){
    for (int i= 0; i < N_Columns; i++)
      if (TestAnswers[3][i] == testKey[i]){
        //cout << "Correct" << endl;
        testgrade = testgrade + 5;
      }
    else{
      //cout << "Incorrect" << endl;
    }
        cout << "Student 4 grade = " << testgrade << " / 25 " << endl;
  //}
  StudentGrade[3] = testgrade;
  return 0;
}
int testGrades5(char TestAnswers[][5], int Test_Num, int N_Columns) {
  int testgrade = 0;
  char testKey[] = {'T', 'T', 'F', 'F', 'T'};

  //for (int row = 0; row < Test_Num; row++){
    for (int i= 0; i < N_Columns; i++)
      if (TestAnswers[4][i] == testKey[i]){
        //cout << "Correct" << endl;
        testgrade = testgrade + 5;
      }
    else{
      //cout << "Incorrect" << endl;
    }
        cout << "Student 5 grade = " << testgrade << " / 25 " << endl;
  //}
  StudentGrade[4] = testgrade;
  return 0;
}
int testGrades6(char TestAnswers[][5], int Test_Num, int N_Columns) {
  int testgrade = 0;
  char testKey[] = {'T', 'T', 'F', 'F', 'T'};

  //for (int row = 0; row < Test_Num; row++){
    for (int i= 0; i < N_Columns; i++)
      if (TestAnswers[5][i] == testKey[i]){
        //cout << "Correct" << endl;
        testgrade = testgrade + 5;
      }
    else{
      //cout << "Incorrect" << endl;
    }
        cout << "Student 6 grade = " << testgrade << " / 25 " << endl;
  //}
  StudentGrade[5] = testgrade;
  return 0;
} */

void printArray(int StudetGrade[], int Test_Num) {
  int index;
  for (index = 0; index < Test_Num; index++)
    cout << setw(8) << StudentGrade[index] << " ";

  cout << endl;
  return;
}
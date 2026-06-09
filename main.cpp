#include <iostream>

using namespace std;

int main()
{
string studentName;
int numAssignments, score, totalPoints = 0;

 cout << "Enter student name: ";
 cin >> studentName;
 cout << "Enter the number of assignments: ";
 cin >> numAssignments;

 for (int i = 0 ; i < numAssignments; i++){
    cout << "Enter score for assignment " << i+1 << ":";
    cin >> score;
    totalPoints += score;
 }
 double average = static_cast<double>(totalPoints)/numAssignments;
 char grade;

 if (average >= 90) grade = 'A';
 else if (average >= 80) grade = 'B';
 else if (average >= 70) grade = 'C';
 else if (average >= 60) grade = 'D';
 else grade ='F';

 int totalPossible = numAssignments * 100;
 cout << "/n--- Grade Report ---/n"<<endl;
 cout << "Student: " << studentName<<endl;
 cout << "Average Score: " << average << endl;
 cout << "Letter Grade: " << grade << endl;
 cout << "Total Points: "<< totalPoints <<endl;
 cout << "Total Possible: " << totalPossible << endl;

    return 0;
}

#include <iostream>
using namespace std;
main()

{

string name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float percentage;


cout << " Enter your name:";
cin >> name;

cout << " Marks of subject 1:";
cin >> subject1;

cout << " Marks of subject 2 ";
cin >> subject2;

cout << " Marks of subject 3 ";
cin >> subject3;

cout << " Marks of subject 4 ";
cin >> subject4;

cout << "Marks of subject 5";
cin >> subject5;


percentage = ((subject1 + subject2 + subject3 + subject4 + subject5) * 100 ) / 500;

cout << " Your Percentage is  " << percentage << endl;

}
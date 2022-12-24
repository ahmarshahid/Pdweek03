#include <iostream>
using namespace std;
main()
{

int number;
int number1;
int number2;
int number3;
int number4;
int numbertotal;

cout << "Enter the number :";
cin >> number ;

number1 = number % 10;
number =  number / 10;

number2 = number % 10;
number = number / 10;

number3 = number % 10;
number = number / 10;

number4 = number % 10;

numbertotal = number1 + number2 + number3 + number4;

cout << " The total sum of number is :" << numbertotal ;



}

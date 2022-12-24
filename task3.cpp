#include <iostream>
using namespace std;
main()

{
float Vi;
float Vf;
float time;
float acceleration;

cout << "Enter initial Velocity : ";
cin >> Vi;

cout << "Enter acceleration : ";
cin >> acceleration;

cout << "Enter the time : ";
cin >> time;

Vf = acceleration * time + Vi;

cout << "finalvelocity =" << Vf << endl;

}
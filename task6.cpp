#include <iostream>
using namespace std;
main()

{

float size;
float cost;
float area;
float costperpound;
float persquarefeet;

cout << " Enter the size of bag : ";
cin >> size;

cout << " Enter the cost of fertilizer : ";
cin >> cost;

cout << " Enter the area : ";
cin >> area;

costperpound = cost / size;

cout << " The Cost per pound is :" << costperpound <<endl ;


persquarefeet = cost / area;

cout << " The cost per square feet is :" << persquarefeet <<endl ;


}
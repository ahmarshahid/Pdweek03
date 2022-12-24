#include <iostream>
using namespace std;
main()

{

string moviename;
int adultticket;
int childticket;
int adultticketsold;
int childticketsold;
int totalamount;
int donation;
float percentage;
float totalamountafterdonation;
 

cout << "Enter the movie name :";
cin >> moviename;

cout << " Enter price of adult tickets : ";
cin >> adultticket;

cout << " Enter the price of child tickets : ";
cin >> childticket;

cout << " Enter number of adult tickets sold : ";
cin >> adultticketsold;

cout << " Enter number of child tickets sold : ";
cin >> childticketsold;

cout << " Enter the percentage you want to donate :" <<endl;
cin >> percentage;

totalamount = adultticket * adultticketsold + childticket * childticketsold;

cout << " The total amount generated is : " << totalamount;


donation = totalamount * (percentage /100) ;

totalamountafterdonation = totalamount - donation;

cout << " Total amount after donation " << totalamountafterdonation ;




}





#include <iostream>
using namespace std;
main()

{


float vegetablesweight;
float fruitsweight;
float coinsfruit;
float coinsvegetables;
float totalpriceincoins;
float totalpriceinrps;


cout << " Enter the weight of vegetables : ";
cin >> vegetablesweight ;

cout << " Enter the price of vegetables per kilograms in coins : ";
cin >> coinsvegetables ;

cout << " Enter the weight of fruits : ";
cin >> fruitsweight;

cout << " Enter the price of fruits in kilograms in coins :";
cin >> coinsfruit ;
 
totalpriceincoins =  (vegetablesweight*coinsvegetables) + (fruitsweight*coinsfruit);
totalpriceinrps = totalpriceincoins / 1.94 ;

cout << " Total price in rupees : " << totalpriceinrps;


}



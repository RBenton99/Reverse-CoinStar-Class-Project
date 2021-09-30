#include <iostream>
using namespace std;

//Program Main Body
int main()
{
//Variable Declarations
	double x;
	int y;
	
//Initial Input Prompt
	cout << "Please enter the amount of money you want change for: " << endl;
	cin >> x;
	y=x*100;
	
//Dollars Output
	cout << "You will need " << y/100 << " dollars. " ;
	cout << endl;
	y=y%100;
	
//Half Dollar Output
	cout << "You will need " << y/50 << " half dollars. " ;
	cout << endl;
	y=y%50;
	
//Quarters Output
	cout << "You will need " << y/25 << " quarters. " ;
	cout << endl;
	y=y%25;
	
//Dimes Output
	cout << "You will need " << y/10 << " dimes. " ;
	cout << endl;
	y=y%10;
	
//Nickels Output
	cout << "You will need " << y/5 << " nickels. " ;
	cout << endl;
	y=y%5;
	
//Pennies Output
	cout << "You will need " << y/1 << " pennies. " ;
	
	return 0;
}
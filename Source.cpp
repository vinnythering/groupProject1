
#include <iostream>
#include "classes.h"
#include "child.h"
#include <string>

using namespace std;

int main()

{
	double p = 0;
	int u = 0;
	string d; 
	
	cout << "Welcome";
	cout << "\nPlease enter the price for item 1:";
	while (p <= 0)
	{
		cin >> p;
		if (p <= 0)
		{
			cout << "\nPlease enter a valid number.";
		}	
	}
	cout << "\nInventory must be greater than 0";
	cout << "\nPlease enter the units on hand for item 1:";
	while (u <= 0)
	{
		cin >> u;
		if (u <= 0)
		{
			cout << "\nPlease enter a valid number.";
		}	
	}
	cout << "\n Please enter the description for item 1:";
	cin >> d;
	cout << "\nDisplay all items:";
	item obj1(d, u, p);
	cout << "\nDescription" << obj1.getDescription() << "\nunits:" << obj1.getUnitsOnHand() << "\nPrice:" << obj1.getPrice();
	item obj2("Jeans", 40, 34.95);
	cout << "\nDescription" << obj2.getDescription() << "\nunits:" << obj2.getUnitsOnHand() << "\nPrice:" << obj2.getPrice();

	system("pause");
	return 0;

}

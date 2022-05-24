
#include <iostream>
#include "RetailItem.h"
#include <string>

using namespace std;

int main()

{

	cout << "Welcome";
	cout << "\nPrice must be greater then 0";
		double p;
	cout << "\n Please enter the price for item 1:";
	cin >> p;
	cout << "\nInventory must be greater than 0";
	cout << "\nPlease enter the units on hand for item 1:";

	int u;
	cin >> u;
	cout << "\n Please enter the description for item 1:";
		string d;

	cin >> d;
	cout << "\nDisplay all items:";
	RetailItem obj1(d, u, p);
	cout << "\nDescription" << obj1.getDescription() << "\nunits:" << obj1.getUnitsOnHand() << "\nPrice:" << obj1.getPrice();
	RetailItem obj2("Jeans", 40, 34.95);
	cout << "\nDescription" << obj2.getDescription() << "\nunits:" << obj2.getUnitsOnHand() << "\nPrice:" << obj2.getPrice();

	system("pause");
	return 0;

}
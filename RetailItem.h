#pragma once
#include <iostream>
#include <string>

using namespace std;


class RetailItem {
private:
	string description;
	int unitsonhand;
	double price;

public:
	RetailItem();
	RetailItem(string, int , double);

	void setDescription(string);
	string getDescription();
	int getUnitsOnHand();
	void setUnitsOnHand(int);
	double getPrice();
	void setPrice(double);

};
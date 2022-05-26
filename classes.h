#pragma once
#include <iostream>
#include <string>

using namespace std;

class inventory {
	private:
		double markupPercent;
		double price;
		double cost;
		const double tax = 9.5;
		
		
	public:
		inventory();
};

class item {
	private:
		int sku;
		int unitsOnHand;
		string itemDescription;
		double price;
	
	public:
		item();
		item(string, int , double);

		void setDescription(string);
		string getDescription();
		int getUnitsOnHand();
		void setUnitsOnHand(int);
		double getPrice();
		void setPrice(double);
		int getSKU();
		void setSKU(int);
};

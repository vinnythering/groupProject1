#include <iostream>
#include "RetailItem.h"
#include <string>

using namespace std;

RetailItem::RetailItem() {
	description = "";

}
RetailItem::RetailItem(string d, int uni, double p) {
	description = d;
	unitsonhand = uni;
	price = p;

}

string RetailItem::getDescription() {
	return description;
}

void RetailItem::setDescription(string str) {
	description = str;
}

void RetailItem::setUnitsOnHand(int units) {
	unitsonhand = units;
}
int RetailItem::getUnitsOnHand() {
	return unitsonhand;
}
void RetailItem::setPrice(double pp) {
	price = pp;
}
double RetailItem::getPrice() {
	return price;
}
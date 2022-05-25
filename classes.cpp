#include <iostream>
#include "classes.h"
#include <string>

using namespace std;

inventory::inventory() {
	
}

inventory::inventory() {
	
}

item::item() {
	description = "";

}
item::item(string d, int uni, double p) {
	itemDescription = d;
	unitsOnHand = uni;
	price = p;

}

string item::getDescription() {
	return itemDescription;
}

void item::setDescription(string str) {
	description = str;
}

void item::setUnitsOnHand(int units) {
	unitsOnHand = units;
}
int item::getUnitsOnHand() {
	return unitsOnHand;
}
void item::setPrice(double pp) {
	price = pp;
}
double item::getPrice() {
	return price;
}

int item::getSKU() {
	return sku;
}
	
void item::setSKU(int s) {
	sku = s;
}

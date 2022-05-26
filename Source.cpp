
#include <iostream>
#include "classes.h"
#include "child.h"
#include <string>

using namespace std;

void mainMenu();

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

void mainMenu()
{
	int choice = 0;
	
	cout << "Main Menu" << endl << endl;
	cout << "Enter a number to choose a menu option." << endl;
	cout << "1) Enter new item." << endl;
	cout << "2) Enter an order." << endl;
	cout << "3) Sale" << endl;
	cout << "4) Print complete report." << endl;
	cout << "5) Quit." << endl << endl;
	cout << "Enter: ";
	do
	{
		cin >> choice;
		if (choice <= 0 || choice > 5)
		{
			cout << "Please enter a valid option: ";
			continue;
		}
	}
	
	switch (choice)
	{
		case 1:
			newItem();
			break;
		case 2:
			order();
			break;
		case 3:
			sale();
			break;
		case 4:
			printReport();
			break;
		case 5:
			quitProgram();
			break;
	}
}

void newItem()
{
	int choice = 0;
	
	cout << "New Item" << endl << endl;
	cout << "Enter a number to choose a menu option." << endl;
	cout << "1) Add appliance." << endl;
	cout << "2) Add digital media." << endl;
	cout << "3) Add furniture" << endl;
	cout << "4) Return to main menu." << endl;
	cout << "Enter: ";
	do
	{
		cin >> choice;
		if (choice <= 0 || choice > 4)
		{
			cout << "Please enter a valid option: ";
			continue;
		}
	}
	
	switch (choice)
	{
		case 1:
			newAppliance();
			break;
		case 2:
			newDigitalMedia();
			break;
		case 3:
			newFurniture();
			break;
		case 4:
			mainMenu();
			break;
	}
}

void newAppliance()
{
	char continueNewItem = 0;
	int sku;
	
	sku[] = sku();
	
	cout << "New Appliance" << endl;
	cout << "To continue, enter 'Y': ";
	cin >> continueNewItem;
	if (continueNewItem != 'Y')
	{
		mainMenu();
	}
	cout << endl;
	
	string manufacturer = "";
	cout << "Enter manufacturer: ";
	cin >> manufacturer;
	setManufacturer(manufacturer);
	cout << endl;
	
	string color = "";
	cout << "Enter color: ";
	cin >> color;
	setColor(color);
	cout << endl;
	
	string description = "";
	cout << "Enter description: ";
	cin >> description;
	setDescription(description);
	cout << endl;
	
	double cost = 0;
	cout << "Enter cost: ";
	cin >> cost;
	setCost(cost);
	cout << endl;
}

void newDigitalMedia()
{
	char continueNewItem = 0;
	int sku;
	
	sku[] = sku();
	
	cout << "New Digital Media" << endl;
	cout << "To continue, enter 'Y': ";
	cin >> continueNewItem;
	if (continueNewItem != 'Y')
	{
		mainMenu();
	}
	cout << endl;
	
	string manufacturer = "";
	cout << "Enter manufacturer: ";
	cin >> manufacturer;
	setManufacturer(manufacturer);
	cout << endl;
	
	string description = "";
	cout << "Enter description: ";
	cin >> description;
	setDescription(description);
	cout << endl;
	
	double cost = 0;
	cout << "Enter cost: ";
	cin >> cost;
	setCost(cost);
	cout << endl;
}

void newFurniture()
{
	char continueNewItem = 0;
	int sku;
	
	sku[] = sku();
	
	cout << "New Furniture" << endl;
	cout << "To continue, enter 'Y': ";
	cin >> continueNewItem;
	if (continueNewItem != 'Y')
	{
		mainMenu();
	}
	cout << endl;
	
	string manufacturer = "";
	cout << "Enter manufacturer: ";
	cin >> manufacturer;
	setManufacturer(manufacturer);
	cout << endl;
	
	string color = "";
	cout << "Enter color: ";
	cin >> color;
	setColor(color);
	cout << endl;
	
	string description = "";
	cout << "Enter description: ";
	cin >> description;
	setDescription(description);
	cout << endl;
	
	double cost = 0;
	cout << "Enter cost: ";
	cin >> cost;
	setCost(cost);
	cout << endl;	
}


void quitProgram()
{
	ifstream inFile;
	ofstream outFile;

	inFile.open("inventory.txt");
	outFile.open("inventory.txt");
	outFile << fixed << showpoint << setprecision(2);
	outfile << manufacturer.appliance[] << " " << color.appliance[] << " " << description.appliance[] << " " << cost.appliance[] << " " << sku.appliance[] << endl;
	outfile << manufacturer.digitalMedia[] << " " << description.digitalMedia[] << " " << cost.digitalMedia[] << " " << sku.digitalMedia[] << endl;
	outfile << manufacturer.furniture[] << " " << color.furniture[] << " " << description.furniture[] << " " << cost.furniture[] << " " << sku.furniture[] << endl;
		
}

int sku()
{
	int sku;
	sku++;
	return sku;
}



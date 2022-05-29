
#include <iostream>
#include "classes.h"
#include "child.h"
#include <string>

using namespace std;

void mainMenu();
void newItem();
void newAppliance();
void newDigitalMedia();
void newFurniture();
void quitProgram();
int sku();

int main()

{
	
	return 0;

}

void mainMenu()
{
	int choice = 0;
	
	cout << "Restaurant Management Main Menu" << endl << endl;
	cout << "Enter a number to choose a menu option." << endl;
	cout << "1) Cash handling." << endl;
	cout << "2) Employee information." << endl;
	cout << "3) Inventory." << endl;
	cout << "4) Sales." << endl;
	cout << "5) Quit." << endl << endl;
	cout << "Enter: ";
	
	do
	{
		cin >> choice;
		if (choice <= 0 || choice > 5)
		{
			cout << endl;
			cout << "Please enter a valid option: ";
			continue;
		}
	} while (choice <=0 || choice > 5);
	
	cout << endl;
	
	switch (choice)
	{
		case 1:
			cashHandling();
			break;
		case 2:
			employeeInformation();
			break;
		case 3:
			inventory();
			break;
		case 4:
			sales();
			break;
		case 5:
			quitProgram();
			break;
	}
}

void cashHandling()
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



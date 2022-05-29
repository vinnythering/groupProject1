
#include <iostream>
#include "classes.h"
#include "child.h"
#include <string>

using namespace std;

void mainMenu();
void cashHandling();
void employeeInformation();
void inventory();
void sales();
void quitProgram();
void revenue();
void tips();
void cashInBank();
void employeeData();
void positions();
void scheduling();
void foodOnHand();
void materialsOnHand();
void ordering();
void sale();
void refund();

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
	
	cout << "Cash Handling" << endl << endl;
	cout << "Enter a number to choose a menu option." << endl;
	cout << "1) Today's revenue." << endl;
	cout << "2) Today's tips." << endl;
	cout << "3) Cash in bank." << endl;
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
	} while (choice <=0 || choice > 4);
	
	switch (choice)
	{
		case 1:
			revenue();
			break;
		case 2:
			tips();
			break;
		case 3:
			cashInBank();
			break;
		case 4:
			mainMenu();
			break;
	}
}

void employeeInformation()
{
	int choice = 0;
	
	cout << "Employee Information" << endl << endl;
	cout << "Enter a number to choose a menu option." << endl;
	cout << "1) Employee Data." << endl;
	cout << "2) Positions." << endl;
	cout << "3) Scheduling." << endl;
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
	} while (choice <=0 || choice > 4);
	
	switch (choice)
	{
		case 1:
			employeeData();
			break;
		case 2:
			positions();
			break;
		case 3:
			scheduling();
			break;
		case 4:
			mainMenu();
			break;
	}
}

void inventory()
{
	int choice = 0;
	
	cout << "Inventory" << endl << endl;
	cout << "Enter a number to choose a menu option." << endl;
	cout << "1) Food on Hand." << endl;
	cout << "2) Materials on Hand." << endl;
	cout << "3) Ordering." << endl;
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
	} while (choice <=0 || choice > 4);
	
	switch (choice)
	{
		case 1:
			foodOnHand();
			break;
		case 2:
			materialsOnHand();
			break;
		case 3:
			ordering();
			break;
		case 4:
			mainMenu();
			break;
	}
}

void sales()
{
	int choice = 0;
	
	cout << "Sales" << endl << endl;
	cout << "Enter a number to choose a menu option." << endl;
	cout << "1) Input a sale." << endl;
	cout << "2) Refund a sale." << endl;
	cout << "3) Return to main menu." << endl;
	cout << "Enter: ";
	do
	{
		cin >> choice;
		if (choice <= 0 || choice > 3)
		{
			cout << "Please enter a valid option: ";
			continue;
		}
	} while (choice <=0 || choice > 3);
	
	switch (choice)
	{
		case 1:
			sale();
			break;
		case 2:
			refund();
			break;
		case 3:
			mainMenu();
			break;
	}
}

void revenue()
{
	cout << "Sales today:" << endl;
	cout << 
}

void tips()
{

}

void cashInBank()
{

}

void employeeData()
{

}

void positions()
{

}

void scheduling()
{

}

void foodOnHand()
{

}

void materialsOnHand()
{

}

void ordering()
{

}

void sale();
{

}

void refund();
{

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



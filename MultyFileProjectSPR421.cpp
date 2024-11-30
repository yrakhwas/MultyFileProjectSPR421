#include <iostream>
#include "MainBoard.h"
using namespace std;

void Menu()
{
	int choice;
	cout << "1. Show" << endl;
	cout << "2. Create computer" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		MainBoard comp;
		comp.Show();
		Menu();
	}
	case 2:
	{
		MainBoard comp;
		comp.createComp();
		Menu();
	}
	case 3:
	{
		exit(0);
	}
	default:
	{
		cout << "Invalid choice" << endl;
		Menu();
	}
	}
}

int main()
{
	Menu();
	cout << "Bye" << endl;
}

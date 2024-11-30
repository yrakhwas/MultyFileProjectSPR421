#include "SSD.h"

SSD::SSD() :type("no type"), capacity(0) {}

SSD::SSD(string type, int capacity) : type(type), capacity(capacity) {}

void SSD::Show() const
{
	cout << "SSD: " << type << endl;
	cout << "Capacity: " << capacity << " GB" << endl;
}

void SSD::AsInfo()
{
	cout << "Enter SSD type: ";
	cin >> type;
	cout << "Enter SSD capacity: ";
	cin >> capacity;
	cout << endl;
}

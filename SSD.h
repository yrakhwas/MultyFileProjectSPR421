#pragma once
#include <iostream>
using namespace std;

class SSD {
	string type;
	int capacity;
public:
	SSD();
	SSD(string type, int capacity);
	void Show()const;
	void AsInfo();
};
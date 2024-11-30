#pragma once
#include <iostream>
using namespace std;

class Processor {
	float freqeuency;
	int cores;
	string model;
	string brand;
public:
	Processor();
	Processor(float freqeuency, int cores, string model, string brand);
	void Show()const;
	void AsInfo();
};
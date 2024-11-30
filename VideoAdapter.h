#pragma once
#include <iostream>
using namespace std;

class VideoAdapter {
	string type;
	int memory;
	string brand;
	string model;
public:
	VideoAdapter();
	VideoAdapter(string type, int memory, string brand, string model);
	void Show()const;
	void AsInfo();
};
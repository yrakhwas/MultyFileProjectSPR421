#include "VideoAdapter.h"

VideoAdapter::VideoAdapter() :type("no type"), memory(0), brand("no brand"), model("no model") {}

VideoAdapter::VideoAdapter(string type, int memory, string brand, string model) : type(type), memory(memory), brand(brand), model(model) {}

void VideoAdapter::Show() const
{
	cout << "VideoAdapter: " << brand << " " << model << endl;
	cout << "Type: " << type << endl;
	cout << "Memory: " << memory << " GB" << endl;
}

void VideoAdapter::AsInfo()
{
	cout << "Enter video adapter brand: ";
	cin >> brand;
	cout << "Enter video adapter model: ";
	cin >> model;
	cout << "Enter video adapter type: ";
	cin >> type;
	cout << "Enter video adapter memory: ";
	cin >> memory;
	cout << endl;
}

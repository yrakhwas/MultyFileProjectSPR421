#pragma once
#include <iostream>
#include "Processor.h"
#include "SSD.h"
#include "VideoAdapter.h"
using namespace std;


class MainBoard {
	Processor processor;
	SSD ssd;
	VideoAdapter videoAdapter;
public:
	MainBoard();
	MainBoard(Processor processor, SSD ssd, VideoAdapter videoAdapter);
	void Show()const;
	MainBoard createComp();

};
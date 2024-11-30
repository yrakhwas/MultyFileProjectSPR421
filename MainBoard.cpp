#include "MainBoard.h"

MainBoard::MainBoard():processor(), ssd(), videoAdapter() {}


MainBoard::MainBoard(Processor processor, SSD ssd, VideoAdapter videoAdapter) :processor(processor), ssd(ssd), videoAdapter(videoAdapter) {}

void MainBoard::Show() const
{
	cout << "Proccessor : " << endl;
	processor.Show();
	cout << "SSD : " << endl;
	ssd.Show();
	cout << "VideoAdapter : " << endl;
	videoAdapter.Show();
}

MainBoard MainBoard::createComp()
{
	processor.AsInfo();
	ssd.AsInfo();
	videoAdapter.AsInfo();
	return *this;
}

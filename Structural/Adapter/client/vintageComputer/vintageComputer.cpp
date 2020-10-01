#include "vintageComputer.h"
#include <iostream>

using namespace std;

void vintage::vintageComputer::on()
{
	cout << __FUNCTION__ <<  "  vintage comp on " << endl;
}

void vintage::vintageComputer::off()
{
	cout << __FUNCTION__ << "  vintage comp off " << endl;
}

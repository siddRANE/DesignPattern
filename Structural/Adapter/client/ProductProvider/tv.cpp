#include "tv.hxx"
#include <iostream>
void Products::tv::switchOn(bool arg)
{
	using namespace std;
	cout << __FUNCTION__ << "  " << arg << endl;
}

#include "adapter.hxx"
using namespace vintage;
void Products::adapter::switchOn(bool in)
{
	if (in == true)
		comp_.on();
	else
		comp_.off();
}

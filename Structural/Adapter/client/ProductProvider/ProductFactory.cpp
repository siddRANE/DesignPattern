#include "ProductFactory.h"
#include "tv.hxx"
#include "ac.hxx"
#include "adapter.hxx"
using namespace Products;
electricEquipment* ProductFactory::createProduct(int type)
{
	electricEquipment* ptr = nullptr;
	switch (type)
	{
	case 0:
		ptr = new tv();
		break;
	case 1:
		ptr = new ac();
		break;
	case 2:
		ptr = new adapter();
		break;
	default:
		ptr = new tv();
		break;
	}
	return ptr;
}

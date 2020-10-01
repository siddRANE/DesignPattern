#include "Config.h"
#include "modernFurnitureFactory.h"
#include "vintageFurnitureFactory.h"


furnitureFactory* Config::getFurnitureFactory(int type)
{
	if (1 == type)
		return new vintageFurnitureFactory();
	else
		return new moderFurnitureFactory();
}

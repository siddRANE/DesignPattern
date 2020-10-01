#include "modernFurnitureFactory.h"

#include "modernChair.h"
#include "modernSofa.h"
#include "modernCoffeeTable.h"

iChair* moderFurnitureFactory::createChair()
{
	return new modernChair;
}

iSofa* moderFurnitureFactory::createSofa()
{
	return new modernSofa;
}

iCoffeeTable* moderFurnitureFactory::createCoffeeTable()
{
	return new modernCoffeeTable;
}

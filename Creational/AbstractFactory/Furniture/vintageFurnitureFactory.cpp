#include "vintageFurnitureFactory.h"
#include "vintageChair.h"
#include "vintageSofa.h"
#include "vintageCoffeeTable.h"
iChair* vintageFurnitureFactory::createChair()
{
	return new vintageChair{};
}

iSofa* vintageFurnitureFactory::createSofa()
{
	return new VintageSofa{};
}

iCoffeeTable* vintageFurnitureFactory::createCoffeeTable()
{
	return new vintageCoffeeTable;
}

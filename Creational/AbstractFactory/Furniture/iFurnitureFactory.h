#pragma once
class iChair;
class iSofa;
class iCoffeeTable;
class furnitureFactory
{
public:
	virtual iChair* createChair() = 0;

	virtual iSofa* createSofa() = 0;

	virtual iCoffeeTable* createCoffeeTable() = 0;

};
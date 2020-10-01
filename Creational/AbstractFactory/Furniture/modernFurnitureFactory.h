#pragma once
#include "iFurnitureFactory.h"
class __declspec(dllexport) moderFurnitureFactory :
	public furnitureFactory
{
public:
	virtual iChair* createChair() override;

	virtual iSofa* createSofa() override;

	virtual iCoffeeTable* createCoffeeTable() override;
};


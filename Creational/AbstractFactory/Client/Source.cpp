#include "iChair.h"
#include "iSofa.h"
#include "iCoffeeTable.h"
#include "iFurnitureFactory.h"
#include <iostream>

#include "Config.h"
int main()
{
	using namespace std;
	int input = 0;
	while (true)
	{
		cin >> input;
		if (input > 2)
			break;
		Config cfg;
		auto furnitureFactory = cfg.getFurnitureFactory(input);

		iChair* pchair = furnitureFactory->createChair();
		pchair->sitOn();

		iSofa* psofa = furnitureFactory->createSofa();
		psofa->sitOn();

		iCoffeeTable* pcoffeeTable = furnitureFactory->createCoffeeTable();
		pcoffeeTable->fold();

		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	}
	return 0;
}
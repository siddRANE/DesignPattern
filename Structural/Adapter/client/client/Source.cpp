#include "ProductFactory.h"
#include "ElectricEquipment.h"
#include <iostream>
using namespace Products;
using namespace std;
int main()
{
	while (true)
	{
		int input = 0;
		cin >> input;
		if (input == 3)break;
		auto product = ProductFactory::createProduct(input);
		product->switchOn(true);
		product->switchOn(false);
		cout << "=============================" << endl;
	}
	return 0;
}
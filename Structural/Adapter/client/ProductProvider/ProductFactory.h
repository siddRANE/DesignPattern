#pragma once
namespace Products
{
	class electricEquipment;
	class __declspec(dllexport)  ProductFactory
	{
	public:
		static electricEquipment* createProduct(int type);
	};
}
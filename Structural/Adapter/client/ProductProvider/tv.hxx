#pragma once
#include "ElectricEquipment.h"
namespace Products {
	class tv :
		public electricEquipment
	{
	public:
		virtual void switchOn(bool) override;
	};
}


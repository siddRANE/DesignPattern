#pragma once
#include "ElectricEquipment.h"
namespace Products {
	class ac :
		public electricEquipment
	{
	public:
		virtual void switchOn(bool) override;
	};
}


#pragma once
#include "ElectricEquipment.h"
#include "vintageComputer.h"
namespace Products{
class adapter :
	public electricEquipment
{
public:
	virtual void switchOn(bool) override;
private: 
	vintage::vintageComputer comp_;
};
}


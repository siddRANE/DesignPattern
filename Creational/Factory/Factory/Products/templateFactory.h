#pragma once
#include "factory.h"
#include "TextDocument.h"
template <typename T>
class customFactory : public docFactory
{

public:
	virtual Document* create() override
	{
		return new T();
	}

};

#pragma once
#include"DocumentCreator.h"
class __declspec(dllexport) TextCreator : public creator
{
public:
	virtual Document* create() override;
};
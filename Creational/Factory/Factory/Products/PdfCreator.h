#pragma once
#include "DocumentCreator.h"

class __declspec(dllexport) pdfCreator : public creator
{
public:
	virtual Document* create() override;
};
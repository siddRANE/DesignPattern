#pragma once
class Document;
class docFactory
{
	virtual Document* create() = 0;
};

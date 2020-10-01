#include "Document.h"

#ifndef TEXTDOCUMENT_H
#define TEXTDOCUMENT_H
class TextDocument :
	public Document
{
public:
	virtual void open() override;
};
#endif // !TEXTDOCUMENT_H




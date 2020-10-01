#include "TextDocument.h"
#include "TextCreator.h"


Document* TextCreator::create()
{
	return new TextDocument();
}

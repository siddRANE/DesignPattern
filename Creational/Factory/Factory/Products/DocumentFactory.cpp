#include "DocumentFactory.h"
#include "PdfDocument.h"
#include "TextDocument.h"
#include <string>

Document* DocumentFactory::createDocument(const char* type)
{
	Document* ret = nullptr;
	if (!strcmp("text", type))
		ret = new TextDocument();
	else if (!strcmp("pdf", type))
		ret = new PdfDocument();
	return ret;
}

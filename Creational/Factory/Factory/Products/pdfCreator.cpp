#include "PdfDocument.h"
#include "PdfCreator.h"


Document* pdfCreator::create()
{
	return new PdfDocument();
}

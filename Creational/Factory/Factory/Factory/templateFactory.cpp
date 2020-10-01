#include <iostream>
#include "Document.h"
#include "templateFactory.h"
class TextDocument;
int main
()
{
	customFactory<TextDocument> cf;
	Document *p = cf.create();
	p->open();

	getchar();
	return 0;
}

//Method 3
	//Templatized method


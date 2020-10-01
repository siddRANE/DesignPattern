#include "Document.h"
#include "DocumentFactory.h"
#include <iostream>

class excelDocument : public Document
{
public:
	void open() { using namespace std;  cout << __FUNCTION__ << endl; }
};

template <typename T>
Document* documentCreator()
{
	return new T();
}
int main()
{
//Method 1
	//Static method factory

	/*auto p = DocumentFactory::createDocument("text");
	p->open();
	p = DocumentFactory::createDocument("pdf");
	p->open();
	
	getchar();*/

////Method 2
//	//Templatized method
//	auto * p = documentCreator<excelDocument>();
//	p->open();
//	getchar();
	return 0;
}


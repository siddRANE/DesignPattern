#ifndef DOCUMENTFACTORY_H
#define DOCUMENTFACTORY_H
class Document;
class __declspec(dllexport) DocumentFactory
{
public :
	static Document* createDocument(const char* type);
};
#endif // !DOCUMENTFACTORY_H

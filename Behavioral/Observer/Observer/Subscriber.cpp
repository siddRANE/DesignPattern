#include "Subscriber.hxx"
#include "Publisher.h"
#include <iostream>
using namespace std;

void Subscriber::notify(iPublisher * pContext)
{
	cout << " Publisher's state is " << pContext->getValue() << endl;
}

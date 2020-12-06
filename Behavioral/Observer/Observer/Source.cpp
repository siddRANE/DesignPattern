#include "Publisher.hxx"
#include "Subscriber.hxx"
#include <iostream>
using namespace std;
int main()
{
	iPublisher* publ1 = new Publisher();
	iPublisher* publ2 = new Publisher();
	publ1->incr();
	publ1->incr();
	iSubscriber* sub1 = new Subscriber();
	iSubscriber* sub2 = new Subscriber();

	publ1->addSubscriber(sub1);
	publ1->addSubscriber(sub2);


	publ1->incr();
	cout << "=========================================================== " << endl;



	publ2->addSubscriber(sub2);
	cout << "=========================================================== " << endl;
	publ2->incr();

	cout << "=========================================================== " << endl;

	publ1->removeSubscriber(sub1);
	cout << "=========================================================== " << endl;
	publ1->incr();


	return 0;
}
#include "Publisher.hxx"
#include "iSubscriber.h"
#include <algorithm>
void Publisher::addSubscriber(iSubscriber* psubscriber)
{
	subscribers_.push_back(psubscriber);
}

void Publisher::removeSubscriber(iSubscriber* psubscriber)
{
	subscribers_.remove(psubscriber);
}

void Publisher::update()
{
	for (iSubscriber *psubsrciber : subscribers_)
	{
		psubsrciber->notify(this);
	}
}

int Publisher::getValue()
{
	return internalState_;
}



void Publisher::incr()
{
	internalState_++;
	update();
}

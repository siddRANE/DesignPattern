#pragma once
class iSubscriber;
class iPublisher
{
public:
	virtual void addSubscriber(iSubscriber *psubscriber) = 0;
	virtual void removeSubscriber(iSubscriber* psubscriber) = 0;
	virtual int getValue() = 0;
	virtual void incr() {};

};


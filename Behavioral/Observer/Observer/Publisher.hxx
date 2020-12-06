#pragma once
#include "Publisher.h"
#include <list>
class Publisher :
    public iPublisher
{
public:
    virtual void addSubscriber(iSubscriber* psubscriber) override;
    virtual void removeSubscriber(iSubscriber* psubscriber) override;
    virtual int  getValue() override;
    virtual void incr() override;
private:
    void update() ;

    std::list<iSubscriber*> subscribers_;
    int internalState_ = 0;
};


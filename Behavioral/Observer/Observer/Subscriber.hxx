#pragma once
#include "iSubscriber.h"
class Subscriber :
    public iSubscriber
{
    virtual void notify(iPublisher *pContext) override;
};


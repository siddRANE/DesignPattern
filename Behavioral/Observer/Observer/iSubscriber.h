#pragma once
class iPublisher;
class iSubscriber
{
private:
	unsigned id_;
public:
	virtual void notify(iPublisher* pContext) = 0;
};


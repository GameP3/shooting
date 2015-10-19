#pragma once
#include "ObjectBase.h"

class PlayerBase :
	public ObjectBase
{
protected:
	int m_life;
public:
	PlayerBase(float, float);
	PlayerBase();
	~PlayerBase();
	virtual void Update(KeyManager*) = 0;
	virtual void Draw() = 0;
};


#pragma once
#include "ObjectBase.h"
class BulletBase :
	public ObjectBase
{
public:
	BulletBase();
	~BulletBase();
	virtual void Update(KeyManager*) = 0;
	virtual void Draw() = 0;
};


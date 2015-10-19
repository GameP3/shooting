#pragma once
#include "ObjectBase.h"
class EnemyBase :
	public ObjectBase
{
public:
	EnemyBase();
	~EnemyBase();
	virtual void Update(KeyManager*) = 0;
	virtual void Draw() = 0;
};


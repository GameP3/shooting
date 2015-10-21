#pragma once
#include "BulletBase.h"
class NormalBullet :
	public BulletBase
{
public:
	NormalBullet(float, float);
	~NormalBullet();
	void Update(KeyManager*);
	void Draw();
};


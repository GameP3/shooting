#pragma once
#include "BulletBase.h"
class NormalBullet :
	public BulletBase
{
public:
	NormalBullet(float posX, float posY, float rot);
	~NormalBullet();
	void Update(KeyManager*);
	void Draw();
};


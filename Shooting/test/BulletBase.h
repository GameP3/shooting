#pragma once
#include "ObjectBase.h"
#include <math.h>

#define PI 3.1415926f //円周率 ここで定義するようなものじゃないけどご勘弁を

class BulletBase :
	public ObjectBase
{
public:
	BulletBase();
	~BulletBase();
	virtual void Update(KeyManager*) = 0;
	virtual void Draw() = 0;
	float GetRot() { return m_rot; }
protected:
	float m_speed;	//弾速
	float m_rot;		//角度
};


#pragma once
#include "ObjectBase.h"
#include <math.h>

#define PI 3.1415926f //�~���� �����Œ�`����悤�Ȃ��̂���Ȃ����ǂ����ق�

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
	float m_speed;	//�e��
	float m_rot;		//�p�x
};


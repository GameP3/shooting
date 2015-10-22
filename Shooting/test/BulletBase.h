#pragma once
#include "ObjectBase.h"
#include <math.h>

#define PI 3.1415926f //‰~Žü—¦ ‚±‚±‚Å’è‹`‚·‚é‚æ‚¤‚È‚à‚Ì‚¶‚á‚È‚¢‚¯‚Ç‚²Š¨•Ù‚ð

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
	float m_speed;	//’e‘¬
	float m_rot;		//Šp“x
};


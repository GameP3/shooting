#pragma once
#include "EnemyBase.h"
class Enemy1 :
	public EnemyBase
{
public:
	Enemy1(float, float);
	~Enemy1();
	void Update(KeyManager*);
	void Draw();
protected:
	int m_life;
};


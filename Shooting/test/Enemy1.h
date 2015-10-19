#pragma once
#include "EnemyBase.h"
class Enemy1 :
	public EnemyBase
{
public:
	Enemy1();
	~Enemy1();
	void Update(KeyManager*);
	void Draw();
};


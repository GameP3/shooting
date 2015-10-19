#pragma once
#include "PlayerBase.h"
class Player1 :
	public PlayerBase
{
public:
	Player1(float, float);
	~Player1();
	void Update(KeyManager*);
	void Draw();
};


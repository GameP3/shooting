#pragma once
#include "ObjectBase.h"

class Player :
	public ObjectBase
{
public:
	Player(float, float);
	Player();
	~Player();
	void Update(KeyManager*);
	void Draw();
};


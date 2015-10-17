#pragma once
#include "DxLib.h"
#include "KeyManager.h"

class ObjectBase
{
public:
	ObjectBase();
	~ObjectBase();
	virtual void Update(KeyManager*) = 0;
	virtual void Draw() = 0;
protected:
	int m_image;
	int m_objectType;
	VECTOR m_pos;
};


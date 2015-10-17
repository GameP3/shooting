//author: 齋藤 悠記

#include "KeyManager.h"

KeyManager::KeyManager()
{
	//m_key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	m_up_button		= FREE;
	m_down_button = FREE;
	m_left_button = FREE;
	m_right_button = FREE;
}

void KeyManager::KeyCheck()	//キーの状態をチェック
{
	KeyUpData(&m_up_button, CheckHitKey(KEY_INPUT_UP));
	KeyUpData(&m_down_button, CheckHitKey(KEY_INPUT_DOWN));
	KeyUpData(&m_left_button, CheckHitKey(KEY_INPUT_LEFT));
	KeyUpData(&m_right_button, CheckHitKey(KEY_INPUT_RIGHT));
}

void KeyManager::KeyUpData(int *key_data,int w_key)
{
	if( w_key )	
	{	
		switch( *key_data )
		{
		case PUSH:
		case HOLD:
			*key_data = HOLD;
			break;
		case FREE:
		case PULL:
			*key_data = PUSH;
			break;
		}
	}
	else
	{
		switch( *key_data )
		{
		case PUSH:
		case HOLD:
			*key_data = PULL;
			break;
		case FREE:
		case PULL:
			*key_data = FREE;
			break;
		}
	}
}
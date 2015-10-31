//author: 齋藤 悠記

#include "KeyManager.h"

KeyManager::KeyManager()
{
	//m_key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	m_up_button		= FREE;
	m_down_button = FREE;
	m_left_button = FREE;
	m_right_button = FREE;
	m_a_button = FREE;
	m_b_button = FREE;
	m_c_button = FREE;
	m_d_button = FREE;
	m_e_button = FREE;
	m_f_button = FREE;
	m_g_button = FREE;
	m_h_button = FREE;
	m_i_button = FREE;
	m_j_button = FREE;
	m_k_button = FREE;
	m_l_button = FREE;
	m_m_button = FREE;
	m_n_button = FREE;
	m_o_button = FREE;
	m_p_button = FREE;
	m_q_button = FREE;
	m_r_button = FREE;
	m_s_button = FREE;
	m_t_button = FREE;
	m_u_button = FREE;
	m_v_button = FREE;
	m_w_button = FREE;
	m_x_button = FREE;
	m_y_button = FREE;
	m_z_button = FREE;
	m_back_button = FREE; //バックスペースキー 
	m_tab_button = FREE; // タブキー 
	m_return_button = FREE; // エンターキー
	m_lshift_button = FREE; // 左シフトキー
	m_rshift_button = FREE; // 右シフトキー
	m_escape_button = FREE; // エスケープキー
	m_space_button = FREE; // スペースキー
}

void KeyManager::KeyCheck()	//キーの状態をチェック
{
	KeyUpData(&m_up_button, CheckHitKey(KEY_INPUT_UP));
	KeyUpData(&m_down_button, CheckHitKey(KEY_INPUT_DOWN));
	KeyUpData(&m_left_button, CheckHitKey(KEY_INPUT_LEFT));
	KeyUpData(&m_right_button, CheckHitKey(KEY_INPUT_RIGHT));
	KeyUpData(&m_a_button, CheckHitKey(KEY_INPUT_A));
	KeyUpData(&m_b_button, CheckHitKey(KEY_INPUT_B));
	KeyUpData(&m_c_button, CheckHitKey(KEY_INPUT_C));
	KeyUpData(&m_d_button, CheckHitKey(KEY_INPUT_D));
	KeyUpData(&m_e_button, CheckHitKey(KEY_INPUT_E));
	KeyUpData(&m_f_button, CheckHitKey(KEY_INPUT_F));
	KeyUpData(&m_g_button, CheckHitKey(KEY_INPUT_G));
	KeyUpData(&m_h_button, CheckHitKey(KEY_INPUT_H));
	KeyUpData(&m_i_button, CheckHitKey(KEY_INPUT_I));
	KeyUpData(&m_j_button, CheckHitKey(KEY_INPUT_J));
	KeyUpData(&m_k_button, CheckHitKey(KEY_INPUT_K));
	KeyUpData(&m_l_button, CheckHitKey(KEY_INPUT_L));
	KeyUpData(&m_m_button, CheckHitKey(KEY_INPUT_M));
	KeyUpData(&m_n_button, CheckHitKey(KEY_INPUT_N));
	KeyUpData(&m_o_button, CheckHitKey(KEY_INPUT_O));
	KeyUpData(&m_p_button, CheckHitKey(KEY_INPUT_P));
	KeyUpData(&m_q_button, CheckHitKey(KEY_INPUT_Q));
	KeyUpData(&m_r_button, CheckHitKey(KEY_INPUT_R));
	KeyUpData(&m_s_button, CheckHitKey(KEY_INPUT_S));
	KeyUpData(&m_t_button, CheckHitKey(KEY_INPUT_T));
	KeyUpData(&m_u_button, CheckHitKey(KEY_INPUT_U));
	KeyUpData(&m_v_button, CheckHitKey(KEY_INPUT_V));
	KeyUpData(&m_w_button, CheckHitKey(KEY_INPUT_W));
	KeyUpData(&m_x_button, CheckHitKey(KEY_INPUT_X));
	KeyUpData(&m_y_button, CheckHitKey(KEY_INPUT_Y));
	KeyUpData(&m_z_button, CheckHitKey(KEY_INPUT_Z));
	KeyUpData(&m_back_button, CheckHitKey(KEY_INPUT_BACK));
	KeyUpData(&m_tab_button, CheckHitKey(KEY_INPUT_TAB));
	KeyUpData(&m_return_button, CheckHitKey(KEY_INPUT_RETURN));
	KeyUpData(&m_lshift_button, CheckHitKey(KEY_INPUT_LSHIFT));
	KeyUpData(&m_rshift_button, CheckHitKey(KEY_INPUT_RSHIFT));
	KeyUpData(&m_escape_button, CheckHitKey(KEY_INPUT_ESCAPE));
	KeyUpData(&m_space_button, CheckHitKey(KEY_INPUT_SPACE));

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
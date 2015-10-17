#include "GachaScene.h"



GachaScene::GachaScene()
{
	ghandle = LoadGraph("pict\\charctar1.png");
	x = 300;
	y = 400;

}


GachaScene::~GachaScene()
{
}

SceneBase * GachaScene::Update(GameScene *)
{
	SceneBase* next = this;

	//âÊëúÇì«Ç›çûÇ› 
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (key & PAD_INPUT_UP) y -= 4;
	if (key & PAD_INPUT_DOWN) y += 4;
	if (key & PAD_INPUT_LEFT) x -= 4;
	if (key & PAD_INPUT_RIGHT) x += 4;
	

	return next;
}

void GachaScene::Draw(GameScene * scene)
{
	DrawGraph(x, y, ghandle, TRUE);
}

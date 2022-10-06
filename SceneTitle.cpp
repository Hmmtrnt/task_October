#include "DxLib.h"

#include "SceneTitle.h"
#include "SceneMain.h"
#include "SceneResult.h"

void SceneTitle::init()
{
	m_isEnd = false;
}

SceneBase* SceneTitle::update()
{
	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_1)
	{
		// Mainに切り替え
		return(new SceneMain);
	}
	else if (padState & PAD_INPUT_2)
	{
		return (new SceneResult);
	}
	return this;
}

void SceneTitle::draw()
{
	DrawString(0, 0, "タイトル画面", GetColor(255, 255, 255));
}
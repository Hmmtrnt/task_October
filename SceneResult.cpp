#include "DxLib.h"
#include "game.h"
#include "SceneMain.h"
#include "SceneResult.h"
#include "SceneTitle.h"

SceneResult::SceneResult()
{
	m_isEnd = false;
	m_hFieldHandle = 0;
	m_fontHandle = 0;
}

void SceneResult::init()
{
	m_isEnd = false;
	m_hFieldHandle = LoadGraph("data/field2.jpg");
	m_fontHandle = CreateFontToHandle(NULL, 40, 3);
}

void SceneResult::end()
{
	DeleteGraph(m_hFieldHandle);
}

SceneBase* SceneResult::update()
{
	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_1)
	{
		return (new SceneTitle);
	}
	if (padState & PAD_INPUT_2)
	{
		return (new SceneMain);
	}
	
	return this;
}

void SceneResult::draw()
{
	DrawGraph(0, 0, m_hFieldHandle, true);
	DrawStringToHandle(Game::kScreenWidth / 2 - 170, Game::kScreenHeight / 2 - 100, "ＧＡＭＥＣＬＥＡＲ", GetColor(0, 0, 0), m_fontHandle);
	DrawFormatString(Game::kScreenWidth / 2 - 140, Game::kScreenHeight / 2 + 120, GetColor(0, 0, 0), "主人公「これで安心して過ごせそうだ」");
	DrawString(Game::kScreenWidth / 2 - 90, Game::kScreenHeight / 2, "１ボタン:　タイトル画面", GetColor(0, 0, 0));
	DrawString(Game::kScreenWidth / 2 - 90, Game::kScreenHeight / 2 + 20, "２ボタン:リスタート画面", GetColor(0, 0, 0));
}
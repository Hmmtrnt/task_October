#pragma once

#include <vector>
#include "Enemy.h"
#include "player.h"
#include "SceneBase.h"

class SceneMain : public SceneBase
{
public:
	SceneMain();
	virtual ~SceneMain() {}

	// 初期化
	virtual void init();
	// 終了処理
	virtual void end();

	// 毎フレーム処理
	virtual SceneBase* update() override;

	// 毎フレーム描画
	virtual void draw() override;

	// 弾の生成
	bool createShotNormal(Vec2 pos);

private:
	// プレイヤーのグラフィックハンドル
	int m_hPlayerGraphic;
	// ショットのグラフィックハンドル
	int m_hShotGraphic;
	// 背景のグラフィックハンドル
	int m_hFieldGraphic;
	// 敵のグラフィックハンドル
	int m_hEnemyGraphic;
	// 文字のハンドル
	int m_fontHandle;
	// 敵の数
	int m_enemyNum;
	// 弾の数
	int m_shotNum;
	// 最後の一発を撃ち終わってからゲームオーバーまでの時間
	int m_time;
	// フェード処理
	int m_fadeBright;
	// フェード速度
	int m_fadeSpeed;

	// プレイヤー
	Player m_player;
	// エネミー
	Enemy m_enemy;
	// ショット
	std::vector<ShotBase*> m_pShotVt;
	/*表示位置*/
	// プレイヤー
	Vec2 m_posPlayer;
	// 弾の位置
	Vec2 m_posShot;
	// 弾の幅
	Vec2 m_sizeShot;
	// 敵
	Vec2 m_posEnemy;
	// 敵の幅
	Vec2 m_sizeEnemy;
};
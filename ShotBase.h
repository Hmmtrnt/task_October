#pragma once
#include "Vec2.h"
#include "Enemy.h"

class Enemy;

class ShotBase
{
public:
	ShotBase();
	virtual ~ShotBase() {}
	// 弾のグラフィックハンドル
	void setHandle(int handle) {}

	// ショット開始
	virtual void start(Vec2 pos);
	// 更新
	virtual void update();
	// 表示
	virtual void draw();

	// 弾が存在するかどうか
	bool isExist() const { return m_isExist; }

	// 情報取得
	Vec2 getPos() const { return m_pos; }
	Vec2 getSize() const { return m_size; }

protected:
	// 表示位置
	Vec2 m_pos;
	// 弾のサイズ
	Vec2 m_size;
	// 移動
	Vec2 m_vec;
	// 弾が存在するかどうか
	bool m_isExist;
};
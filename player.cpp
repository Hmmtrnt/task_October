#include "DxLib.h"
#include "Vec2.h"
#include "player.h"

namespace
{
	// Y方向の速度
	constexpr float kSpeedMaxY = 8.0f;

}

Player::Player()
{

}

Player::~Player()
{

}

void Player::init()
{

}

void Player::update()
{

}

void Player::draw()
{
	// 仮自機
	DrawCircle(100, 240, 50, GetColor(255, 255, 255));
}
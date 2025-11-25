#include"Novice.h"
#include "Bullet.h"


Bullet::Bullet()
{
    posX_ = 0;
    posY_ = 0;
    radius_ = 5;
    speedX_ = 20;
    speedY_ = 20;
    isShot_ = false;
}
void Bullet::Update()
{
    if (isShot_)
    {
        posY_ -= speedY_;
    }
    if (posY_ < 0)
    {
        isShot_ = false;
    }
    return;
}
void Bullet::Draw()
{
    Novice::DrawEllipse
    (
        posX_, posY_, radius_, radius_,
        0.0f, WHITE, kFillModeSolid
    );
}
#pragma once

#include <stdint.h>

#include "GameObject.h"

class Bomb;

class DestroyableGroundObject : public GameObject
{
public:

    virtual bool __fastcall isInside(double x1, double x2) const = 0;
    virtual bool HandleInsideCheck(Bomb* pbomb) = 0;
    virtual inline uint16_t GetScore() const = 0;

protected:

};
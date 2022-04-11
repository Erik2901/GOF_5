
#include <iostream>
#include <vector>
#include "Bomb.h"
#include "MyTools.h"
#include "DestroyableGroundObject.h"
#include "Tank.h"
#include "House.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw() const
{
    MyTools::SetColor(CC_LightMagenta);
    GotoXY(x, y);
    cout << "*";
}

void __fastcall Bomb::Accept(const Visitor& v)
{
    v.log(this);
}

DestroyableGroundObject* Bomb::CheckDestoyableObjects(std::vector<DestroyableGroundObject*> vecDestoyableObjects)
{
    for (size_t i = 0; i < vecDestoyableObjects.size(); i++)
    {
        if (vecDestoyableObjects[i]->HandleInsideCheck(this))
        {
            return vecDestoyableObjects[i];
        }
        else
        {
            return nullptr;
        }
    }
}
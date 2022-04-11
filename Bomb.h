#pragma once

#include "DynamicObject.h"
#include <vector>

class DestroyableGroundObject;

class Bomb : public DynamicObject
{
public:

	static const uint16_t BombCost = 10; // ��������� ����� � �����

	void Draw() const override;
	void __fastcall Accept(const Visitor& v) override;
	DestroyableGroundObject* CheckDestoyableObjects(std::vector<DestroyableGroundObject*> vecDestoyableObjects);
private:

};


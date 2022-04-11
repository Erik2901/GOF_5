#pragma once

#include "MyTools.h"
#include <iostream>

class Plane;
class Bomb;

class Visitor
{
public:
	virtual void log(Plane* p) const = 0;
	virtual void log(Bomb* b) const = 0;
};

class LogVisitor : public Visitor
{
public:
	void log(Plane* p) const override;
	void log(Bomb* b) const override;
};


#include "Visitor.h"
#include "Bomb.h"
#include "Plane.h"
#include <iostream>

void LogVisitor::log(Plane* p) const {
	std::string wlog = "Plane Speed = " + std::to_string(p->GetSpeed()) + ": X = " + std::to_string(p->GetDirectionX()) + ": Y = " + std::to_string(p->GetDirectionY());
	MyTools::WriteToLog(wlog);
}

void LogVisitor::log(Bomb* b) const {
	std::string wlog = "Plane Speed = " + std::to_string(b->GetSpeed()) + ": X = " + std::to_string(b->GetDirectionX()) + ": Y = " + std::to_string(b->GetDirectionY());
	MyTools::WriteToLog(wlog);
}
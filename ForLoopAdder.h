#pragma once
#ifndef __FORLOOPADDER
#define __FORLOOPADDER

#include <iostream>
using namespace std;

#include "LoopAdder.h"
class ForLoopAdder :public LoopAdder {
public:
	ForLoopAdder(string name = ""); // : LoopAdder(name) {};
	virtual int calculate();
};
#endif
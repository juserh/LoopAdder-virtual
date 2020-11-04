#include "ForLoopAdder.h"

ForLoopAdder::ForLoopAdder(string name) :LoopAdder(name) {};

int ForLoopAdder::calculate() {
	int sum = 0;
	int x = getX(), y = getY();
	for (int i = x; i <= y; i++) {
		sum += i;
	}
	return sum;
}
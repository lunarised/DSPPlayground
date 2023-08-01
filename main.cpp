#include <iostream>
#include "signal.cpp"
main(){
	float signalArray[6] = {2.5, 3.1, 1.1, 0.6, -0.6, 1};
	float* initialElement = signalArray;

	Signal* s = new Signal(initialElement);
	std::cout << s->getSignalTick(6) << std::endl;
}

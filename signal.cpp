#include <stdlib.h>
#include <limits>
#include <cmath>
class Signal{
	public:
	float* signalData;
	

	int getSignalTicks(){
		return sizeof(this->signalData)/sizeof(float);
	}
	
	float getSignalTick(int ind){
		if (ind >= getSignalTicks()){
			return -INFINITY;
		}
		return *(signalData + ind);
	}

	Signal(float* signalData){
		this->signalData = signalData.copy();
	}


};

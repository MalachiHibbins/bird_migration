#include <iostream>
#include "system.h"
#include "box.h"

int main(){
    System model(10, 10, 0.1, 0.1);
    model.updateRule();
    Box simulationBox(model.sideLength, model.sideLength, 0, 0);

    std::cout<<"The system has a simulation box of side "<<model.simulationBox.getSidex()<<std::endl;
    return 0;
}

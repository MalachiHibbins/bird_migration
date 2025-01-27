#include <iostream>
#include "system.h"
#include "box.h"

int main(){
    System model(10, 10, 0.1, 0.1);
    model.updateRule();
    Box simulationBox(model.sideLength, model.sideLength, 0, 0);
    std::cout<<"The system has a simulation box of side "<<model.simulationBox.getSidex()<<std::endl;

    // prints out a random number
    std::cout << model.uniform(0, 20) << std::endl;
    std::cout << model.uniform(0, 20) << std::endl;
    return 0;
}

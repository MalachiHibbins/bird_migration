#include <iostream>
#include "system.h"
#include "box.h"

int main(){
    System model(100, 10, 0.1, 0.1);
    
    model.randomStart();
    model.saveConfig("init.conf");
    Box simulationBox(model.sideLength, model.sideLength, 0, 0);
    std::cout<<"The system has a simulation box of side "<<model.simulationBox.getSidex()<<std::endl;
    for (int i = 0; i < 1000; i++){
        model.updateRule();
        model.saveConfig("config/"+std::to_string(i)+".conf");
    }

    return 0;
}

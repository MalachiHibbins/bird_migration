#include <iostream>
#include "system.h"

int main(){
    System system1(10, 10, 0.1, 0.1);
    system1.updateRule();
    std::cout << system1.particleNumber << std::endl;
    return 0;
}

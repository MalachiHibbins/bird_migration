#ifndef SYSTEM_H
#define SYSTEM_H
# include <iostream>

#include <vector> //to use standard C++ vectors
// #include "box.h" //yet to be created!
// #include "particle.h" //yet to be created!

class System {
  public:
    int   particleNumber;
    double noiseStrength;
    double timeStep;
    double sideLength;
    // Box simulationBox;
    // std::vector<Particle> particles;
    System(int particleNumber, double sideLength, double timeStep, double noiseStrength);
    void updateRule();  


};

#endif
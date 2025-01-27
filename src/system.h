#ifndef SYSTEM_H
#define SYSTEM_H
# include <iostream>

#include <vector> 
#include "box.h" //yet to be created!
// #include "particle.h" //yet to be created!

class System {
  public:
    Box simulationBox;
    // std::vector<Particle> particles;
    int particleNumber;
    double sideLength;
    double timeStep;
    double noiseStrength;
    System(int particleNumber, double sideLength, double timeStep, double noiseStrength);
    void updateRule();  


};

#endif
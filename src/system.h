#ifndef SYSTEM_H
#define SYSTEM_H
# include <iostream>
# include <random>
#include <vector> 
#include "box.h"
#include "particle.h"

class System {
  public:
    Box simulationBox;
    // std::vector<Particle> particles;
    int particleNumber;
    double sideLength;
    double timeStep;
    double noiseStrength;
    std::mt19937 gen;
    double uniformdist(double min, double max);
    System(int particleNumber, double sideLength, double timeStep, double noiseStrength);
    void updateRule();  

  
    


};

#endif
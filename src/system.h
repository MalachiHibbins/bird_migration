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
    int particleNumber;
    double sideLength;
    double timeStep;
    double noiseStrength;
    int seed = 69;
    std::mt19937 gen = std::mt19937(seed);
    System(int particleNumber, double sideLength, double timeStep, double noiseStrength);
    void updateRule();
    std::uniform_real_distribution<double> uniformDist;  
    double uniform(double min, double max);
    void randomStart();
    std::vector<Particle> particles;

};



#endif
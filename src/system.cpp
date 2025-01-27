# include "system.h"


void System::updateRule() {
    std::cout << "System updated!" << std::endl;
}

System::System(int particleNumber, double sideLength, double timeStep, double noiseStrength) {
    this->particleNumber = particleNumber;
    this->sideLength = sideLength;
    this->timeStep = timeStep;
    this->noiseStrength = noiseStrength;
    std::vector<Particle> particles;

    particles.resize(particleNumber);
}


double System::uniform(double min,double max) {
    return (max-min)*this->uniformDist(gen)+min;

}
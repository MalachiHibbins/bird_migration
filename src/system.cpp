# include "system.h"
# include <fstream>
# include <vector>
# include <cmath>


void System::updateRule() {
    double theta;
    double count;
    double interactionRadius = 1;
    
    for (Particle &p : this->particles){
        double cNear = 0;
        double sNear = 0;
        double s = cos(p.theta);
        double c = sin(p.theta);
        double count = 0;
        double averageC = 0;
        double averageS = 0;
        double averageTheta = 0;
        double newTheta = 0;
        for (Particle &n : this->particles){
            if (&n != &p){
                if (n.x - n.x < interactionRadius && p.y - p.y < interactionRadius){
                    cNear += cos(n.theta);
                    sNear += sin(n.theta);
                    count += 1;
                }
            }
        averageC = cNear/count;
        averageS = sNear/count;
        averageTheta = atan2(averageS, averageC);
        newTheta = averageTheta + this->noiseStrength*this->uniform(-M_PI, M_PI);
        }
    p.x += this->timeStep*p.v*c;
    p.y += this->timeStep*p.v*s;
    p.theta = newTheta;

    }

}

System::System(int particleNumber, double sideLength, double timeStep, double noiseStrength) {
    this->particleNumber = particleNumber;
    this->sideLength = sideLength;
    this->timeStep = timeStep;
    this->noiseStrength = noiseStrength;
    particles.resize(particleNumber);
}


double System::uniform(double min,double max) {
    return (max-min)*this->uniformDist(gen)+min;

}

void System::randomStart() {
    for (Particle &p : this->particles){
        p.x = this->uniform(0, this->sideLength);
        p.y = this->uniform(0, this->sideLength);
        p.theta = this->uniform(-M_PI, M_PI);

    }
}

void System::saveConfig(const std::string &filename)
{   
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return; // Exit if file cannot be opened
    }
    outFile << std::to_string(particles.size())+"\nParticles"<<std::endl;
    
    // Write particle properties to the file
    std::cout << "Saving configuration to file: " << filename << std::endl;
    for (size_t i = 0; i < particles.size(); ++i) {
        outFile << i << " " << particles[i].x <<" "<<particles[i].y<<" "<<particles[i].theta << std::endl;
    }
    outFile.close(); // Close the file
}    
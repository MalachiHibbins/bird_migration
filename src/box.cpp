# include "box.h"

Box::Box() {
    this->lx = 10;
    this->ly = 10;
    this->x0 = 0;
    this->y0 = 0;
}

Box::Box(double lx, double ly, double x0, double y0) {
    this->lx = lx;
    this->ly = ly;
    this->x0 = x0;
    this->y0 = y0;
}

double Box::getSidex() {
    return this->lx;
}

double Box::getSidey() {
    return this->ly;
}



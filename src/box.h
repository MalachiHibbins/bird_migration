#ifndef BOX_H
#define BOX_H
# include <iostream>


class Box {
    public:
        double lx, ly, x0, y0;
        Box();
        Box(double lx, double ly, double x0, double y0);
        double getSidex();
        double getSidey();
    
    public:
        void setSides(double lx, double ly);
        void setOrigin(double x, double y);
};

#endif

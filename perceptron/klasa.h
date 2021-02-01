#ifndef KLASA_H
#define KLASA_H

#include <iostream>

using namespace std;

class klasa
{
private:
    double x0 = 1;
    double w[3] = {10, -2 , 50};
    double x1[7] = {2,2,0,-2,-2,0,4};
    double x2[7] = {1,2,6,10,0,0,20};
    double d[7] = {1,1,1,-1,-1,-1,1};
    double s , y;
    double e = 0;
    bool t = false;
public:
    void sprawdz();
    double f(double);

};

#endif

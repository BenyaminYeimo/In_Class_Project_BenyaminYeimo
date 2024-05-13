#include <iostream>
#include "Point.h"
#include <math.h>

double Distance(const Point& firstPoint_, const Point& secondPoint_){
    double total;
    total = (firstPoint_.GetFirstPoint() - secondPoint_.GetFirstPoint()) * (firstPoint_.GetFirstPoint() - secondPoint_.GetFirstPoint());
    total += (firstPoint_.GetSecondPoint() - secondPoint_.GetSecondPoint()) * (firstPoint_.GetSecondPoint() - secondPoint_.GetSecondPoint());
    total += (firstPoint_.GetThirdPoint() - secondPoint_.GetThirdPoint()) * (firstPoint_.GetThirdPoint() - secondPoint_.GetThirdPoint());

    return sqrt(total);
}
//Any members in the public section can be accessed using "."
int main() {

    Point point1;
    Point point2;

    point1.SetFirstPoint(1.6);
    point1.SetSecondPoint(0.98);
    point1.SetThirdPoint(0.0);
    point2.SetFirstPoint(0.4);
    point2.SetSecondPoint(1.0);
    point2.SetThirdPoint(0.87);

    std::cout << Distance(point1, point2) << std::endl;
    return 0;
}

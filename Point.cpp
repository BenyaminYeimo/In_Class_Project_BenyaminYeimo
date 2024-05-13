//
// Created by benya on 5/12/2024.
//

#include "Point.h"
double Point::GetFirstPoint() const {
    return _firstPoint;
}
double Point::GetSecondPoint() const {
    return _secondPoint;
}
double Point::GetThirdPoint() const {
    return _thirdPoint;
}
void Point::SetFirstPoint(const double &firstPoint) {
    _firstPoint = firstPoint;
}
void Point::SetSecondPoint(const double &secondPoint) {
    _secondPoint = secondPoint;
}
void Point::SetThirdPoint(const double &thirdPoint) {
    _thirdPoint = thirdPoint;
}
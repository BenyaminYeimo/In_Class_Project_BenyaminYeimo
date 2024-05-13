//
// Created by benya on 5/12/2024.
//

#ifndef IN_CLASS_PROJECT_BENYAMINYEIMO_POINT_H
#define IN_CLASS_PROJECT_BENYAMINYEIMO_POINT_H


class Point {
public:
    Point() = default;
    Point(double firstPoint, double secondPOint, double thirdPoint);
    double GetFirstPoint()const;
    double GetSecondPoint()const;
    double GetThirdPoint()const;

    void SetFirstPoint(const double& firstPoint );
    void SetSecondPoint(const double& secondPoint);
    void SetThirdPoint(const double& thirdPoint);

private:
    double _firstPoint;
    double _secondPoint;
    double _thirdPoint;
};


#endif //IN_CLASS_PROJECT_BENYAMINYEIMO_POINT_H

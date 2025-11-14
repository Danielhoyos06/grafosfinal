#ifndef POINT_H
#define POINT_H

#include <cmath>

struct Point
{
    float X;
    float Y;
    float Z;

    // Constructor por defecto (para poder hacer: Point p;)
    Point() = default;

    // Constructor con parámetros
    Point(float xValue, float yValue, float zValue)
        : X(xValue), Y(yValue), Z(zValue) {}

    float distanceTo(const Point& b) const
    {
        float x = X - b.X;
        float y = Y - b.Y;
        float z = Z - b.Z;
        return std::sqrt((x * x) + (y * y) + (z * z));
    }
};

#endif

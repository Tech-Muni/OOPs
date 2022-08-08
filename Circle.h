#ifndef OOPS_A04_CIRCLE_H
#define OOPS_A04_CIRCLE_H
#define PI 3.1415926

#include "Shape.h"

class Circle : public Shape {
private:
    float radius = 0.00;

    void validateRadius();

public:
    Circle();

    explicit Circle(float radius, string colour);

    ~Circle();

    float getRadius() const;

    void setRadius(float radius);

    void show();

    float Perimeter() override;

    float Area() override;

    float OverallDimension() override;
};


#endif //OOPS_A04_CIRCLE_H

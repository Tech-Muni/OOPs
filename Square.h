#ifndef OOPS_A04_SQUARE_H
#define OOPS_A04_SQUARE_H


#include "Shape.h"

class Square : public Shape {
private:
    float sideLength;

    void validateSideLength();

public:
    Square();

    explicit Square(float sideLength, string colour);

    ~Square();

    float getSideLength() const;

    void setSideLength(float sideLength);

    void show();

    float Perimeter() override;

    float Area() override;

    float OverallDimension() override;
};


#endif //OOPS_A04_SQUARE_H

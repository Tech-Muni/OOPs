#include <iostream>
#include <string>

using namespace std;
#ifndef OOPS_A04_SHAPE_H
#define OOPS_A04_SHAPE_H

class Shape {
private:
    string name;
    string colour;

    void checkCondition();

public:
    Shape();

    Shape(string name, string colour);

    string getName() const;

    string getColour() const;

    void setName(string name);

    void setColour(string colour);

    virtual float Perimeter();

    virtual float Area();

    virtual float OverallDimension();
};


#endif //OOPS_A04_SHAPE_H

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {
    Shape myShape("Circle", "red");
    Circle c = *new Circle(3.56, "");
    Square s = *new Square(10.50, "");
    c.show();
    s.show();
    return 0;
}

#include "Circle.h"

#include <utility>
#include <iomanip>

Circle::Circle(float radius, string colour) {
    this->radius = radius;
    validateRadius();
    setColour(std::move(colour));
}

Circle::Circle() {
    this->radius = 0.00;
}

void Circle::validateRadius() {
    if (this->radius < 0.00) {
        this->radius = 0.00;
    }
}

Circle::~Circle() {
    cout << "The Circle is broken ..." << endl;
}

float Circle::getRadius() const {
    return this->radius;
}

void Circle::setRadius(float radius) {
    if (radius > 0.00)
        this->radius = radius;
    validateRadius();
}

void Circle::show() {
    float r = this->getRadius();
    float perimeter = Perimeter();
    float area = Area();
    cout << "Shape Information" << endl;
    cout << "Name\t\t: " << this->getName() << endl;
    cout << "Colour\t\t: " << this->getColour() << endl;
    cout << "Radius\t\t: " << fixed << setprecision(2) << r << " cm" << endl;
    cout << "Circumference\t\t: " << fixed << setprecision(2) << perimeter << " cm" << endl;
    cout << "Area\t\t: " << fixed << setprecision(2) << area << " square cm" << endl << endl;
}

float Circle::Perimeter() {
    return 2.00 * PI * this->radius;
}

float Circle::Area() {
    return PI * this->radius * this->radius;
}

float Circle::OverallDimension() {
    return 2.00 * this->radius;
}


#include "Square.h"

#include <utility>
#include <iomanip>

void Square::validateSideLength() {
    if (this->sideLength < 0.00) {
        this->sideLength = 0.00;
    }
}

Square::Square() {
    this->sideLength = 0.00;
}

Square::Square(float sideLength, string colour) {
    this->sideLength = sideLength;
    validateSideLength();
    setColour(std::move(colour));
}

Square::~Square() {
    cout << "The square is squished …" << endl;
}

float Square::getSideLength() const {
    return this->sideLength;
}

void Square::setSideLength(float sideLength) {
    if (sideLength > 0.00)
        this->sideLength = sideLength;
    validateSideLength();
}

void Square::show() {
    float s = this->getSideLength();
    float perimeter = Perimeter();
    float area = Area();
    cout << "Shape Information" << endl;
    cout << "Name\t\t: " << this->getName() << endl;
    cout << "Colour\t\t: " << this->getColour() << endl;
    cout << "Side-Length\t\t: " << fixed << setprecision(2) << s << " cm" << endl;
    cout << "Perimeter\t\t: " << fixed << setprecision(2) << perimeter << " cm" << endl;
    cout << "Area\t\t: " << fixed << setprecision(2) << area << " square cm" << endl;
}

float Square::Area() {
    return this->sideLength * this->sideLength;
}

float Square::Perimeter() {
    return 4.00 * this->sideLength;
}

float Square::OverallDimension() {
    return this->sideLength;
}


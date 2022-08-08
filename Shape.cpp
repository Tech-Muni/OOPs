#include "Shape.h"

#include <utility>

Shape::Shape() {
    this->name = "Unknown";
    this->colour = "undefined";
}

Shape::Shape(string name, string colour) {
    this->name = std::move(name);
    this->colour = std::move(colour);
    checkCondition();
}

string Shape::getColour() const {
    return this->colour;
}

string Shape::getName() const {
    return this->name;
}

void Shape::setName(string name) {
    this->name = std::move(name);
    checkCondition();
}

void Shape::setColour(string colour) {
    this->colour = std::move(colour);
    checkCondition();
}

void Shape::checkCondition() {
    if (this->name.size() > 50) {
        this->name = "Unknown";
    }
    if (this->name != "Circle" && this->name != "Square") {
        this->name = "Unknown";
    }
    if (this->colour.size() > 10) {
        this->colour = "undefined";
    }
    if (this->colour != "red" && this->colour != "green" && this->colour != "blue" && this->colour != "yellow" &&
        this->colour != "pink" && this->colour != "orange") {
        this->colour = "undefined";
    }
}

float Shape::Perimeter() {

}

float Shape::Area() {

}

float Shape::OverallDimension() {

}

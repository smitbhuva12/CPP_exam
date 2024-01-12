#include <iostream>
#include <cmath>

class Shape {
private:
    std::string color;
    double area;

public:
    Shape(const std::string& c) : color(c), area(0.0) {}

    std::string getColor() const {
        return color;
    }

    void setColor(const std::string& c) {
        color = c;
    }

    double getArea() const {
        return area;
    }

    void setArea(double a) {
        area = a;
    }

    virtual void calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const std::string& c, double r) : Shape(c), radius(r) {}

    void calculateArea() override {
        setArea(3.14 * radius * radius);
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(const std::string& c, double l, double w) : Shape(c), length(l), width(w) {}

    void calculateArea() override {
        setArea(length * width);
    }
};

int main() {
    Circle circle("Red", 5.0);
    Rectangle rectangle("Blue", 4.0, 6.0);

    circle.calculateArea();
    rectangle.calculateArea();

    std::cout << "Circle - Color: " << circle.getColor() << ", Area: " << circle.getArea() << "\n";
    std::cout << "Rectangle - Color: " << rectangle.getColor() << ", Area: " << rectangle.getArea() << "\n";

    return 0;
}


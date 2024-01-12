#include <iostream>

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
    virtual void displayDetails() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const std::string& c, double r) : Shape(c), radius(r) {}

    void calculateArea() override {
        setArea(3.14 * radius * radius);
    }

    void displayDetails() const override {
        std::cout << "Circle - Color: " << getColor() << ", Radius: " << radius << ", Area: " << getArea() << "\n";
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

    void displayDetails() const override {
        std::cout << "Rectangle - Color: " << getColor() << ", Length: " << length << ", Width: " << width
                  << ", Area: " << getArea() << "\n";
    }
};

int main() {
    const int numShapes = 2;
    Shape* shapes[numShapes];

    Circle circle("Red", 5.0);
    Rectangle rectangle("Blue", 4.0, 6.0);

    shapes[0] = &circle;
    shapes[1] = &rectangle;

    for (int i = 0; i < numShapes; ++i) {
        shapes[i]->calculateArea();
        shapes[i]->displayDetails();
        std::cout << "\n";
    }

    return 0;
}


#include <iostream>
#include <string>

class Laptop {
private:
    std::string name;
    double price;
    std::string processor;

public:
    Laptop(const std::string& n, double p, const std::string& proc)
        : name(n), price(p), processor(proc) {
    }

    void displayDetails() {
        std::cout << "Laptop Details:\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Price: $" << price << "\n";
        std::cout << "Processor: " << processor << "\n";
    }
};

int main() {
    Laptop laptop1("Example Laptop", 999.99, "Intel i5");
    Laptop laptop2("Another Laptop", 1499.99, "AMD Ryzen 7");

    laptop1.displayDetails();
    std::cout << "\n";
    laptop2.displayDetails();

    return 0;
}


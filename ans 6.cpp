#include <iostream>
#include <fstream>
#include <string>

class FileManager {
public:
    void write(const std::string& filename, const std::string& data) {
        std::ofstream file(ans 1.cpp);
        if (file) {
            file << data;
            std::cout << "Data written to file: " << filename << "\n";
        } else {
            std::cerr << "Error writing to file: " << filename << "\n";
        }
    }

    std::string read(const std::string& filename) {
        std::ifstream file(filename);
        std::string data;

        if (file) {
            getline(file, data, '\0');
            std::cout << "Data read from file: " << filename << "\n";
        } else {
            std::cerr << "Error reading from file: " << filename << "\n";
        }

        return data;
    }
};

int main() {
    FileManager fileManager;

    fileManager.write("example.txt", "Hello, this is a sample text!");

    std::string fileData = fileManager.read("example.txt");
    std::cout << "File content:\n" << fileData << "\n";

    return 0;
}


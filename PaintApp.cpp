#include <iostream>
#include <vector>

// main.cpp

#include <iostream>
#include "Constants.h" // Include the header file

// ... rest of the code ...


enum class ShapeType {
    LINE,
    RECTANGLE,
    CIRCLE,
};

struct Point {
    int x;
    int y;
};

struct Shape {
    ShapeType type;
    Point start;
    Point end;
};

void drawCanvas(const std::vector<Shape>& shapes) {
    char canvas[HEIGHT][WIDTH] = { ' ' };

    for (const auto& shape : shapes) {
        if (shape.type == ShapeType::LINE) {
            // Draw line
            // Your code here
        }
        else if (shape.type == ShapeType::RECTANGLE) {
            // Draw rectangle
            // Your code here
        }
        else if (shape.type == ShapeType::CIRCLE) {
            // Draw circle
            // Your code here
        }
    }

    // Print canvas
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            std::cout << canvas[y][x];
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<Shape> shapes;
    bool exit = false;

    while (!exit) {
        // Clear screen
        std::system("clear");

        // Draw canvas
        drawCanvas(shapes);

        std::cout << "Select shape: (L)ine, (R)ectangle, (C)ircle, (E)xit: ";
        char choice;
        std::cin >> choice;

        if (choice == 'E' || choice == 'e') {
            exit = true;
        }
        else {
            Shape newShape;
            newShape.type = (choice == 'L' || choice == 'l') ? ShapeType::LINE :
                            (choice == 'R' || choice == 'r') ? ShapeType::RECTANGLE :
                            (choice == 'C' || choice == 'c') ? ShapeType::CIRCLE : ShapeType::LINE;

            // Set other properties of the new shape (start, end points, etc.)
            // Your code here

            shapes.push_back(newShape);
        }
    }

    return 0;
}

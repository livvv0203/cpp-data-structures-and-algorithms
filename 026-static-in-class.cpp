#include <iostream>

struct Entity {

    static int x, y;

    static void Print() {
        std::cout << x << ", " << y << std::endl;
    }
};

class Entity_2 {
    float X, Y;

    // Constructor
    Entity_2() {

    }

    Entity_2(float x, float y) {
        X = x;
        Y = y;
    }
    // Destructor
    ~Entity_2() {
        std::cout << "Destroyed Entity!" << std::endl;
    }
};

int main() {

    std::cin.get();
    
    return 0;
}











#include <iostream>

class Entity {

    // Positions of entities 
    public:
        float X, Y;

    void Move(float xa, float ya) {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity {

    public: 
        const char* Name = "Player 1"; // char pointer to store a string

    public: 
        void PrintName() {
            std::cout << Name << std::endl;
        }

};

int main() {
    Player player;
    player.PrintName();

    return 0;
}
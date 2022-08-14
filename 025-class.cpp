#include <iostream>
using namespace std;

/**
 * @brief struct and class in C++
 * struct is public by default, class is private by default
 */

static int s_variable = 5; // Only be linked internally

class Player {
    public: 
        int x, y;
        int speed;

    void Move(int xa, int ya) {
        x += xa * speed; // refers to the current object
        y += ya * speed;
    }
};

int main() {

    Player player; 
    player.Move(1, -1); 

    return 0; 

}














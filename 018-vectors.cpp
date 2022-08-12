#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Dynamic Array

int main() {

    vector<int> arrOfNumber;
    vector<string> friends;

    friends.push_back("Oscar");
    friends.push_back("Angela");
    friends.push_back("Jieqing");
    friends.insert(friends.begin() + 1, "Jim");

    for (int i = 0; i < friends.size(); i++) {
        cout << friends.at(i) + ", ";
    }

    cout << friends.at(0) << endl; // Oscar
    cout << friends.at(1) << endl; // Jim
    cout << friends.at(2) << endl; // Angela
    cout << friends.at(3) << endl; 
    cout << friends.size() << endl; // 4 

    char myGrade = 'Z';
    switch(myGrade) {
        case 'A':
            cout << "aaa" << endl;
            break;
        case 'B':
            cout << "bbb" << endl;
            break;
        default:
            cout << "Invalid Input." << endl;
    }

    int index = 6;

    do {
        cout << "Executing..." << endl;
    } while(index <= 5);

    return 0;

}









#include <iostream>

// Base class: Player
class Player {
public:
    void play() {
        std::cout << "The player is playing cricket." << std::endl;
    }
};

// Derived class: Batsman
class Batsman : public Player {
public:
    void play() {
        std::cout << "The batsman is batting." << std::endl;
    }
};

// Derived class: Bowler
class Bowler : public Player {
public:
    void play() {
        std::cout << "The bowler is bowling." << std::endl;
    }
};

int main() {
    // Create objects of Batsman and Bowler classes
    Batsman batsman;
    Bowler bowler;

    // Call the play() method for each object
    batsman.play();  // Output: The batsman is batting.
    bowler.play();   // Output: The bowler is bowling.

    return 0;
}

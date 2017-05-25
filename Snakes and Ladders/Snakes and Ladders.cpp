#include <iostream>

using namespace std;

int main() {
    int userInput;
    int currentSquare = 1;

    while (true){
        cin >> userInput;
        if (userInput == 0){
            cout << "You Quit!" << endl;
            return 0;
        }
        if (userInput < 2 || userInput > 12){
            return 0;
        }
        currentSquare = currentSquare + userInput;

        if (currentSquare == 9){ // Ladder
            currentSquare = 34;
        }
        if (currentSquare == 40){ // Ladder
            currentSquare = 64;
        }
        if (currentSquare == 54){ // Snake
            currentSquare = 19;
        }
        if (currentSquare == 67){ // Ladder
            currentSquare = 86;
        }
        if (currentSquare == 90){ // Snake
            currentSquare = 48;
        }
        if (currentSquare == 99){ // Snake
            currentSquare = 77;
        }
        if (currentSquare > 100){
            currentSquare = currentSquare - userInput;
        }

        cout << "You are now on square " << currentSquare << endl;

        if (currentSquare == 100){
            cout << "You Win!";
            return 0;
        }
    }
}

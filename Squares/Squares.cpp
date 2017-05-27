#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int numberOfTiles;
    float sideLength;

    cin >> numberOfTiles;

    while (numberOfTiles != 0){

        sideLength = sqrt(numberOfTiles);

        if (sideLength == floor(sideLength)){
            cout << "The largest square has side length " << sideLength << "." << endl;
            return 0;
        }

        numberOfTiles = numberOfTiles - 1;
    }
}

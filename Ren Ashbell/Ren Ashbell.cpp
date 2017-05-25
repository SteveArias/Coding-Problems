#include <iostream>

using namespace std;

int main() {
    int numberOfLines;
    string yesOrNo = "YES";
    cin >> numberOfLines;

    if (numberOfLines < 2 || numberOfLines > 10){
        return 0;
    }

    int numberArray[numberOfLines];

    for (int x = 0; x < numberOfLines; x++){
        int currentNumber;
        cin >> currentNumber;
        if (currentNumber > 10000 || currentNumber < 0){
            return 0;
        }
        numberArray[x] = currentNumber;
    }

    for (int x = 0; x < numberOfLines; x++){
        if (numberArray[0] < numberArray[x]){
            yesOrNo = "NO";
        }
    }

    cout << yesOrNo << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {

    float originalPrice;
    float discountPercent;
    float discountPrice;
    int numOfItems;
    float threshold;
    int numOfWorthwhileItems = 0;

    cin >> numOfItems >> threshold;

    if (numOfItems < 1 || numOfItems > 1000000){
        return 0;
    }
    if (threshold < 0 || threshold > 1000000000){
        return 0;
    }

    for (int x = 0; x < numOfItems; x++){
        cin >> originalPrice >> discountPercent;
        if (originalPrice < 1 || originalPrice > 1000000000){
            return 0;
        }
        if (discountPercent < 0 || discountPercent > 100){
            return 0;
        }
        discountPrice = originalPrice - (originalPrice*(discountPercent/100));
        if (discountPrice <= threshold){
            numOfWorthwhileItems +=  1;
        }
    }

    cout << numOfWorthwhileItems << endl;

    return 0;
}

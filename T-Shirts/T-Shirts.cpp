#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int smallShirt;
    int mediumShirt;
    int largeShirt;
    int freeShirtCounter;
    int shirtCount;
    float totalCost;
    float smallShirtPrice;
    float mediumShirtPrice;
    float largeShirtPrice;

    cin >> smallShirt >> mediumShirt >> largeShirt;

    shirtCount = smallShirt + mediumShirt + largeShirt;
    freeShirtCounter = (shirtCount / 4);

    if (smallShirt < 0 || mediumShirt < 0 || largeShirt < 0 || smallShirt > 10000 || mediumShirt > 10000 || largeShirt > 10000){
        cout << "Too small or big";
        return 0;
    }

    cin >> smallShirtPrice >> mediumShirtPrice >> largeShirtPrice;

    if (smallShirtPrice < 0.01 || mediumShirtPrice < 0.01 || largeShirtPrice < 0.01 || smallShirtPrice > 99.99 ||
        mediumShirtPrice > 99.99 || largeShirtPrice > 99.99){
        return 0;
    }

    totalCost = (smallShirt*smallShirtPrice) + (mediumShirt*mediumShirtPrice) + (largeShirt*largeShirtPrice);

    if (largeShirt != 0 && freeShirtCounter != 0){
        while (freeShirtCounter != 0 && largeShirt != 0){
            totalCost = totalCost - (largeShirtPrice);
            freeShirtCounter = freeShirtCounter - 1;
            }
    }
    else if (mediumShirt != 0 && freeShirtCounter != 0){
        while (freeShirtCounter != 0 && mediumShirt != 0){
            totalCost = totalCost - (mediumShirtPrice);
            freeShirtCounter = freeShirtCounter - 1;
        }
    }
    else if (smallShirtPrice != 0 && freeShirtCounter != 0){
        while (freeShirtCounter != 0 && smallShirt != 0){
            totalCost = totalCost - (largeShirtPrice);
            freeShirtCounter = freeShirtCounter - 1;
        }
    }

    cout << fixed << setprecision(2);
    cout << totalCost;

    return 0;

}

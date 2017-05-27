#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int burger1 = 461;
    int burger2 = 431;
    int burger3 = 420;
    int burger4 = 0;

    int side1 = 100;
    int side2 = 57;
    int side3 = 70;
    int side4 = 0;

    int drink1 = 130;
    int drink2 = 160;
    int drink3 = 118;
    int drink4 = 0;

    int dessert1 = 167;
    int dessert2 = 266;
    int dessert3 = 75;
    int dessert4 = 0;

    int burgerChoice;
    int sideChoice;
    int drinkChoice;
    int dessertChoice;
    int totalCalories = 0;

    cin >> burgerChoice;
    cin >> sideChoice;
    cin >> drinkChoice;
    cin >> dessertChoice;

    switch(burgerChoice){
        case 1:
            totalCalories += burger1;
            break;
        case 2:
            totalCalories += burger2;
            break;
        case 3:
            totalCalories += burger3;
            break;
        case 4:
            totalCalories += burger4;
        default:
            break;
    }

    switch(sideChoice){
        case 1:
            totalCalories += side1;
            break;
        case 2:
            totalCalories += side2;
            break;
        case 3:
            totalCalories += side3;
            break;
        case 4:
            totalCalories += side4;
        default:
            break;
    }

    switch(drinkChoice){
        case 1:
            totalCalories += drink1;
            break;
        case 2: totalCalories += drink2;
            break;
        case 3: totalCalories += drink3;
            break;
        case 4:
            totalCalories += drink4;
        default:
            break;
    }

    switch(dessertChoice){
        case 1:
            totalCalories += dessert1;
            break;
        case 2: totalCalories += dessert2;
            break;
        case 3: totalCalories += dessert3;
            break;
        case 4:
            totalCalories += dessert4;
        default:
            break;
    }

    cout << "Your total Calorie count is " << totalCalories << "." << endl;
    return 0;



}

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    int daytimeMinutes;
    int eveningMinutes;
    int weekendMinutes;
    float aDaytimeCost;
    float aEveningCost;
    float aWeekendCost;
    float bDaytimeCost;
    float bEveningCost;
    float bWeekendCost;
    float aTotalCost;
    float bTotalCost;

    cin >> daytimeMinutes;
    cin >> eveningMinutes;
    cin >> weekendMinutes;

    aDaytimeCost = (daytimeMinutes - 100)*(0.25);
    if (aDaytimeCost < 0){
        aDaytimeCost = 0;
    }
    aEveningCost = eveningMinutes*0.15;
    aWeekendCost = weekendMinutes*0.20;
    aTotalCost = aDaytimeCost + aEveningCost + aWeekendCost;

    bDaytimeCost = (daytimeMinutes - 250)*(0.45);
    if (bDaytimeCost < 0){
        bDaytimeCost = 0;
    }
    bEveningCost = eveningMinutes*0.35;
    bWeekendCost = weekendMinutes*0.25;
    bTotalCost = bDaytimeCost + bEveningCost + bWeekendCost;

    cout << fixed << setprecision(2);
    cout << "Plan A costs " << aTotalCost << endl;
    cout << "Plan B costs " << bTotalCost << endl;

    if (aTotalCost < bTotalCost){
        cout << "Plan A is cheapest.";
        return 0;
    }
    else if (bTotalCost < aTotalCost){
        cout << "Plan B is cheapest.";
        return 0;
    }
    else {
        cout << "Plan A and B are the same price." << endl;
        return 0;
    }

    return 0;
}

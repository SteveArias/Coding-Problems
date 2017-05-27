#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int startYear;
    int endYear;
    int yearDifference;
    int answerIndex = 2;

    cin >> startYear;
    cin >> endYear;

    yearDifference = endYear - startYear;

    answerIndex = floor(yearDifference / 60) + 1;

    while (answerIndex != 0){
        cout << "All positions change in year " << startYear << endl;
        startYear = startYear + 60;
        answerIndex = answerIndex - 1;
    }

    return 0;
}

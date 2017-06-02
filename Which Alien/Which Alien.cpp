#include <iostream>

using namespace std;

int main() {

    int numOfAntennas;
    int numOfEyes;
    int graemeMarcurian = 0;
    int troyMartian = 0;
    int vladSaturnian = 0;

    cin >> numOfAntennas;
    cin >> numOfEyes;

    if (numOfAntennas >= 3 && numOfEyes <= 4){
        troyMartian = 1;
    }
    if (numOfAntennas <= 6 && numOfEyes >= 2){
        vladSaturnian = 1;
    }
    if (numOfAntennas <= 2 && numOfEyes <= 3){
        graemeMarcurian = 1;
    }

    if (vladSaturnian == 1){
        cout << "VladSaturnian" << endl;
    }
    if (graemeMarcurian == 1){
        cout << "GraemeMarcurian" << endl;
    }
    if (troyMartian == 1){
        cout << "TroyMartian" << endl;
    }


    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int total;
    int number_of_operations;
    int number_1;
    int number_2;
    cin >> number_of_operations;

    int number_array[number_of_operations];


    if (number_of_operations < 1 || number_of_operations > 100000){
        return 0;
    }

    for (int x = 0; x < number_of_operations; x++){
        cin >> number_1 >> number_2;
        total = number_1 + number_2;
        number_array[x] = total;
    }

    for (int x = 0; x < number_of_operations; x++){
        cout << number_array[x] << endl;
    }


    return 0;
}

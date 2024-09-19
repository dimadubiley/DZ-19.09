#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int min = 10;
    int max = 99;

    srand(time(0));

    int a;
    cout << "Enter: ";
    cin >> a;

    int* arr = new int[a];
    int* pos = new int[a];
    int* neg = new int[a];
    int* zero = new int[a];

    int posCount = 0, negCount = 0, zeroCount = 0;

    for (int i = 0; i < a; ++i) {
        int ran = min + rand() % (max - min + 1);
        arr[i] = ran % 41 - 20;

        if (arr[i] > 0) {
            pos[posCount++] = arr[i];
        }
        else if (arr[i] < 0) {
            neg[negCount++] = arr[i];
        }
        else {
            zero[zeroCount++] = arr[i];
        }
    }

    cout << "Normal mass: ";
    for (int i = 0; i < a; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Mass with +: ";
    for (int i = 0; i < posCount; ++i) {
        cout << pos[i] << " ";
    }
    cout << endl;

    cout << "Mass with -: ";
    for (int i = 0; i < negCount; ++i) {
        cout << neg[i] << " ";
    }
    cout << endl;

    cout << "Mass with 0: ";
    for (int i = 0; i < zeroCount; ++i) {
        cout << zero[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] pos;
    delete[] neg;
    delete[] zero;
}

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int z;
    cout << "Enter number: ";
    cin >> z;

    int low = 0;
    int high = 9;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == z) {
            cout << "Value Found by binary search";
            return 0;
        }
        else if (z > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "Value Not Found by binary search try another";

}
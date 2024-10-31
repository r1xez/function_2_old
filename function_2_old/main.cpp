#include <iostream>
using namespace std;

void countElements(int arr[], int size, int& positive, int& negative, int& zero) {
    positive = 0;
    negative = 0;
    zero = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            ++positive;
        }
        else if (arr[i] < 0) {
            ++negative;
        }
        else {
            ++zero;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

   
    int* arr = new int[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int positive, negative, zero;
    countElements(arr, n, positive, negative, zero);

    cout << "Positive: " << positive << ", Negative: " << negative << ", Zero: " << zero << endl;

    
    delete[] arr;

    return 0;
}

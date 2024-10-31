#include <iostream>
using namespace std;

double average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size; 
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

    cout << "Average: " << average(arr, n) << endl;

    delete[] arr;
    return 0;
}

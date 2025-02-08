#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversed array is: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}   

int findMaxElement(int arr[], int size) {
    int maxVal = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int findMinElement(int arr[], int size) {
    int minVal = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at index " << i << endl;
        cin >> arr[i];
    }
    reverseArray(arr, size);
    int maxResult = findMaxElement(arr, size);
    int minResult = findMinElement(arr, size);
    cout << "\nMaximum element in the array is " << maxResult << endl;
    cout << "Minimum element in the array is " << minResult << endl;     
}

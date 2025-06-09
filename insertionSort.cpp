#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // جابجایی عناصر بزرگتر از key به سمت راست
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "آرایه قبل از مرتب‌سازی:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    insertionSort(arr, n);

    cout << "\nآرایه بعد از مرتب‌سازی:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

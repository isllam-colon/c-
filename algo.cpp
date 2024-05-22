#include <iostream>
using namespace std;
int binsearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // x is present at mid
        if (arr[mid] == x)
            return mid;

        // if x great ignore left half
        if (arr[mid] < x)
            left = mid + 1;

        // if x is small ignore right half
        else
            right = mid - 1;
    }

    return -1;
}
int main() {
    int c[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(c) / sizeof(c[0]);
    int x = 23; // the element

    int result = binsearch(c, 0, n - 1, x);
    if (result == -1)
        cout << "element " << x << " is not present in array";
    else
        cout << "element  " << x << " is present at index " << result;

    return 0;
}

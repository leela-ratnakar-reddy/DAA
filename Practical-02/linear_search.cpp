#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int found = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1)
        cout << "Element found at position " << found + 1;
    else
        cout << "Element not found.";

    return 0;
}

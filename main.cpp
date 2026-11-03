#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    int n, value;

    cout << "STANDARD TEMPLATE LIBRARY (STL)" << endl;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of elements." << endl;
        return 0;
    }

    cout << "Enter " << n << " integer elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        numbers.push_back(value);
    }

    cout << "\nOriginal elements: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
        cout << *it << " ";

    sort(numbers.begin(), numbers.end());

    cout << "\nSorted elements: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
        cout << *it << " ";

    reverse(numbers.begin(), numbers.end());

    cout << "\nReversed elements: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
        cout << *it << " ";

    cout << endl;
    return 0;
}

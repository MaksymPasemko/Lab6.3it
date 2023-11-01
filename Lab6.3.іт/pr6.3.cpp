#include <iostream>
#include <vector>
using namespace std;

int CountPositive(const vector<int>& arr) {
    int count = 0;
    for (int element : arr) {
        if (element > 0) {
            count++;
        }
    }
    return count;
}

template <typename T, typename Predicate>
int CountIf(const vector<T>& arr, Predicate pred) {
    int count = 0;
    for (const T& element : arr) {
        if (pred(element)) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = { 2, -3, 4, -5, 6, 7, -8, 9 };

    int count1 = CountPositive(arr);

    int count2 = CountIf(arr, [](int x) { return x > 0;
        });

    cout << endl;
    cout << "\Count of positive elements (regular function): " << count1 << endl;
    cout << "Count of positive elements (function template): " << count2 << endl;

    return 0;
}
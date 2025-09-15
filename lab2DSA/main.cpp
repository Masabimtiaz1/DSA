#include <iostream>
#include <vector>
using namespace std;


vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);  
        }
    }

    return indices;
}


int main() {
 
    vector<int> arr1 = {1, 2, 3, 2, 4, 2, 5};
    vector<int> result1 = findIndices(arr1, 2);
    cout << "Indices of 2: ";
    for (int idx : result1) cout << idx << " ";
    cout << endl;

 
    vector<int> arr2 = {10, 20, 30, 40};
    vector<int> result2 = findIndices(arr2, 5);
    cout << "Indices of 5: ";
    for (int idx : result2) cout << idx << " ";
    cout << "(empty if not found)" << endl;

    vector<int> arr3;
    vector<int> result3 = findIndices(arr3, 1);
    cout << "Indices of 1 in empty array: ";
    for (int idx : result3) cout << idx << " ";
    cout << "(empty if not found)" << endl;

    return 0;
}

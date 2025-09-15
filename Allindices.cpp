#include <iostream>
#include <vector>

using namespace std;

// A function that takes a character array, its size, and a key as input and outputs a vector of indices of the key
vector<int> keyIndices (char arr[], int size, char key) {
    vector<int> res;
    for (int i = 0; i < size; i++) 
        if (arr[i] == key) res.push_back(i);
    
    return res;
}

int main () {
    // Test case with two occurences of the key
    char arr[5] = {'2', '2', '3', '4', '5'};
    char key = '2';

    vector<int> res = keyIndices(arr, 5, key);
    for (int& indices : res) {
        cout << indices << endl;
    }
    // Output
    // 0
    // 1
}
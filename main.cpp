#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse1(vector<int> A) {
    vector<int> B;
    for (int i = A.size() - 1; i >= 0; i--) {
        B.push_back(A[i]);
    }
    return B;
}
vector<int> reverse2(vector<int> A) {
    reverse(A.begin(), A.end());
    return A;
}


int main() {
    vector<int> A = {1, 2, 3, 4, 5};

    for (auto i: reverse2(A)) {
        cout << i << " ";
    }
    cout << endl;

    for (auto i: reverse1(A)) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
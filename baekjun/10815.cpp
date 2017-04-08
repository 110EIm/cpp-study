#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, input;
    vector<int> v1, v2;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> input;
        v1.push_back(input);
    }

    cin >> M;
    for(int j = 0; j < M; j++) {
        cin >> input;
        v2.push_back(input);
    }

    sort(v1.begin(), v1.end());
    for(int k : v2) {
        cout << binary_search(v1.begin(), v1.end(), k) << ' ';
    }

    return 0;
}
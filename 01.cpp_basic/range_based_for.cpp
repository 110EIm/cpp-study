#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int sum = 0;

    // Range-based for Loop
    for (auto &i : v) {
        sum += i;
    }

    cout << sum << endl;

    string str = "dimigo";

    for(auto &i : str)
        cout << i << ' ';

    return 0;
}
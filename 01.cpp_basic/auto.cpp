#include <iostream>
#include <vector>

using namespace std;

int main() {
    // C++ 11부터 컴파일러가 자료형을 자동으로 결정해주는 auto 키워드가 추가됨
    auto a = 10, b = 20;
    cout << a + b << endl;

    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    v.push_back(7);

    for (auto i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';

    return 0;
}
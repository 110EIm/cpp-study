#include <iostream>

using namespace std;

int sum(int, int);

int main() {
    // lambda : C++11에서 새롭게 추가됨

    cout << sum(10, 20) << endl;

    auto func = [](int x, int y) {
        return x + y;
    };
    cout << func(10, 20) << endl;

    cout << [](int x, int y) {
        return x + y;
    } (10 ,20) << endl;

    int a = 10;
    auto func2 = [a](int num) {
        return num < a;
    };

    cout << func2(5) << endl;
    cout << func2(20) << endl;

    int b = 1, c = 2;

    auto func3 = [&](int num) {
        b = num, c = num; // 외부 모든 변수에 접근 가능
    };

    auto func4 = [&b](int num) {
        b = num;
        // c = num; // compile error
    };

    return 0;
}

int sum(int x, int y) {
    return x + y;
}
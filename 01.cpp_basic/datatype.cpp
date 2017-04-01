#include <iostream>
#include <iomanip>

using namespace std;

// 정수형 : short -> int -> long -> long long
// 실수형 : float -> double -> long double
// 논리형 : bool
// 문자형 : char

int main() {
    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;

    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;

    cout << sizeof(bool) << endl;
    cout << sizeof(char) << endl;

    // 논리형 : bool
    bool flag = false;
    cout << (flag ? "참" : "거짓") << endl;

    unsigned int a = 2147483648;
    cout << a << endl;

    long double f = 1.1234567890;

    // 소수점 5개 자리까지 출력
    cout << setprecision(6) << f << endl;
    cout << setprecision(8) << f << endl;
    cout << setprecision(10) << f << endl;

    // fixed : 소수점 자리수 고정
    cout << fixed;
    cout << setprecision(5) << f << endl;
    cout << setprecision(8) << f << endl;
    cout << setprecision(10) << f << endl;
    return 0;
}
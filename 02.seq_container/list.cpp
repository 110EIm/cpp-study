#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l;
    auto f = [](list<int> &l) {
        for(auto &x : l) {
            cout << x << ' ';
        }
    };

    l.push_back(-10);
    l.push_back(-20);
    l.push_front(15);
    l.push_front(30);

    l.pop_back();
    l.pop_front();

    f(l);
    cout << endl;

    l.sort();
    f(l);

    l.reverse();
    f(l);

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

/* STL : Standard Template Library
 * 1. 순차 컨테이너 (Sequence Continaer)
 * 2. 정의 : 논리적으로 연속된 공간에 데이터가 관리됨
 * 3. 종류 :  vector, deque, list, array, forward_list
 */

int main() {
    vector<int> v1; // 길이가 0인 벡터
    vector<int> v2(10); // 길이가 10인 벡터
    vector<int> v3(10, 1); // 길이가 10이고 초기값이 1인 벡터
    vector<int> v4 = {1, 2, 3, 4, 5};

    cout << v1.size() << endl;
    cout << v2.size() << endl;
    cout << v3.size() << endl;
    cout << v4.size() << endl;

    //cout << v4[5] << endl; // 그냥 넘어버린 메모리의 값을 출력
    //cout << v4.at(5) << endl; // 메모리 scope를 관리함

    v4[2] = 10;

    cout << "front = " << v4.front() << endl;
    cout << "back = " << v4.back() << endl;

    // push_back() : 연속된 메모리를 할당받은 뒤 가장 뒤에 원소를 추가하는 함수
    v4.push_back(6);
    v4.push_back(7);

    auto print_vector = [](vector<int> &vec) {
        for (auto &i : vec)
            cout << i << ' ';
        cout << endl;
    };
    print_vector(v4);

    // pop_back() : 가장 마지막의 원소를 벡터에서 뺌
    v4.pop_back();
    v4.pop_back();
    print_vector(v4);

    v3.pop_back();
    cout << endl;

    v4.clear();
    cout << "size : " << v4.size() << endl;

    v4.push_back(1);
    v4.push_back(2);
    v4.push_back(3);
    v4.push_back(4);

    for(auto it = v4.begin(); it != v4.end(); it++) {
        cout << "v4[" << (it - v4.begin()) << "] = " << it[0] << endl;
    }

    auto ptr = v4.begin();
    v4.insert(ptr, 100);
    print_vector(v4);

    return 0;
}
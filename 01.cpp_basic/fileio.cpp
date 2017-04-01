#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string str1 = "안녕, 세상아!";
    string str2;

    //파일 출력
    ofstream ofs("hello.txt"); // 출력 파일스트림 생성
    ofs << str1;
    ofs.close();

    //파일 입력
    ifstream ifs("hello.txt"); // 입력 파일스트림 생성
    //ifs >> str2; // 첫 번째 띄어쓰기까지 입력받음
    getline(ifs, str2); // 한줄 다 입력받기
    ifs.close();
    cout << str2 << endl;

    return 0;
}
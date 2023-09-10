#include <iostream>

using namespace std;

class MyClass{
public:
    MyClass(){              // 생성자
        cout << "생성자가 호출되었다!!" << endl;
    }

    ~MyClass(){             // 소멸자
        cout << "소멸자가 호출되었다!!" << endl;
    }
};

//MyClass globalobj;

void testLocalOjb(){
    cout << "testLocalObj 함수 시작!!" << endl;
    MyClass localob;
    cout << "testLocalObj 함수 끝!!" << endl;
}
int main(){
    cout << "main 함수 시작" << endl;
    cout << "main 함수 끝!!" << endl;
    testLocalOjb();
}

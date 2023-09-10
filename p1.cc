#include <iostream>

using namespace std;

class MyClass{
private:
        int a;
public:
    
    void PrintThis(){                                   // 실제 메모리 상에 객체가 생성될 때마다 맴버함수가  생성되는게 아니라, 다른 공안에 정의 되어있고,
        this->a = 10;                                                // this라는 포인터가 암묵적으로 전달되고 어떤 객체인지 알 수 있게 해준다.
        cout << "내 맴버변수는 " << this->a << endl;
    }

};

int main(){
    MyClass a, b, c;
    cout << "a의 주소는 " << &a << endl;
    cout << "b의 주소는 " << &b << endl;
    cout << "c의 주소는 " << &c << endl;
    a.PrintThis();
    b.PrintThis();
    c.PrintThis();
}

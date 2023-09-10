#include <iostream>

using namespace std;

// 생성자 : 맴버 변수초기화
//
class Complex{
public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(double real_, double imag_){
        real = real_;
        imag = imag_;
    }
    double GetReal(){
        return real;
    }
    void SetReal(double real_){
        real = real_;
    }
    double GetImag(){
        return imag;
    }
    void SetImag(double imag_){
        imag = imag_;
    }
private:
    double real;
    double imag;
};

int main(void){
    Complex c1;
    Complex c2(2,3);

    cout << "C1 = " << c1.GetReal() << " , " << c1.GetImag() << endl;
    cout << "C2 = " << c2.GetReal() << " , " << c2.GetImag() << endl;
}



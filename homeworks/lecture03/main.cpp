#include <iostream>


class Complex{

    int real, imaginary;

    public:
        Complex(){
        }
        Complex(int r, int i){
            real=r;
            imaginary=i;
        }

        void print(){
            std::cout<<real <<" i"<< imaginary<<std::endl;
        }

        Complex operator+(const Complex& b){
            Complex result = Complex();
            result.real = real + b.real;
            result.imaginary = imaginary + b.imaginary;
            return result;
        }
};

int main(){
    // how to define an operator
    Complex c1 = Complex(1, 2);
    Complex c2 = Complex(3, 4);
    auto c3 = c1+c2;
    c3.print();

    hello();

    std::cout<<"end program"<<std::endl;

    return 1;
}

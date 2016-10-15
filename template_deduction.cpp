#include<iostream>
using namespace std;

template<typename T>
//  Universal Type deduction
void f_uni(T&& param) {
  double c = 1 + param;
  cout << "result is " << c << endl;
}

template<typename T>
//  Reference Type deduction
void f_ref(T& param) {
  double c = 1 + param;
  cout << "result is " << c << endl;
}

template<typename T>
//Not a reference or pointer-- pass by value  -> Type deduction
void f_val(T param) {
  double c = 1;
  cout << "result is " << param << endl;
}

template<typename T>
//Type deducted is a pointer
void f_ptr(T* param) {
  cout << "result is " << param << endl;
}

int main() {
 double     x  = 3, x1 = 4;
 int        y  = 5,  z = 6;
 const int  cx = x;
 const int& rx = x;
 const char* const pointers = "fun with pointers";

 f_uni(x);
 f_uni(cx);
 f_uni(rx);
 f_uni(3);

 f_ref(y);
 f_ref(y);

 f_val(z);
 f_val(x);
 f_val(cx);
 f_val(rx);
 f_val(pointers);
 // f3(double x, int y) error type deduction two different datatype
}


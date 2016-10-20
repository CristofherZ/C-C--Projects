#include<iostream>
#include<typeinfo>

using namespace std;

template<typename A, typename B>
auto Sum(A a,B b) -> decltype(a + b) {
  return a + b;
}

int main()
{
  auto number = 2;
  auto sum1 = [] (int x, double y) {return x + y;}; // lambda expression
  auto sum2 = [number] (int x) {return x % number;};
  auto sum3 = [&myNumber = number] (int x)  {return x % myNumber;};
  auto sum4 = [&myNumber = number] (auto x) {return x % myNumber;};
  auto sum = Sum(3 , 2);
  cout << "the sum1 is " << sum1(3, 2.5) << endl;
  cout << "the sum is "  << sum << " is type " <<  typeid(sum).name() << endl;
  cout << "the sum2 is " << sum2(3) << endl;
  cout << "the sum3 is " << sum3(3) << endl;
  cout << "the sum4 is " << sum4(3) << endl;
  return 0;
}

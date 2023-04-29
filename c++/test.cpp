#include <iostream>
#include <typeinfo>

int main() {
  int num = 10;
  double pi = 3.14;
  bool is_true = true;
  char letter = 'A';
  std::string str = "hello";
  
  std::cout << "Data type of num: " << typeid(str[0]).name() << std::endl;
  std::cout << "Data type of pi: " << typeid(pi).name() << std::endl;
  std::cout << "Data type of is_true: " << typeid(is_true).name() << std::endl;
  std::cout << "Data type of letter: " << typeid(letter).name() << std::endl;
  std::cout << "Data type of str: " << typeid(str).name() << std::endl;
  
  return 0;
}

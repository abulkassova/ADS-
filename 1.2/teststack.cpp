#include <iostream>
#include <string>
#include <stack>
#include "stack.cpp"
using namespace std;
int main() {
  Stack<int> integer_stack;
  Stack<string> string_stack;
  Stack<float> asda;
  integer_stack.push(2);
  integer_stack.push(54);
  integer_stack.push(255); 
  string_stack.push("Welcome");
  string_stack.push("to");
  string_stack.push("San Junipero");
  int qwe;
  cout << integer_stack.pop(qwe) << " "<<qwe<< " is removed from stack"<<endl;
  string qwe2;
  cout << string_stack.pop(qwe2) << " "<<qwe2<< "  is removed from stack "<< endl;   
  cout << "Top element is " << integer_stack.back()<< endl;    
  cout << "Top element is " << string_stack.back()<< endl;
  cout << "Num of entries is " << integer_stack.getNumEntries()<< endl;    
  cout << "Num of entries is " << string_stack.getNumEntries()<< endl;

  return 0;
}
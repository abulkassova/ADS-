#include <iostream>
//operations
//Stack(): this constructor initializes the stack to a size of 10.
#define SIZE 10
template <class T> class Stack {
public:
  Stack();  
  Stack(const Stack&);
  Stack(int size);
  ~Stack(); 
  bool push(T element);
  bool pop(T& out);
  T back(void);
  int getNumEntries();
private:
  int top;
  T st[SIZE];
};


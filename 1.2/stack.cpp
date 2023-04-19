#include <iostream>
#include "stack.h"
template <class T> Stack<T>::Stack() { top = -1; }

template <class T> bool Stack<T>::push(T element){
  if (top == (SIZE - 1)) return 0;
  else {
    top = top+1;
    st[top] = element;
    return 1;
  }
}
template <class T> 
Stack<T>::~Stack()
{ 
}
template <class T>
Stack<T>::Stack(const Stack&toCopy){   
  top = toCopy.top;
  for(int i = 0; i < top; i++) {
    st[i] = toCopy.st[i];
  }
}

template <class T> bool Stack<T>::pop(T& out){
  if(top == -1) return 0;
  out = st[top];
  top--;
  return 1;  
}
template <class T> T Stack<T>::back(void){
  T back_element = st[top];
  return back_element;
}
template <class T> int Stack<T>::getNumEntries(){
  int x = top + 1;
  return x;  
}

// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int 100>
class TStack {
 private:
  T arr[100];
  int top;
 public:
  TStack():top(-1) { }
  T get() const {
    return arr[top];
  }
  int isFull() const {
    return top == 99;
  }
  int isEmpty() const {
    return top == -1;
  }
  void push(T w) {
    if (top < 99)
      arr[++top] = w;
  }
  void pop() {
    if (top >= 0)
      top--;
  }
};
int prior(char ch);
#endif  // INCLUDE_TSTACK_H_

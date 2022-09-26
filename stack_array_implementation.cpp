#include <iostream>
using namespace std;
#define MAX_SIZE 101
int top = -1;
int A[MAX_SIZE];

void pushStack(int x)
{
  if (top == MAX_SIZE - 1)
  {
    cout << " Error : stack overflow" << endl;
    return;
  }
  A[++top] = x;
}
void popStack()
{
  if (top == -1)
  {
    cout << "Error: There are no element to pop" << endl;
    return;
  }
  top--;
}
int getTopOfStack()
{
  return top;
}
bool isEmptyStack()
{
  if (top == -1)
  {
    return true;
  }
  return false;
}
void printStack()
{
  for (int i = 0; i <= top; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;
}
int main()
{
  pushStack(1);
  pushStack(2);
  pushStack(3);
  pushStack(4);
  pushStack(5);
  pushStack(6);
  popStack();
  printStack();
  return 0;
}
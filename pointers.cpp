#include <iostream>
using namespace std;

int getNumber()
{
  return 5;
}
int add(int a, int b)
{
  return a + b;
}

int main()
{
  int (*addPtr)(int a, int b) = add;
  cout << addPtr(1, 2) << endl;

  return 0;
}

#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *link;
};
struct Node *top = NULL;

void pushStack(int x)
{
  struct Node *temp = new Node();
  temp->data = x;
  temp->link = top;
  top = temp;
}
void pop()
{
  struct Node *temp;
  if (top == NULL)
    return;
  temp = top;
  top = top->link;
  delete temp;
}

Node getTopOfStack()
{
  return *top;
}
bool isEmpty()
{
  if (top == NULL)
  {
    return true;
  }
  return false;
}
int main()
{
  pushStack(1);
  pushStack(2);
  pushStack(3);
  int topVal = getTopOfStack().data;
  cout << topVal << endl;
  bool isEmptyValue = isEmpty();
  cout << isEmpty() << endl;
  return 0;
}
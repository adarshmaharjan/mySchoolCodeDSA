#include <iostream>
#include <stack>
using namespace std;

struct Node
{
  int value;
  struct Node *next;
};
void reverse(Node **head)
{
  Node *temp = *head;
  if (*head == NULL)
  {
    return;
  }
  stack<Node *> s;
  while (temp != NULL)
  {
    s.push(temp);
    temp = temp->next;
  } 
  temp = s.top();
  *head = temp;
  s.pop();

  while (!s.empty())
  {
    temp->next = s.top();
    s.pop();
    temp = temp->next;
  }
  temp->next = NULL;
}
void pushIntoStack(Node **head, int value)
{
  Node *tempHead = *head;
  Node *temp = new Node();
  temp->value = value;
  temp->next = NULL;

  if (*head == NULL)
  {
    *head = temp;
    return;
  }
  // * for insertion in the tail
  // while (tempHead->next != NULL)
  // {
  //   tempHead = tempHead->next;
  // }
  // tempHead->next = temp;
  // * for insertion in the tail

  temp->next = *head;
  *head = temp;
}

void printValue(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->value << "<--";
    temp = temp->next;
  }
  cout << endl;
}
int main()
{
  Node *head = NULL;

  pushIntoStack(&head, 1);
  pushIntoStack(&head, 2);
  pushIntoStack(&head, 3);
  pushIntoStack(&head, 4);
  printValue(head);
  reverse(&head);

  cout << "rev: " << endl;
  printValue(head);
  return 0;
}
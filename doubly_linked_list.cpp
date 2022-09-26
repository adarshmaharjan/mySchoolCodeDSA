#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *prev;
  struct Node *next;
};

struct Node *head;
struct Node *getNewNode(int data)
{
  struct Node *newNode = new Node();
  newNode->data = data;
  newNode->prev = NULL;
  newNode->next = NULL;
  return newNode;
}
void printList()
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
void printListUsingRecursion(Node *tempHead)
{
  if (tempHead == NULL)
  {
    cout << endl;
    return;
  }
  cout << tempHead->data << " ";
  printListUsingRecursion(tempHead->next);
}
void reversePrint()
{
  struct Node *temp = head;
  if (temp == NULL)
  {
    return;
  }
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  cout << "Reverse : " << endl;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->prev;
  }
  cout << endl;
}
void reversePrintThroughRecursion(Node *tempHead)
{
  if (tempHead == NULL)
  {
    cout << endl;
    return;
  }
  reversePrintThroughRecursion(tempHead->next);
  cout << tempHead->data << " ";
}
void insertAtHead(int data)
{
  Node *newNode = getNewNode(data);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  head = newNode;
}
int main()
{
  head = NULL;
  insertAtHead(2);
  insertAtHead(3);
  insertAtHead(4);
  printList();
  printListUsingRecursion(head);
  reversePrint();
  reversePrintThroughRecursion(head);
  cout << endl;
  return 0;
}
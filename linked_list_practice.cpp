// #include <iostream>
// using namespace std;
// struct Node
// {
//   int data;
//   struct Node *next;
// };
// struct Node *head;
// void printList()
// {
//   Node *temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->data << " ";
//     temp = temp->next;
//   }
//   cout << endl;
// }
// void insertNode(int data, int pos)
// {
//   Node *temp1 = new Node();
//   temp1->data = data;
//   if (pos == 1)
//   {
//     temp1->next = head;
//     head = temp1;
//     return;
//   }
//   Node *temp2 = head;
//   for (int i = 0; i < pos - 2; i++)
//   {
//     temp2 = temp2->next;
//   }
//   temp1->next = temp2->next;
//   temp2->next = temp1;
// }
// void deleteNode(int pos)
// {
//   Node *temp1 = head;
//   if (pos == 1)
//   {
//     head = temp1->next;
//     delete temp1;
//     return;
//   }
//   for (int i = 0; i < pos - 2; i++)
//   {
//     temp1 = temp1->next;
//   }
//   Node *temp2 = temp1->next;
//   temp1->next = temp2->next;
//   delete temp2;
// }
// void reverseList()
// {
//   Node *prev = NULL, *current = head, *next;

//   while (current != NULL)
//   {
//     next = current->next;
//     current->next = prev;
//     prev = current;
//     current = next;
//   }
//   head = prev;
// }
// int main()
// {
//   head = NULL;
//   for (int i = 1; i < 6; i++)
//   {
//     insertNode(i, i);
//   }
//   printList();
//   deleteNode(3);
//   printList();
//   reverseList();
//   printList();
//   return 0;
// }

// * linked list practice 2
#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
};
struct Node *head;
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
void insertNode(int data, int pos)
{
  Node *temp1 = new Node();
  temp1->data = data;
  if (pos == 1)
  {
    temp1->next = NULL;
    head = temp1;
    return;
  }

  Node *temp2 = head;
  for (int i = 0; i < pos - 2; i++)
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}
void deleteNode(int pos)
{
  Node *temp1 = head;
  if (pos == 1)
  {
    head = temp1->next;
    delete temp1;
    return;
  }
  for (int i = 0; i < pos - 2; i++)
  {
    temp1 = temp1->next;
  }
  Node *temp2 = temp1->next;
  temp1->next = temp2->next;
  delete temp2;
}
void reverseList()
{
  Node *prevNode, *currentNode, *nextNode;

  prevNode = NULL;
  currentNode = head;
  while (currentNode != NULL)
  {
    nextNode = currentNode->next;
    currentNode->next = prevNode;
    prevNode = currentNode;
    currentNode = nextNode;
  }
  head = prevNode;
}
int main()
{
  head = NULL;
  int i = 1;
  while (i <= 5)
  {
    insertNode(i, i);
    i += 1;
  }
  printList();
  deleteNode(2);
  printList();
  reverseList();
  printList();
  return 0;
}
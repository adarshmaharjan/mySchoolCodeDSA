//// *inserting at the beginning of linked list

// #include <iostream>
// using namespace std;
// struct Node
// {
//   int data;
//   struct Node *next;
// };

// void printList(Node *head)
// {
//   Node *temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->data << " ";
//     temp = temp->next;
//   }
//   cout << endl;
// }
// Node *insert(int data, Node *head)
// {
//   Node *temp = new Node();
//   temp->data = data;
//   temp->next = head;
//   head = temp;
//   printList(head);
//   return head;
// }

// int main()
// {
//   struct Node *head;
//   head = NULL;
//   head = insert(1, head);
//   head = insert(2, head);
//   head = insert(3, head);
//   head = insert(4, head);
//   return 0;
// }

//// * inserting at any point in the linked list

// #include <iostream>
// using namespace std;

// struct Node
// {
//   int data;
//   struct Node *next;
// };
// void printList(Node *head)
// {
//   Node *temp = head;
//   while (temp != NULL)
//   {
//     cout << temp->data << " ";
//     temp = (*temp).next;
//   }
//   cout << endl;
// }
// Node *insert(int data, int listPos, Node *head)
// {
//   Node *temp1 = new Node();
//   temp1->data = data;
//   temp1->next = NULL;
//   if (listPos == 1)
//   {
//     temp1->next = head;
//     head = temp1;
//     return head;
//   }
//   Node *temp2 = head;
//   for (int i = 0; i < listPos - 2; i++)
//   {
//     temp2 = temp2->next;
//   }
//   temp1->next = temp2->next;
//   temp2->next = temp1;
//   return head;
// }
// int main()
// {
//   Node *head = NULL;
//   head = insert(1, 1, head);
//   head = insert(2, 2, head);
//   head = insert(3, 3, head);
//   head = insert(4, 4, head);
//   printList(head);
//   return 0;
// }

//// * deleting node from the linked list

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
// void insertNode(int data, int n)
// {
//   Node *temp1 = new Node();
//   temp1->data = data;
//   temp1->next = NULL;
//   if (n == 1)
//   {
//     temp1->next = head;
//     head = temp1;
//     return;
//   }
//   Node *temp2 = head;
//   for (int i = 0; i < n - 2; i++)
//   {
//     temp2 = temp2->next;
//   }
//   temp1->next = temp2->next;
//   temp2->next = temp1;
// }
// void deleteNode(int n)
// {
//   Node *temp1 = head;
//   if (n == 1)
//   {
//     head = temp1->next;
//     delete temp1;
//     return;
//   }
//   for (int i = 0; i < n - 2; i++)
//   {
//     temp1 = temp1->next;
//   }
//   struct Node *temp2 = temp1->next;
//   temp1->next = temp2->next;
//   delete temp2;
// }
// int main()
// {
//   head = NULL;
//   insertNode(1, 1);
//   insertNode(2, 2);
//   insertNode(3, 3);
//   insertNode(4, 4);
//   printList();
//   deleteNode(3);
//   printList();
//   return 0;
// }

//// *reversing a linked list

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
//   for (i = 0; i < pos - 2; i++)
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
//   Node *prev, *current, *next;
//   current = head;
//   prev = NULL;
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

//// *inserting into array
// #include <iostream>
// using namespace std;
// void printArray(int arr[], int arrayItemSize)
// {
//   for (int i = 0; i < arrayItemSize; i++)
//   {
//     cout << arr[i] << " ";
//     if (i == arrayItemSize - 1)
//     {
//       cout << endl;
//     }
//   }
// }
// int *insertIntoArr(int data, int pos, int arr[], int arrayItemSize)
// {
//   arrayItemSize += 1;
//   for (int i = arrayItemSize; i >= pos; i--)
//   {
//     arr[i] = arr[i - 1];
//   }
//   arr[pos - 1] = data;
//   printArray(arr, arrayItemSize);
//   return arr;
// }
// int main()
// {
//   int arr[100] = {};
//   int arrayItemSize = 10;

//   for (int i = 0; i < arrayItemSize; i++)
//   {
//     arr[i] = i;
//   }
//   printArray(arr, arrayItemSize);
//   insertIntoArr(12, 3, arr, arrayItemSize);
//   return 0;
// }

//// * linked list practice
// #include <iostream>
// using namespace std;

// struct Node
// {
//   int data;
//   struct Node *next;
// };
// void printList(Node *head)
// {
//   Node *temp = head;
//   if (temp == NULL)
//   {
//     cout << endl;
//     return;
//   }
//   cout << (*temp).data << " ";
//   printList(temp->next);
// }
// void reversePrintList(Node *head)
// {
//   if (head == NULL)
//   {
//     return;
//   }
//   reversePrintList((*head).next);
//   cout << head->data << " ";
// }
// Node *insertNodeAtBeginning(Node *head, int data)
// {
//   Node *temp = new Node();
//   (*temp).data = data;
//   (*temp).next = head;
//   head = temp;
//   return head;
// }
// Node *insertNodeAtAnyPos(Node *head, int data, int pos)
// {
//   Node *temp1 = new Node();
//   temp1->data = data;

//   if (pos == 1)
//   {
//     head = temp1->next;
//     delete temp1;
//     return head;
//   }
//   Node *temp2 = head;
//   for (int i = 0; i < pos - 2; i++)
//   {
//     temp2 = temp2->next;
//   }
//   temp1->next = temp2->next;
//   temp2->next = temp1;
//   return head;
// }
// Node *deleteNode(Node *head, int pos)
// {
//   Node *temp1 = head;
//   if (pos == 1)
//   {
//     temp1 = temp1->next;
//     head = temp1;
//     return head;
//   }
//   for (int i = 0; i < pos - 2; i++)
//   {
//     temp1 = temp1->next;
//   }
//   Node *temp2 = temp1->next;
//   temp1->next = temp2->next;
//   delete temp2;
//   return head;
// }
// Node *reverseList(Node *head)
// {
//   Node *prev, *current, *next;
//   prev = NULL;
//   current = head;
//   while (current != NULL)
//   {
//     next = current->next;
//     current->next = prev;
//     prev = current;
//     current = next;
//   }
//   head = prev;
//   return head;
// }
//// struct Node *globalHead;
//// void reverseListRecursively(Node *p)
//// {
//// if (p->next = NULL)
////   {
////     globalHead = p;
////     return;
////   }
////   reverseListRecursively(p->next);
////   Node *q = p->next;
////   q->next = p;
////   p->next = NULL;
//// }
// int main()
// {
//   Node *head = NULL;
////   globalHead = head;
//   // for (int i = 1; i < i < 5; i++)
//   // {
//   //   head = insertNodeAtBeginning(head, i);
//   // }
//   head = insertNodeAtBeginning(head, 1);
//   head = insertNodeAtBeginning(head, 2);
//   head = insertNodeAtBeginning(head, 3);
//   head = insertNodeAtBeginning(head, 4);
//   head = insertNodeAtBeginning(head, 5);
//   head = insertNodeAtBeginning(head, 6);
//   // !print values
//   printList(head);
//   reversePrintList(head);
//   cout << endl;
//   // !print values
//   head = insertNodeAtAnyPos(head, 14, 3);
//   head = insertNodeAtAnyPos(head, 13, 4);
//   // !print values
//   printList(head);
//   reversePrintList(head);
//   cout << endl;
//   // !print values
//   head = deleteNode(head, 6);
//   head = deleteNode(head, 5);
//   // !print values
//   printList(head);
//   reversePrintList(head);
//   cout << endl;
//   // !print values
//   head = reverseList(head);
//   // !print values
//   printList(head);
//   reversePrintList(head);
//   cout << endl;
//   // !print values
//   // globalHead = head;
//   // reverseListRecursively(globalHead);
//   // head = globalHead;
//   // // !print values
//   // printList(head);
//   // reversePrintList(head);
//   // cout << endl;
//   // // !print values

//   return 0;
// }
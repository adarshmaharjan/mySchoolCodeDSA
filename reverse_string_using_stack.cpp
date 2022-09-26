#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

void reverseString(char *characters, int stringLength)
{
  stack<char> characterStack;
  for (int i = 0; i < stringLength; i++)
  {
    characterStack.push(characters[i]);
  }

  for (int i = 0; i < stringLength; i++)
  {
    characters[i] = characterStack.top();
    characterStack.pop();
  }
}
void printChar(char *characters)
{
  for (int i = 0; i < strlen(characters); i++)
  {
    cout << *(characters + i) << endl;
  }
}
int main()
{
  char characters[51];
  cout << "Enter a string" << endl;
  cin.getline(characters, sizeof characters);
  printChar(characters);
  reverseString(characters, strlen(characters));
  cout << characters << endl;
  return 0;
}
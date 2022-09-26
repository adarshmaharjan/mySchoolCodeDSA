#include <iostream>
using namespace std;

string reverseString(string str)
{
  int i = 0;
  int j = str.length() - 1;
  char temp;
  while (i < j)
  {
    // temp = str[i];
    // str[i] = str[j];
    // str[j] = temp;
    swap(str[i], str[j]);
    i++;
    j--;
  }
  return str;
}
int main()
{
  string myString = "12345";
  string res = reverseString(myString);
  cout << res << endl;
}
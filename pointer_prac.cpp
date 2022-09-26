#include <iostream>
using namespace std;

void findMinAndMax(int arr[], int *min, int *max)
{
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] < *min)
    {
      *min = arr[i];
    }
    if (arr[i] > *max)
    {
      *max = arr[i];
    }
  }
}
int main()
{

  int arr[5] = {1, 2, 3, 4, 5};
  int min = arr[0];
  int max = arr[0];
  findMinAndMax(arr, &min, &max);
  cout << min << endl;
  cout << max << endl;
  return 0;
}
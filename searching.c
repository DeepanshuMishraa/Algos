#include <stdio.h>

int LinearSearch(int n, int arr[n], int val)
{

  // if size not given
  // int n = sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == val)
    {
      return i;
    }
  }

  return -1;
}

int BinarySearch(int n, int arr[n], int item)
{
  int start = 0;
  int end = n - 1;
  int mid;

  while (start <= end)
  {
    mid = (start + end) / 2;
    if (arr[mid] == item)
    {
      return mid;
    }
    else if (arr[mid] < item)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  return -1;
}

int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int val;
  printf("Enter the value to search: ");
  scanf("%d", &val);

  // int index = LinearSearch(n, arr, val);
  int index = BinarySearch(n, arr, val);
  if (index)
  {
    printf("Element found at index: %d\n", index);
  }
  else
  {
    printf("Element not found\n");
  }
}

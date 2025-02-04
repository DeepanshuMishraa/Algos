#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

// bubble sort -> complexity O(n^2)

void BubbleSort(int n, int arr[n])
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

// Selection Sort -> complexity O(n^2)

void selectionSort(int n, int arr[n])
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    swap(&arr[min], &arr[i]);
  }
}

// Insertion Sort => complexity O(n^2)

void InsertionSort(int n, int arr[n])
{
  for (int i = 1; i < n; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

// Merge Sort -> complexity O(nlogn)

void MergeSort(int n, int arr[n])
{
  if (n < 2)
  {
    return;
  }
  int mid = n / 2;
  int left[mid];
  int right[n - mid];
  for (int i = 0; i < mid; i++)
  {
    left[i] = arr[i];
  }
  for (int i = mid; i < n; i++)
  {
    right[i - mid] = arr[i];
  }
  MergeSort(mid, left);
  MergeSort(n - mid, right);
  Merge(n, left, mid, right, n - mid, arr);
}

// qiuck sort -> complexity O(nlogn)

void QuickSort(int n, int arr[n], int low, int high)
{
  if (low < high)
  {
    int pi = partition(n, arr, low, high);
    QuickSort(n, arr, low, pi - 1);
    QuickSort(n, arr, pi + 1, high);
  }
}

int partition(int n, int arr[n], int low, int high)
{
  int pivot = arr[high];
  int i = low - 1;
  for (int j = low; j < high; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return i + 1;
}

int main()
{
  int n = 5;
  int arr[5] = {3, 1, 5, 2, 4};
  BubbleSort(n, arr);
  printf("Sorted array is: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}

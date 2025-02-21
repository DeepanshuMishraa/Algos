#include <stdio.h>

int LinearSearch(int n, int arr[n], int target){
  for(int i = 0; i<n; i++){
    if(arr[i] == target){
      return i;
    }
  }
  
  return -1;
}


//considering the array is sorted 
int binary_search(int n, int arr[n],int target){
  int start = 0;
  int end = n-1;
  
  while(start <= end){
    int mid = (start + (end-start)/2);
    if(arr[mid] == target){
      return mid;
    }else if(arr[mid]>target){
      end = mid - 1;
    }else{
      start = mid+1;
    }
  }
  
  return -1;
}


int main(){
  int n, target;
  printf("Enter the no of elements: ");
  scanf("%d",&n);
  
  int arr[n];
  
  printf("\n Enter the elements in the array: ");
  for(int i=0; i<n;i++){
    scanf("%d",&arr[i]);
  };
  
  printf("\n Enter the Target element to search:");
  scanf("%d",&target);
  
  int res = LinearSearch(n,arr,target);
  
  if(res == -1){
    printf("Element not found \n");
  }
  printf("\n Element found at: %d",res);
  
}
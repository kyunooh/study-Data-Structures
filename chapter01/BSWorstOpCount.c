#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
  int first = 0;
  int last = len -1;
  int opCount = 0;

  while(first < last)
  {
    int index = (first + last) / 2;
    int mid = ar[index];
    if(ar[index] == target)
    {
      return mid;
    }
    else
    {
      if(target < mid)
      {
        last = index - 1;
      }
      else
      {
        first = index + 1;
      }
      opCount++;
    }
  }
  printf("Worst op Count: %d", opCount);
  return -1;  
}


int main()
{
  int arr1[500] = {0,};
  int arr2[5000] = {0,};
  int arr3[50000] = {0,};
  int idx;

  idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 7);
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스: %d \n", idx);

  idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 4);
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스> %d \n", idx);

  idx = BSearch(arr3, sizeof(arr3)/sizeof(int), 7);
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스: %d \n", idx);
  
  return 0;
}

#include <stdio.h>

int LSearch(int ar[], int len, int target)
{
  int i;
  for(i=0; i<len; i++)
    {
      if(ar[i] == target)
        return i; // found, return index value
    }
  return -1; // return not found value
}

int main(void)
{
  int arr[] = {3, 5, 2, 4, 9};
  int idx;

  idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
  if(idx == -1)
    printf("not found \n");
  else
    printf("index saved in: %d \n", idx);

  idx = LSearch(arr, sizeof(arr)/sizeof(int), 7);
  if(idx == -1)
    printf("not found \n");
  else
    printf("index saved in: %d \n", idx);

  return 0;
}
  

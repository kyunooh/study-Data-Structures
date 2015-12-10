#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
  if(num == 1)
    {
      printf("원반!을 %c에서 %c로 이동 \n", from, to);
    }
  else
  {
  HanoiTowerMove(num-1, from, to, by);
  printf("원반 %d을(를) %c에서 %c로 이동 \n", num, from, to);
  HanoiTowerMove(num-1, by, from, to);
  }
}


int main(void)
{
HanoiTowerMove(3, 'A', 'B', 'C');
return 0;
}

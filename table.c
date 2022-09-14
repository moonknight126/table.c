#include <stdio.h>

int table(int d)
{
  for (int i = 1; i < 11; i++)
  {
    printf("%d * %d = %d\n", d, i, d * i);
  }
  return 0;
  
}
int main()
{
  
  int a, z;
start:
  printf("\n\n\nenter 1 for table \n\n enter 9 for quit \n\n\n ");

  scanf("%d", &z);

  switch (z)
  {
  case 1:
    printf("enter here no.\n\n");
    scanf("%d", &a);

    printf("\n\nthis is the tables of  %d. \n\n", a);

    printf("%d", table(a));
    goto start;
    break;

  case 9:
    printf("your program in quiting  \n\n");
    break;

  default:
    break;
  }
  
}

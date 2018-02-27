#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
 int i,j,x;
 time_t lt;

void clrscr();
 printf("\nPlease input a number:(1....9999)==> ");
 scanf("%d",&x);
 printf("\n");
 lt=time(NULL);
 for(i=0;i<3;i++)
 {
  for(j=0;j<10;j++)
  {
   printf(" %d",(rand()*lt%9+131)*x*971/7%10);
   }
  printf("  ");
  }
 printf("\n");

return(0);
}

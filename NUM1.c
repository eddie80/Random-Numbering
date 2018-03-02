//This is based on the randow number generator I made in 2002 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 int i,j,k;
 int long x;
 time_t lt;

system("clear");

 printf("\nPlease input a number:(100....9999)==> "); //To enter a number (range 100 ~ 9999) for generating the random numbers
  scanf("%ld",&x);
// printf("\n"); 
  lt=time(NULL);
if ( x < 100 | x > 9999) //To limited the range of the input value from 100 to 9999
{
 printf ("This is an invalid value\n\n"); //To show the value is invalide when it's out of the range
 }
else
{ 
 printf("\n");
for (k=0;k<30;k++) //To generate 30 rows of random numbers
{
  for(i=0;i<3;i++) //To generate 3 sets of random numbers in one row
  {
   for(j=0;j<10;j++) //To generate 10 randow numbers in each set
   {
    printf(" %ld",(rand()*lt%9+131)*x*971/7%10);
    }
   printf("  ");
   }
  printf("\n");
 }
 printf("\n");
return 0;
 }  
}

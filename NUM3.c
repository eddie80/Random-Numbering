//This is based on the randow number generator I made in 2002 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void randsub()
{
 srand(time(NULL));
 int i,j,k;
 for (k=0;k<30;k++) //To generate 30 rows of random numbers
 {
  for(i=0;i<3;i++) //To generate 3 sets of random numbers in one row
  {
   for(j=0;j<10;j++) //To generate 10 randow numbers in each set
   {
    printf(" %d",rand()%10); //To printf the single random number
    }
   printf("  ");
   }
   printf("\n");
  }
}

int main()
{
 system("clear"); //To clear the screen
 printf("\n");
 randsub(); //To printf the random number set
 printf("\n");
 
 printf("\n");
 randsub(); //To printf the random number set
 printf("\n");

 printf("\n");
 randsub(); //To printf the random number set
 printf("\n");

 return 0;
}


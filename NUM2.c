//This is based on the randow number generator I made in 2002 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void randsub(int long x)
{
 srand(time(NULL));
 int i,j,k;
 int r=rand();

 for (k=0;k<30;k++) //To generate 30 rows of random numbers
 {
  for(i=0;i<3;i++) //To generate 3 sets of random numbers in one row
  {
   for(j=0;j<10;j++) //To generate 10 randow numbers in each set
   {
    printf(" %ld",(rand()*r%9+131)*x*971/7%10);
    }
   printf("  ");
   }
   printf("\n");
  }
}


int main()
{
 int long x;
 system("clear");

 printf("\nPlease input a number:(1....9)==> "); //To enter a number (range 1 ~ 9) for generating the random numbers
 scanf("%ld", &x);
 if ( x < 1 | x > 9) //To limited the range of the input value from 1 to 9
 {
  printf ("\n <<Warning>> This is an invalid value\n\n"); //To show the value is invalide when it's out of the range
  }
 else
 { 
  printf("\n");
  randsub(x);
  printf("\n");
  }
 return 0;
}


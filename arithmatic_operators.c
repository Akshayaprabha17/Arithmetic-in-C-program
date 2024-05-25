//arithmatic operators +,-,/(quotient),*(multiplication),%(modulo)
#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,sum=0,sub=0,mul=0,div=0,mod=0;     //values are declare while output
    printf("\t ADDING OF TWO NUMBER");
    printf("\n=======================================");
    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    //printf("\n Enter the value of a and b");
    //scanf("%d%d",&a,&b);
    sum =a+b;
    printf("a+b=%d",sum);
    /* alternative way
    int a=5,b=10,c;
    printf("ADDING OF TWO NUMBERS");
    c=a+b;
    printf("\nthe sum of a and b=%d",c);
    */
   printf("\n\nSUBRACTION OF TWO NUMBERS");
   printf("\n=======================================");
   printf("\nEnter the value of a and b:");
   scanf("%d%d",&a,&b);
   sub=a-b;
   printf("\na-b=%d",sub);
   /*
   alternative way
   int a,b,c;
   a=6,b=8;
   printf("\nSUBRACTION OF a AND b,STORING IN c");
   printf("a-b=%d",c=a-b);
   */
  printf("\n\nMULTIPLICATION OF TWO NUMBERS");
  printf("\n=======================================");
  printf("\nEnter the value of a and b:");
  scanf("%d%d",&a,&b);
  mul=a*b;
  printf("\na*b=%d",mul);
  /*
  //using float
  float a,b,mul=0;
  printf("\nEnter the values of a and b:\n");
  scanf("%f%f",&a,&b);
  mul=a*b;
  printf("\na*b=%.2f",mul); //after decimal 2 values are shown
  */
 printf("\nDIVISION OF TWO NUMBERS");
 printf("\n=======================================");
 printf("\nEnter the values of a and b:\n");
 scanf("%d%d",&a,&b);
 div=a/b;
 printf("\na/b=%d",div);
 
printf("\nMODULO OF TWO NUMBERS");
printf("\n=======================================");
printf("\nEnter the value of a and b:\n");
scanf("%d%d",&a,&b);
mod=a%b;
printf("\na%b=%d",mod);

/*
int a=7,b=8;
printf("\na+b=%d",a+b);
printf("\na-b=%d",a-b);
printf("\na*b=%d",a*b);
printf("\na/b=%d",a/b);
printf("\na%b=%d",a%b);
*/
}

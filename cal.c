//program to stimulate a simple calculator

 #include<stdio.h>

 int main()
{
 int a, b;
 char op;

 printf("\nEnter the operator: ");
 scanf("%c", &op);
printf("\nEnter values of a and b: ");
scanf("%d%d" , &a, &b);

if(op == '+')
  printf("\nSum = %d", a + b);

  else if (op == '-')
    printf("\nDifference = %d", a - b);

  else if (op == '*')
    printf("\nProduct = %d", a * b);

  else if (op == '/')
  {
    if(b==0)
    {
      printf("\nError! denominator is 0");
      return 0;
    }
    else
     printf("\nquotient = %.3f", (float)a/b"):
  }
  else if (op == '%')
  {
    if (b==0)
    {
      printf("\nError! denominator is 0");
      return 0;
      
               
  

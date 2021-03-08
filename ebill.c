//program to calculate the electricity bill 

#include<stdio.h>

int main()
{
  float units, rate, tot;
  char name[30];

  printf("\nEnter consumer name: ");
  gets(name);
  printf("\nEnter units consumed: ");
  scanf("%f", &units);

  if(units < 0)
  {
    printf("\nInvalid units!");
    return 0;
  }

  if(units <= 200)
    rate = 0.8 * units;

  else if ((units > 200) && (units <= 300))
    rate = 0.8 * 200 + 0.9 * (units - 200);

  else if (units > 300)
    rate = 0.8 * 200 + 0.9 * 100 + 1.0 * (units - 300);

  tot = rate + 100;

  if(tot > 400)
    tot = 0.15 * tot + tot;
  
  printf("\nName: %s", name);
  printf("\nUnits: %.0f", units);
  printf("\nBill Amt: Rs. %.2f",tot);
}
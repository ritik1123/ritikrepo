#include<stdio.h>
int main(){
int SimpleIntrest,principle,rate,year;
SimpleIntrest=(principle*rate*year)/100;
printf("principle is ");
scanf("%d",&principle);
printf("rate is ");
scanf("%d",&rate);
printf("year is ");
scanf("%d",&year);
printf("Simple interest is%d",(principle*rate*year)/100);
return 0;
}

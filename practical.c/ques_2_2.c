// A Bigbazaar cashier has currency notes of denominations 10,50 and 100. If the amount 
//to be withdrawn is input through the keyboard in hundreds, find the total number of 
//currency notes of each denomination the cashier will have to give to the withdrawer.
#include <stdio.h>

int main()
{
int n,x,y;
printf("Enter cash: ");
scanf("%d",&n);
x=n/100;
printf("Number of 100 notes is %d\n",x);
y=(n%100)/10;
if(y>=5){
    printf("Number of 50 notes is 1 and 10 notes is %d\n",y-5);
}
 if(y<5){
    printf("Number of 50 notes is 0 and 10 notes is %d",y);
}

    return 0;
}
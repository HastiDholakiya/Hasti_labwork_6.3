#include<stdio.h>
#include<conio.h>

void main(){
int n,i;
int sum=0;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);

for(i=0;i<=n;i++){
   sum=sum+i;
}
   printf("sum of all number: %d",sum);
getch();
}

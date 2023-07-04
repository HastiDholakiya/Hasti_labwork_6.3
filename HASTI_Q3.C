#include<stdio.h>
#include<conio.h>

void main(){
int n,i;
int ans;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);

for(i=1;i<=10;i++){
    ans=n*i;
   printf("%d * %d = %d\n",n,i,ans);
}
getch();
}
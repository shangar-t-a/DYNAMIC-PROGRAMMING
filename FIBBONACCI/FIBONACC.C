#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i,*p;
  clrscr();
  scanf("%d",&n);
  *p = 0;
  *(p+1) = 1;
  for(i=2;i<n;i++)
    *(p+i) = *(p+i-1) + *(p+i-2);
  printf("fib(%d) = %d",n,*(p+n-1));
  getch();
  return 0;
}

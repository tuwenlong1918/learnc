#include<stdio.h>
int main()
{
	int p = rev(6);
	printf("%d",p);
	getchar();
 } 

 int rev(int iNumber){
    int p=1;
	int i=1;
    while (i<= iNumber)
    {
    	p=p*i;
    	i++;
	}
	return p;
 }

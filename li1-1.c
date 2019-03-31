#include<stdio.h>
int main()
{
	int i,j,k,m;
	for(i=1;i<6;i++){
		for(j=1;j<6;j++){
			for(k=1;k<6;k++){
				for(m=1;m<6;m++){
					if(i!=j&&i!=k&&i!=m&&j!=k&&j!=m&&k!=m){
						printf("%d,%d,%d,%d\n",i,j,k,m);
					}
				}
				}
			}
		}
	}
 

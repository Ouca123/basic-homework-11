#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
	int x,y,z;
	int bigger,smaller;
	int max,mid,min;
	printf("請輸入整數:");
	scanf("%d",&x);
    printf("請輸入整數:");
	scanf("%d",&y);	
	printf("請輸入整數:");
	scanf("%d",&z);
	if(x>y)
	 bigger=x,smaller=y;
	else
	 bigger=y,smaller=x;
	if(bigger>z)
	{
		max=bigger;
		if(z>smaller)
			mid=z,min=smaller;
		else
		    mid=smaller,min=z;
	} 
	else
	 max=z,mid=bigger,min=smaller;
	printf("由大到小排列%d %d %d",max,mid,min);
	system("pause");
	return 0;
}

#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
	int x,y,z;
	int bigger,smaller;
	int max,mid,min;
	printf("�п�J���:");
	scanf("%d",&x);
    printf("�п�J���:");
	scanf("%d",&y);	
	printf("�п�J���:");
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
	printf("�Ѥj��p�ƦC%d %d %d",max,mid,min);
	system("pause");
	return 0;
}

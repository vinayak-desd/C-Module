#include <stdio.h>

int main(void)
{
	int pt1,pt2;
	printf("Enter the Cartesian Points : ");
	scanf("%d%d",&pt1,&pt2);

	if(pt1 ==0 && pt2 == 0)
		printf("The points %d , %d are lies on Origin\n",pt1,pt2);
	else if(pt1 >= 0 && pt2 >= 0)
		printf("The points %d , %d are lies in Ist Quadrant and on Positive x-axis & Positive y-axis \n",pt1,pt2);
	else if(pt1 >= 0 && pt2 <= 0)
		printf("The points %d , %d are lies in IInd Quadrant and on Positive x-axis & Negative y-axis \n",pt1,pt2);
	else if(pt1 <= 0 && pt2 >= 0)
		printf("The points %d , %d are lies in IIIrd Quadrant and on Negative x-axis & Positive y-axis \n",pt1,pt2);
	else
		printf("The points %d , %d are lies in IVth Quadrant and on Negative x-axis & Negative y-axis \n",pt1,pt2);
		
}

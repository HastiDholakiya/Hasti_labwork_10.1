#include<stdio.h>

    udf(int a)
    {
    	int cube=a*a*a;
    	
    	printf("Cube is: %d",cube);
	}
	void main()
	{
		int a;
		
		printf("Enter any number: ");
		scanf("%d",&a);
		
		udf(a);
	}

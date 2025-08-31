#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks(0-100):");
	scanf("%d",&marks);
	
	switch(marks/10)
	{
		case 10:
		case 9:
		printf("grade: a");
		break;
		
		case 8:
		printf("grade: b");
		break;
		
		case 7:
		printf("grade: c");
		break;
		
		case 6:
			printf("grade: d");
			break;
		
		case 5:
			printf("grade: e");
			break;
			
		default:
			printf("grade: f");
			break;	
	}
return 0;
}
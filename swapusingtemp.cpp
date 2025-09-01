#include <stdio.h>
int main()
 {
    int a, b,temp;
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
      scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

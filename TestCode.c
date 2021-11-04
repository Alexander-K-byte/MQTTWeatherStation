#include <stdio.h>

int main()
{
    double temp = 0;
    int i = 0;
    double total = 0;
    double avg = 0;
    
    do {
        printf("Enter measurement:");
        scanf("%lf", &temp);
        ++i;
        total += temp;
    }
    while(temp != -128); {
        i = i - 1;
        total = total + 128;
        avg = total / i;
        printf("\n");
        printf ("Average of the list values: %.2lf \n", avg);
		
		return 0;
		
    }
	
}
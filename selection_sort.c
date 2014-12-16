#include<stdio.h>
#include <string.h>

#define swap(a, b) {\
    if(a != b) {\
    a = a+b; \
    b = a-b;\
    a = a-b;\
    }\
}

int insertion_sort(int a[], int n)
{
    int i=0, j=0, min=0;
    for(i=0; i<n-1; i++)
    {
	min = i;
	for(j=i+1; j<n; j++)
	{
	    if(a[min] > a[j])
		min = j;
	}
	printf("a[%d]=%d    a[%d] = %d\n", i, a[i], min, a[min]);

	swap(a[min], a[i]);
    }
    return 0;
}

int 
main()
{
    int i, a[100], n;
    
    printf("# of items : ");
    scanf("%d", &n);

    printf("Items : ");
    for(i=0; i<n; i++)
	scanf("%d", &a[i]);

    insertion_sort(a, n);

    printf("SORTED : ");
    for(i=0; i<n; i++)
	printf("%d   ", a[i]);
    printf("\n----- END -------\n");

    return 0;
}

#include <stdio.h>


int
bubble_sort(int a[], int n)
{
    int i=0, j=0;
    int flag=0, count=0;

    for(i=0; i<n-1; i++)
    {
	for(j=0; j< (n-i-1); j++)
	{
	    count++;
	    if(a[j] > a[j+1])
	    {
		printf("Swapping %d %d\n", a[j], a[j+1]);
		a[j] = a[j] + a[j+1];
		a[j+1] = a[j] - a[j+1];
		a[j] = a[j] - a[j+1];
		flag = 1;
	    }
	}
	if(flag == 0)
	    break;
    }

    printf("Count = %d\n", count);
    return 0;
}


int
main()
{
    int a[100], n,i;

    printf("# of items : ");
    scanf("%d", &n);

    printf("Items : ");
    for(i=0; i<n; i++)
	scanf("%d", &a[i]);

    bubble_sort(a, n);

    printf("SORTED : ");
    for(i=0; i<n; i++)
	printf("%d   ", a[i]);

    printf("\n ---- END ----\n");
    return 0;
}

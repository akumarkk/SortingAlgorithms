#include <stdio.h>

int
merge_sort(int a[], int low, int high)
{
    int mid=0;
    printf("l=%d h=%d\n", low, high);

    if(low < high)
    {
	mid = (low + high) / 2;
	merge_sort(a, low, mid);
	merge_sort(a, mid+1, high);
	merge(a, low, mid, high);
    }
    return 0;
}


int
merge(int *a, int low, int mid, int high)
{
    int array[100];
    int i=0, k=0, j=0;

    for(int i=low; i<=high; i++)
	printf("%d   ", a[i]);
    printf("\n--- --\n");

    i=low; 
    j= mid+1;
    k = low;

    while((i<=mid) && j<=high)
    {
	printf("while loop\n");
	if(a[i] < a[j])
	    array[k++] = a[i++];
	else
	    array[k++] = a[j++];
    }

    /*
    while(i<= mid)
	array[k++] = a[i++];

    while(j<= high)
	array[k++] = a[j++];
    */

    if(i > mid)
    {
	for(int x=j; x<=high; x++)
	{
	    printf("Low: k=%d a[%d]=%d\n", k, x, a[x]);
	    array[k++] = a[x];
	}
    }
    else
    {
	for(int x=i; x<=mid; x++)
	{
	    printf("Low: k=%d a[%d]=%d\n", k, x, a[x]);
	    array[k++] = a[x];
	}
    }


    for(i=low; i<=high; i++)
	a[i] = array[i];

    for(int i=low; i<=high; i++)
	        printf("%d   ", a[i]);
    printf("\n--- END ---\n");
    return 0;
}

int
main()
{
    int n, i, a[100];
        printf("# of items : ");
    scanf("%d", &n);

    printf("Items : ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    merge_sort(a, 0, n-1);

    printf("\n\nSORTED : ");
    for(i=0; i<n; i++)
        printf("%d   ", a[i]);
    printf("\n----- END -------\n");

    return 0;
}


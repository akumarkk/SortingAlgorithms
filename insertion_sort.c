#include <stdio.h>
#include <string.h>

int
swap(int *a, int *b)
{
    printf("swapped (%d, %d) ", *a, *b);
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
    printf(" --> (%d, %d)\n", *a, *b);
    return 0;
}

int
insertion_sort(int a[], int n)
{
    int i=0,j=0, tmp;
    for(i=1; i<n; i++)
    {
	tmp = a[i];
	for(j=i-1; j>=0; j--)
	{
	    if(a[j] > tmp)
		a[j+1] = a[j];
	    else
		break;
	}
	//printf("i=%d j=%d swapping (%d, %d) \n", i, j, a[j+1], tmp);
	a[j+1] = a[j+1] + tmp;
	tmp = a[j+1] - tmp;
	a[j+1] = a[j+1] - tmp;
    }
    return 0;
}


int
main()
{
    int a[100], n;
    printf("# of items : ");
    scanf("%d", &n);

    printf("Items : ");
    for(int i=0; i<n; i++)
	scanf("%d", &a[i]);

    insertion_sort(a, n);

    for(int i=0; i<n; i++)
	printf("%d  ", a[i]);

    printf("\n----- END ------\n");
    return 0;
}


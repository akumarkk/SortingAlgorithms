#include <stdio.h>

#define swap(a, b){\
    if(a != b) {\
	a = a+ b;\
	b = a - b;\
        a = a - b;\
    }\
}


int
partition(int *a, int low, int high)
{
    int i=0, j=0, pivot=low;

    i = low;
    j = high;
    pivot = low;

    while(i<j)
    {
	while(a[i] <= a[pivot])
	{
	    i++;
	}
	
	while(a[j] > a[pivot])
	{
	    j--;
	}

	if(i < j)
	    swap(a[i], a[j])
	else
	    swap(a[pivot], a[j]);
    }
    return j;

}

int key = 0;


int
quicksort(int *a, int low, int high)
{
    int j=0;
    if(low < high)
    {
	j = partition(a, low, high);
	printf("j = %d key=%d\n", j, key);

	if(j == key)
	{
	    printf("****** FOund at %d = %d******\n", j, a[j]);
	    return j;
	}
	else if(key < j)
	    quicksort(a, low, j-1);
	else
	    quicksort(a, j+1, high);
    }
}


int
main()
{
    int i, a[100], n;

    printf("# of items : ");
    scanf("%d", &n);

    printf("Key to be searched : ");
    scanf("%d", &key);


    printf("Items : ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\nKey found at [%d]\n", quicksort(a, 0, n-1));
    
    printf("SORTED : ");
    for(i=0; i<n; i++)
        printf("%d   ", a[i]);
    printf("\n----- END -------\n");

    return 0;
}


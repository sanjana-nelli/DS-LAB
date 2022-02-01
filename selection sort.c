#include<stdio.h>
int main()
{
    int arr[100], n, c1, c2, temp;
    printf("enter the no of elements\n");
    scanf("%d", &n);
    printf("enter the integers \n");
    for(c1 = 0; c1 < n; c1++)
    {
        scanf("%d", &arr[c1]);
    }
    for(c1=0;c1 < n;c1++)
    {
        for(c2 = c1+1; c2 < n; c2++)
        {
           if(arr[c1] > arr[c2])
           {
               temp = arr[c1];
               arr[c1] = arr[c2];
               arr[c2] = temp;
           }
        }
    }
    printf("sorted list in ascending order\n");
    for (c1 = 0; c1 < n; c1++)
    {
        printf("%d\n", arr[c1]);
    }
    return 0;
}
#output
enter the no of elements
3
enter the integers
21
10
19
sorted list in ascending order
10
19
21
#enter the no of elements
4
enter the integers
23
88
76
55
sorted list in ascending order
23
55
76
88
#enter the no of elements
5
enter the integers
23
76
90
66
56
sorted list in ascending order
23
56
66
76
90

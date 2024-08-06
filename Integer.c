#include<stdio.h>
int main()
{
    int a[100], i, n, temp, pass, comp;
    printf("Enter the range of Array: ");
    scanf("%d",&n);
    
    printf("\nEnter the elements of Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(pass=n-1; pass>0; pass--)
        for(comp=0; comp<pass; comp++)
        if(a[comp]>a[comp+1])
        {
            temp = a[comp];
            a[comp] = a[comp+1];
            a[comp+1] = temp;
        }
        
        printf("\nAfter Sorting: ");
        for(i=0; i<n; i++)
            printf("%d\t", a[i]);
    
    return 0;
}
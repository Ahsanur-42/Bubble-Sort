#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][10], temp[100];
    int i, n, pass, comp;
    printf("Enter the range of Array: ");
    scanf("%d",&n);
    
    printf("\nEnter the elements of Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    
    for(pass=n-1; pass>=0; pass--)
        for(comp=0; comp<pass; comp++)
        if(strcmp(a[comp] , a[comp+1])>0)
        {
            strcpy(temp, a[comp]);
            strcpy(a[comp], a[comp+1]);
            strcpy(a[comp+1], temp);
        }
        
        printf("\nAfter Sorting: ");
        for(i=0; i<n; i++)
            printf("%s\t", a[i]);
    
    return 0;
}
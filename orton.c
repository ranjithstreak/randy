#include <stdio.h>
void main()
{
    int a[100],i,n,j,t;
    printf("Enter the array number\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    printf("The Numbers are %d\n",a[i]);
    for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++){
    if(a[i]>a[j])
    {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }}
    for(i=1;i<=n;i++)
    printf("The sorted order is %d\n",a[i]);
    printf("The median element is %d", a[(n+1)/2]);
}

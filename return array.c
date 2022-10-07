#include<stdio.h>
int func(int a[],int n)
{
    if(n==1)
        return a[0];
    return min(a[n-1],func(a,n-1));
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    n=sizeof (arr)/sizeof(arr[0]);
    printf("%d",func(arr,n));

}

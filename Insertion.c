#include<stdio.h>
void main(){
    int a[10];
    int i;
    int n;
    printf("enter the size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the element");
        scanf("%d",&a[i]);
    }
    int j;
    int temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0)){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}

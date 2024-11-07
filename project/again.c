#include<stdio.h>
int main(){
    int n;
    printf("enter number of time: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d: sameer,saugat,rabin\n",i+1);
    }
    int*a=&n;
    printf("%p\n",a);
    printf("%d\n",*a);
    return 0;
}
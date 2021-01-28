#include<stdio.h>
void checkPrime(int n){
    if(n==0||n==1){
        printf("Number is not prime ..!");
        return;
    }
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            printf("Number is not prime ..!");
            return;
        }
    }
    printf("Number is Prime ");
    return;
}
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    checkPrime(n);
}
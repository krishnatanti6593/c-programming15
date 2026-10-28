#include<stdio.h>
int main(){
    int num,i,sum=0,temp;
    printf("enter the number");
    scanf("%d",&num);
     temp=num;
    while(num>0){
        i=num%10;
        sum=sum+i*i*i;
        num=num/10;
    }
    if(temp==sum){
        printf("%d is ARMSTRONG",temp);
    }
    else{
        printf(" NOT AN AMRSTRONG");
    }
    return 0;
}
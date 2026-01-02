#include <stdio.h>
int main(){
    int original_num;
    scanf("%d",&original_num);
    int copy=original_num;
    int sum=0;
    while(original_num>0){
        int a=original_num%10;
        int fact=1;   
        for(int b=a;b>=1;b--){
            fact=fact*b;
        }
        sum=sum+fact;
        original_num=original_num/10;
    }
    if(sum==copy){
        printf("This number is a strong number: %d",sum);
    } 
    else{
        printf("This number is not a strong number: %d",sum);
    }
    return 0;
}

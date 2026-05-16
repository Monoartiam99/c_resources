#include<stdio.h>
int main(){
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");    
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    int num,i;
    for(num = start; num <= end; num++){
        int isprime = 1;
        if(num <= 1){
            isprime = 0;
        } else {
            for(i = 2; i*i <= num; i++){
                if(num % i == 0){
                    isprime = 0;
                    break;
                }
            }
        }
        if(isprime){
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
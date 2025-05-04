// Program to checking for palindrome, armstrong number and perfect number

#include <stdio.h>
#include <cstdlib>
#include <math.h>

void isPalindrome(int* num); // Function to check if a number is a palindrome
void isArmstrong(int* num); // Function to check if a number is an armstrong number
void isPerfect(int* num); // Function to check if a number is a perfect number
int power(int base, int exp) ;

int main(){
    int* choice= (int*) malloc(sizeof(int));
    int* num= (int*) malloc(sizeof(int));
    while (true){
        printf("\nMenu:\n1. Check for palindrome number\n2. Check for armstrong number\n3. Check for perfect number\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", choice);
        if (*choice< 4 && *choice>0){
            printf("Enter number to check: ");
            scanf("%d", num);
            if (*choice==1) isPalindrome(num);
            if (*choice==2) isArmstrong(num);
            if (*choice==3) isPerfect(num);
        }
        else{
            if (*choice==4){
                printf("Exiting...\n"); 
                break;}
            else printf("Invalid option");
        }
    }
}

void isPalindrome(int* num){
    int* temp= (int*) malloc(sizeof(int));
    *temp= *num;
    int* reverse= (int*) malloc(sizeof(int));
    *reverse= 0;
    while (*temp){
        *reverse*= 10;
        if (*temp%10==0){break;}
        *reverse+= *temp%10;
        *temp/= 10;
    }
    if (*reverse == *num){
        printf("%d is a palindrome\n", *num);
    }
    else{
        printf("%d is not a palindrome\n", *num);
    }
    free(reverse);
    free(temp);
}

int power(int* base, int* exp) { // function to raise a number to the power of the given exponent
    int* result= (int*) malloc(sizeof(int));
    *result= 1;
    int* count= (int*) malloc(sizeof(int));
    *count= *exp;
    int* finalresult= (int*) malloc(sizeof(int));
    *result= 1;
    
    while (*count>0) {
        *result*= *base;
        (*count)--;
    }
    *finalresult= *result;
    free(result);
    free(count);
    return *finalresult;
}

void isArmstrong(int* num){
    int* temp= (int*) malloc(sizeof(int));
    *temp= *num;
    int* templsb= (int*) malloc(sizeof(int));
    int* count= (int*) malloc(sizeof(int));
    *count= 0;
    int* sum= (int*) malloc(sizeof(int));
    *sum= 0;
    while (*temp>0){
        (*count)++;
        *temp/= 10;
    }
    *temp= *num;
    while (*temp>0){
        *templsb= *temp%10;
        *sum+=(int)power(templsb, count);
        *temp/= 10;
    }
    if (*sum == *num){
        printf("%d is an armstrong number\n", *num);
    }
    else{
        printf("%d is not an armstrong number\n", *num);
    }
    free(temp);
    free(count);
    free(sum);
}

void isPerfect(int* num){
    int* sum= (int*) malloc(sizeof(int));
    *sum= 0;
    int* i= (int*) malloc(sizeof(int));
    for (*i=1; *i<=*num/2; (*i)++){
        if (*num%*i == 0){
            *sum+= *i;
        }
    }
    if (*sum == *num){
        printf("%d is a perfect number\n", *num);
    }
    else{
        printf("%d is not a perfect number\n", *num);
    }        
}

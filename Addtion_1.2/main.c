//
//  main.c
//  Addition_1.2
//
//  Created by michaelleong on 11/10/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    
    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("PLease enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    if(sum > 999) {
        printf("   %d %d %d\n", num1/100, ((num1%100)/10), num1%10);
        printf("+) %d %d %d\n", num2/100, (num2%100)/10, num2%10);
        printf("--------\n");
        printf(" %d %d %d %d\n", sum/1000, (sum%1000)/100, (sum%100)/10, sum%10);
    } else {
        printf("   %d %d %d\n", num1/100, ((num1%100)/10), num1%10);
        printf("+) %d %d %d\n", num2/100, (num2%100)/10, num2%10);
        printf("--------\n");
        printf("   %d %d %d\n", sum/100, (sum%100)/10, sum%10);
    }
    
    
    return 0;
}

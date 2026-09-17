#include <stdio.h>

int main()
{
    int variable_a = 9;
    int variable_b = 5;
    int variable_x = 8;
    int variable_y = 8;
    int result_1 = variable_a % variable_b;
    int result_2 = variable_x % variable_y; 
    int result_3 = result_1 + result_2;
    printf("result of %d mod %d is %d\n", variable_a, variable_b, result_1);
    printf("result of %d mod %d is %d\n", variable_x, variable_y, result_2);
    printf("sum %d + %d is %d\n", result_1, result_2, result_3);
    return 0;
}
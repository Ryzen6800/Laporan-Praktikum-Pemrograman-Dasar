#include <stdio.h>

int main()
{
    char name[50];
    long long int student_id;
    char paralel_class[50];
    char place_and_date_of_birth[100];
    char address[100];
    char hobby[50];
    long long int phone_number;

    printf("Enter your name                    : ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your student id              : ");
    scanf("%lld", &student_id);
    getchar();

    printf("Enter your paralel class           : ");
    fgets(paralel_class, sizeof(paralel_class), stdin);

    printf("Enter your place and date of birth : ");
    fgets(place_and_date_of_birth, sizeof(place_and_date_of_birth), stdin);

    printf("Enter your address                 : ");
    fgets(address, sizeof(address), stdin);

    printf("Enter your hobby                   : ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("Enter your phone number            : ");
    scanf("%lld", &phone_number);
    getchar();

    return 0;
}
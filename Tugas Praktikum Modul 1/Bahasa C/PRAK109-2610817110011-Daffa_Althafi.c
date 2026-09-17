#include <stdio.h>

int main()
{
    int sum_of_army_YuZhong = 958730;
    int sum_of_hero = 5;
    int troops_each_hero_must_defeat = sum_of_army_YuZhong / sum_of_hero;
    printf("Yuzhong army: %d\n", sum_of_army_YuZhong);
    printf("Hero: %d\n", sum_of_hero);
    printf("The number of troops each hero must defeat: %d\n", troops_each_hero_must_defeat);
    return 0;
}
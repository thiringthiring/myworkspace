#include <stdio.h>

int main(void)
{
   int total, s1, s2, s3, g;
    printf("음식값을 입력하세요: ");
    scanf("%d", &total);


    s1 = (total /3)/100 *100;
    s2 = ((total - s1) /2)/1000 *1000; 
    s3 = (total - s1 -s2)/1000 *1000;
    g = (total - s1 -s2) %1000;

    printf("a 부담금액: %d원\n", s1+g);
    printf("B 부담금액: %d원\n", s2);
    printf("C 부담금액: %d원\n", s3);

    return 0;
}
/*
    จงแสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a
*/
#include <stdio.h>
    int main(){
    int a = 10 ;
    float b = 20.0 ;
    char c []= "Haha";
    char d []= "a";
    printf("input:\n");
    scanf("%d %d %d %d",a ,&b ,&c ,&d); //TODO: #10 Display variable a, b, c and d.
    printf("Output:\n %d %0.1f %s %s",a ,b ,c ,d);
    return 0; }

    
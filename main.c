#include <stdio.h>

int factorial(int a)
{
    int i;
    int res = 1;
    for(i=0; i<a; i++)
    {
        res = res * (i + 1);
    }
    return res;
}

int combination(int n, int r)
{
    int up, down;

    //분자계산 : up에저장
    up = factorial(n);
    //분모계산 : down에저장
    down = factorial(n-r)*factorial(r);

    return(up/down);
}

int main(void)
{
    //변수선언 
    int result;
    int n,r;

    //입력받기

    //n입력문구찍기
    printf("input n: ");
    //scanf n
    scanf("%i", &n);

    //r입력문구찍기
    printf("input r: ");
    //scanf r
    scanf("%i", &r);

    //combination 계산
    result = combination(n, r);

    //결과출력
    printf("The combination result is %i\n", result);
}




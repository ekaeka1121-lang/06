 #include <stdio.h>

int sumTwo (int a, int b)
{
    int res;
    res = a + b;
    return res;
}


int square(int n)
{
    return n*n;
}

int get_max(int x, int y)
{
    if (x>y)
        return x; // return 여기서 실행되면 아래 리턴은실행안됨
    return y;
}

int main(void)
{
    printf("sumTwo result : %i\n", sumTwo(2,5));
    printf("square result: %i\n", square(10));
    printf("get_max result: %i\n", get_max(2,5));

    return 0;
}
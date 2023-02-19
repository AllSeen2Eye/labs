#include <stdio.h>
#include <stdlib.h>

void fibonacci(int size);

int main(int argc, char *argv[])
{
        if (argc == 2)
        {
                fibonacci(atoi(argv[1]));
        }
        return 0;
}

void fibonacci(int size)
{       
        int fib_member_0 = 0, fib_member_1 = 1;
        printf("%d is the 1 fibonacci number\n", fib_member_0);
        printf("%d is the 2 fibonacci number\n", fib_member_1);
        for (int i = 3; i <= size; i++){
                int swap = fib_member_0;
                fib_member_0 = fib_member_1;
                fib_member_1 += swap;
                printf("%d is the %d fibonacci number\n", fib_member_1, i);
        }
}
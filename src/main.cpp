extern "C"{
    #include "sum.h"// Add the header files required to run your main
    #include "fib.h"
    #include "sumn.h" 
    #include "stdio.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    printf("%d \n", fib(10, 0, 0));
    return 0;
}
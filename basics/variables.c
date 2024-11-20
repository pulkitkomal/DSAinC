#include <stdio.h>
#include "ext_var.h"

// global vairable

int global_variiable = 100;

void function(){
    // static variable

    static int y = 10;
    y = y+10;

    printf("Static Variable Value %d\n", y);
}

int main(){
    // local variable
    int a = 10;
    printf("first variable %d\n", a);

    // calling global variable

    printf("global variable %d\n", global_variiable);

    // static variable usage

    function();
    function();

    // calling extern variable

    printf("extern variable %d\n", extern_variable);

    // calling const variable

    const int const_variable = 10;
    // const_variable = 20; throws error
    printf("const variable %d\n", const_variable);

    return 0;
}
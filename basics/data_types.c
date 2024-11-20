#include <stdio.h>

struct ABC{
    int index;
    int id;
}

void pointer_demo(int x){
    int* myPointer; // pointer initialized

    myPointer = &x;

    printf("pointer address %p\n", myPointer);
    printf("pointer value %d\n", *myPointer);
}

void array_demo(){

    int N = 3;

    int arrI[3] = {10, 20, 30};
    for(int i=0; i < N; i++){
        printf("%d\n", arrI[i]);
    };
}

int main(){
    int a = 10;
    char b = 'c';
    float c = 0.2;
    double d = 0.33;
    char e[20] = "abc"; // string in double quotes

    // void - too complicated 

    printf("int %d, char %c, float %f, double %lf, str %s\n", a, b, c, d, e);

    pointer_demo(10);
    array_demo();
}

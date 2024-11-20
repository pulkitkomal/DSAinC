#include <stdio.h>
#include <string.h>

struct ABC{
    int index;
    char id[20];
};

union XZY{
    int index;
    char id[20];
};

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

    struct ABC a1;

    strcpy(a1.id, "123");
    a1.index = 10;

    printf("%d, %s\n ", a1.index, a1.id);

    union XZY x1;
    strcpy(x1.id, "ii");
    x1.index = 99;

    printf("%d, %s\n ", x1.index, x1.id);

}

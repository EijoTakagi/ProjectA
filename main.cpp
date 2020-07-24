#include<stdio.h>
void func() {
    printf("ProjectB\n");
}
int main() {
    printf("ProjectA\n");
    printf("test\n");
    func();
    return 0;
}
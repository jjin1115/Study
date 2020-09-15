//
// Created by HJ on 2020-09-15.
//

#include <stdio.h>
#include <iostream>
void update(int *a,int *b) {
    // Complete this function
    int num1 = *a;
    int num2 = *b;

    *a = num1 + num2;
    *b = abs(num1 - num2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
#include <stdio.h>

unsigned long long int  func1(int x){
    unsigned long long int r = 1;
    int i;
    for(i = 1; i <= x; i++){
        r *= i;
    }
    return r;
}

void func2(unsigned long long p){
    int k = 0;
    while( (p % 10) == 0){
        p = p / 10;
        k++;
    }
    printf("%d\n",k);
}

int main (void){
    unsigned long long y;
    int x;
    scanf("%d",&x);
    y = func1(x);
    func2(y);
}
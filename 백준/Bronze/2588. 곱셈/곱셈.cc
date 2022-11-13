#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int sum[3];
    sum[0] = a * (b%10);
    sum[1] = a * (b%100 - b%10)/10;
    sum[2] = a * (b/100);
    
    for(int i=0; i<3; i++){
        printf("%d\n", sum[i]);
    }
    printf("%d", a*b);
}
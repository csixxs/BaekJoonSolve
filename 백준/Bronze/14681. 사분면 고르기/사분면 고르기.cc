#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    if(x>0 && x*y>0)printf("1");
    else if(x>0 && x*y<0)printf("4");
    else if(x<0 && x*y>0)printf("3");
    else printf("2");
}
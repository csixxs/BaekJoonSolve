#include <stdio.h>
int main(){
    int h,m;
    scanf("%d %d", &h, &m);
    if(m>=45)m-=45;
    else if(m<45 && h>=1){
        h-=1;
        m=60-(45-m);
    }
    else if(m<45 && h<1){
        h=23;
        m=60-(45-m);
    }
    printf("%d %d", h, m);
}
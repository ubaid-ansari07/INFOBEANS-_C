#include<stdio.h>
void main(){
    int x;
    int *p;
    int **q;
    void *r;
    float a;
    a=40.5;
    r=&a;
    x=20;
    p=&x;
    q=&p;
    printf("%d\n",x);
    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%d\n",**q);
    printf("%p\n",q);
    printf("%ul\n",sizeof(p));
    printf("%ul\n",sizeof(q));
    printf("%.1f\n",*(float*) r);
    *p=*p+10;
    printf("%d\n",x);
    **q=**q-30;
    printf("%d\n",x);
    printf("%n",x);
    fprintf("hello world");
}

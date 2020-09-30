#include <stdio.h>
#include <math.h>

int TopDelitel(){
    int a,b,c,d,e;
    c=0;
    scanf("%d%d",&a,&b);
    while (c<a)
        {
        c=c+1;
        if (a%c==0)
            {
            d=c;
            if (b%d==0)
                {
                e=d;
                }
            }
        }
    printf("%d \n a/d=%d \n b/d=%d \n testovane a=%d   b=%d",e,(a/d),(b/d),a,b);
    return 0;
}
int Faktorial(){
    int a,v;
    v=1;
    scanf("%d",&a);
    int i=1;
    for (i;i<=a;++i){
        printf("a=%d\n i=%d\n v=%d\n",a,i,v);
        v=v*i;
    }
    printf("%d \n",v);
    i=0;
    v=1;
    while(i<a){
        ++i;
        v=v*i;
    }
    printf("%d",v);
return 0;
}
int Unfinished(){
    int ar1[5];
    int ar2[5];
    for(int i = 0; i!=5;++i){
        printf("\nar1[%d]= ",i);
        scanf("%d",&ar1[i]);
    }
    for(int i = 0; i!=5;++i){
        printf("\nar2[%d]= ",i);
        scanf("%d",&ar2[i]);
    }
    // a > b ? a=v : a = n;
return 0;
}

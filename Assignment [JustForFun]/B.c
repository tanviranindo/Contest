#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
for(int testcase=1; testcase<=a; testcase++){
        scanf("%d %d",&b,&c);
        printf("Case %d: %d\n",testcase,add(b,c));
}
return 0;
}
int add(int x, int y){
return x+y;
}

#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    for(int i=0; i<a; i++){
      scanf("%d %d",&b,&c);
      printf("%d\n",add(b,c));
    }
    return 0;
}
int add(int a, int b){
  return a+b;
}

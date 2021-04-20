#include<stdio.h>
int main(){
    char a[15], b[15], c[15], empty;
    scanf("%s %s %s", &a, &b, &c);
      (a[0] == 'v' && b[0] == 'a' && c[0] == 'c') ? printf("aguia\n")
    : (a[0] == 'v' && b[0] == 'a' && c[0] == 'o') ? printf("pomba\n")
    : (a[0] == 'v' && b[0] == 'm' && c[0] == 'o') ? printf("homem\n")
    : (a[0] == 'v' && b[0] == 'm' && c[0] == 'h') ? printf("vaca\n")
    : (a[0] == 'i' && b[0] == 'i' && c[2] == 'm') ? printf("pulga\n")
    : (a[0] == 'i' && b[0] == 'i' && c[2] == 'r') ? printf("lagarta\n")
    : (a[0] == 'i' && b[0] == 'a' && c[0] == 'h') ? printf("sanguessuga\n")
    : (a[0] == 'i' && b[0] == 'a' && c[0] == 'o') ? printf("minhoca\n")
    : empty;
    return 0;
}

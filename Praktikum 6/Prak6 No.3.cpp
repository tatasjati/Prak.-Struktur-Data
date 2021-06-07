//tatas jati wikanta_20051397065//
#include <stdio.h>
#include <stdlib.h>

void array(int [],int,int);
int main(){
 int a[]={0,1,2,3,4,5,6,7,8};
 int x, i=8;
 printf("Tatas Jati Wikanta\n");
 printf("20051397065\n");
 printf("2020_A_D4-MI\n");
 printf("Input x : ");scanf("%d", &x);
 array(a,x,i);
}
void array(int a[],int x,int i){
 if(i<0){
 puts("x bukan merupakan anggota array a");
 return;
 }
 if(x==a[i]){
 puts("x merupakan anggota array a");
 return;
 }
 array(a,x,i-1);
}

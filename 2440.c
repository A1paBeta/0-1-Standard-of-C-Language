#include <stdio.h>
void astro(int n){
  if(n==0) return;
  else{
    int i;
    for(i=1;i<=n;++i){
      printf("*");
    }
    printf("\n");

    astro(n-1);
  }
}
int main(void){
  int n;
  scanf("%d",&n);
  astro(n);
  return 0;
}

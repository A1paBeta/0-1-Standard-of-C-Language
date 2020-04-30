#include <stdio.h>

int recuSum(int n){
  if(n<=1){
    return n;
  }

  else{
    return n + recuSum(n-1);
  }
}

int main(void) {
  int n;
  scanf("%d",&n);
  printf("%d", recuSum(n));
  return 0;
}

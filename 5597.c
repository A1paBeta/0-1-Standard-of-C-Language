#include <stdio.h>

int main(void){
  int chk[31] = {0,}, i, a;

  for(i=1;i<=28;++i){
    scanf("%d",&a);
    chk[a] = 1;
  }

  for(i=1;i<=30;++i){
    if(chk[i] == 0){
      printf("%d\n",i);
    }
  }

  return 0;
}

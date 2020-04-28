#include <stdio.h>

int main(void){

  int n, i, j;
  scanf("%d",&n);

  // 1(반복). 첫 번째 줄부터 n 번째 줄까지 이동하는 역할 (i)
  //   1-1(반복). i개만큼 별을 출력하는 역할 (j)
  //   1-2(동작). 줄바꿈을 해주는 역할

  for(i=1;i<=n;++i){ // 1(반복) 해당
    for(j=1;j<=i;++j){ // 1-1(반복) 해당
      printf("*");
    }
    printf("\n"); //1-2(동작) 해당
  }

  return 0;
  
}

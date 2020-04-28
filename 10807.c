#include <stdio.h>

int main(void){

  int n,v,vCnt = 0,i;
  int arr[101];

  scanf("%d",&n);
  for(i=1;i<=n;++i){
    scanf("%d",&arr[i]);
  }
  scanf("%d",&v);

  for(i=1;i<=n;++i){
    if(arr[i] == v){
      ++vCnt;
    }
  }

  printf("%d",vCnt);
  return 0;
  
}

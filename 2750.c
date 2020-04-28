#include <stdio.h>
int arr[1001];
int main(void){
  int n, i, j, temp;

  scanf("%d",&n);
  for(i=1;i<=n;++i){
    scanf("%d",&arr[i]);
  }

  for(i=1;i<=n;++i){
    for(j=i+1;j<=n;++j){
      if(arr[i] > arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for(i=1;i<=n;++i){
    printf("%d\n",arr[i]);
  }

  return 0;

}

#include <stdio.h>
int arr[1000001];
int main(void){

  int n, i, minVal = 1000001, maxVal = -1000001;
  scanf("%d",&n);
  for(i=1;i<=n;++i){
    scanf("%d",&arr[i]);
    if(minVal > arr[i]) minVal = arr[i];

    if(maxVal < arr[i]) maxVal = arr[i];
  }

  printf("%d %d",minVal,maxVal);
  return 0;
  
}

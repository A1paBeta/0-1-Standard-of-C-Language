#include <stdio.h>

int arr[101] = {0,1,1};

int fibo(int n){
  int first, second;

  if(n<=2){
    return arr[n];
  }

  if(n-1>=0 && arr[n-1] != 0){
    first = arr[n-1];
  }
  else if(n-1>=0 && arr[n-1] == 0){
    first = fibo(n-1);
  }

  if(n-2>=0 && arr[n-2] != 0){
    second = arr[n-2];
  }
  else if(n-2>=0 && arr[n-2] == 0){
    second = fibo(n-2);
  }

  arr[n] = first + second;
  return arr[n];
}

int main(void) {
  int n;
  scanf("%d",&n);
  printf("%d",fibo(n));
  return 0;
}

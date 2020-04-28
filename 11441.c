/* 
10 20 30 40 50

0 10 30 60 100 150

d[fi] - d[st-1] */

#include <stdio.h>
int d[100001];
int main(void){
  int n,m,i,st,fi;

  scanf("%d",&n);
  for(i=1;i<=n;++i){
    scanf("%d",&d[i]);
  }

  for(i=2;i<=n;++i){
    d[i] = d[i-1] + d[i];
  }

  scanf("%d",&m);
  for(i=1;i<=m;++i){
    scanf("%d %d",&st,&fi);
    printf("%d\n",d[fi]-d[st-1]);
  }

}

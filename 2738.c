#include <stdio.h>
int map[101][101], map2[101][101]; //map : A, map2 : B
int main(void){
  
  int n,m,i,j;

  scanf("%d %d",&n,&m);

  for(i=1;i<=n;++i){
    for(j=1;j<=m;++j){
      scanf("%d",&map[i][j]);
    }
  }

  for(i=1;i<=n;++i){
    for(j=1;j<=m;++j){
      scanf("%d",&map2[i][j]);
    }
  }

  for(i=1;i<=n;++i){
    for(j=1;j<=m;++j){
      map[i][j] += map2[i][j];
    }
  }

  for(i=1;i<=n;++i){
      for(j=1;j<=m;++j){
        printf("%d ",map[i][j]);
      }
      printf("\n");
    }



  return 0;

}

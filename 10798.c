#include <stdio.h>
#include <string.h>

char map[6][17];

int main(void){
  int i,j,maxLength = 0, len;

  for(i=1;i<=5;++i){
    if(i==1){
      scanf("%s", map[i]);
    }else{
      scanf(" %s", map[i]);
    }
    len = strlen(map[i]);
    if(maxLength < len){
      maxLength = len;
    }
  }

  for(i=0;i<maxLength;++i){
    for(j=1;j<=5;++j){
      if(map[j][i] != '\0'){
        printf("%c",map[j][i]);
      }
    }
  }

  return 0;
}

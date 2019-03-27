#include<stdio.h>
//#include"trig.h"
int main() {
  int i;
  int count=10;
  int upper=1;
  int lower=0;
  int a[count];
    for (i = 0; i < count; i++) {
         a[i] = (rand() %
           (upper - lower + 1)) + lower;
        printf("%d", a[i]);

    }
    printf("\n");
    int rise=0,fall=0,level_zero=0,level_one=0;
    for(i=0;i<count-1;i++)
    {
      if(a[i]==a[i+1])
      {
        if(a[i]==0)
          level_zero++;
        else
          level_one++;
      }
    else if(a[i]>a[i+1])
            fall++;
    else
            rise++;
    }
    printf("rise=%d, fall=%d, level zero=%d, level ones=%d ", rise,fall,level_one,level_zero);
  return 0;
}

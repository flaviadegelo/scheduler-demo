#include <stdio.h>

int main() {
  int a[5];
  int n;
  int c[5];
  int flag;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

 c[0]=a[0];
 c[1]=a[1];
 c[2]=a[2];
 c[3]=a[3];
 c[4]=a[4];


  for (int i=0; i<n; i++) {

    flag=1;

    for(int i=0; i<5; i++){



        if(c[i]==1){

            printf("%d", i);
            c[i]=a[i];
            flag=0;
        }

        else{
            c[i]--;
        }


    }

    if(flag==1){

        printf("-");
    }
    printf("\n");

  }


  return 0;
}


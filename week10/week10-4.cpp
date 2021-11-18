#include <stdio.h>
int main()
{
    int a[1000]={0,0,0,0};
    for(int i=2;i<1000;i++){
        if( a[i]==0){
            printf("%d ",i);
            for(int k=i+i;k<1000;k=k+i) a[k]=1;
        }
    }
}

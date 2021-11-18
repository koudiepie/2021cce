#include <stdio.h>
int main()
{
    int ans=0;
    int a[100000]={0,0,0,0,0};
    for(int i=2;i<100000;i++){
        if( a[i]==0){
            ans++;
        for(int k=i+i;k<100000;k=k+i) a[k]=1;
        }
    }
    printf("ans: %d",ans);
}


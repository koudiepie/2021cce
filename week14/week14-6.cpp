#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[100][100],b[100][100];
	printf("\n");
	for(int  i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[j][i];
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
}

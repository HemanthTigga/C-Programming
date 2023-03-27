#include<stdio.h>
void sheet(int sheets[7], int currRoll, int max)
{
    int i,j,k;
    for(i=1;i<=7;i++){
        for(j=0;j<max;j++){
            if(i==sheets[j]){
                printf("%d ",j);
                for(k=j;k<max-1;k++){
                    sheets[k]=sheets[k+1];
                }
                max--;
                break;
            }
        }
    }
}
int main()
{
    int i;
    int a[7];
    for(i=0;i<7;i++)
        scanf("%d",&a[i]);
    sheet(a,1,7);
}
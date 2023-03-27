#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))

int maxWater(int arr[], int n)
{
    int i,j;
int res = 0;
for (i = 0; i < n; i++) {
int left = arr[i];
for (j = 0; j < i; j++) {
left = max(left, arr[j]);
}
int right = arr[i];
for (j = i + 1; j < n; j++) {
right = max(right, arr[j]);
}
res = res + (min(left, right) - arr[i]);
}
return res;
}

int main()
{
int n,i;
scanf("%d",&n);
int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
printf("%d", maxWater(arr, n));
return 0;
}

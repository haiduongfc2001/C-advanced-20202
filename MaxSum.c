#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac so trong day so:\n");
    for(int i=0;i<n; i++){
       printf("a[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
   /* int maxSum = 0;
for (int i=0; i<n; i++) {
for (int j=i; j<n; j++) {
int sum = 0;
for (int k=i; k<=j; k++)
sum += a[k];
if (sum > maxSum){
maxSum = sum;}

}
}*/

int maxSum = a[0];
for (int i=0; i<n; i++) {
int sum = 0;
for (int j=i; j<n; j++) {
sum += a[j];
if (sum > maxSum)
maxSum = sum;

}
}
 
 printf("==> %d", maxSum);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
void floyd(int n){
    int i=1,j=1,a=1;
    while (i<=n) {
        while (j<=i) {
            printf("%3d",a);
            j++;
            a++;
        }
        printf("\n");
        i++;
    }
}
int main(){
    int c;
    printf("Enter the number of lines to print for the Floyd triangle : ");
    scanf("%d",&c);
    floyd(c);
    return 0;
}

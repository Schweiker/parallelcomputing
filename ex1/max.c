#include <stdio.h>

int max1(int a[]){
    int i = 0;
    int max = 0;
    for(i; i < sizeof(a)/sizeof(int);i++){
        if(a[i] < max) max = a[i];
    }
    return max;
}
int max2(int* arr, int n, int* ind){
    int i = 0;
    int max = 0;
    for(;i < n;i++){
        if(max < arr[i]){
            max = arr[i];
            *ind = i;
        }
    }
    return max;
}
int main(){
    int n = 10;
    scanf("%d",&n);
    int a[10] = {1,2,3,50,4,78,34,79,84,65};
    int max = 0;
    int ind = 0;
    max2(a,10,ind);
    printf("max ist %d an %d \n", max(a,10,ind));
}


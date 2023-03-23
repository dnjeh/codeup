#include <stdio.h>

int abs(int t) { return t>0?t:t*-1; }

void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    long long int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(abs(L[i])<=abs(R[j])) arr[k]=L[i++];
        else arr[k]=R[j++];
    }
    for(;i<n1;i++,k++) arr[k]=L[i];
    for(;j<n2;j++,k++) arr[k] = R[j];
}
 
void mergeSort(int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main() {
    int n, i, min, b[2];
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    mergeSort(a, 0, n-1);
    for(i=0;i<n-1;i++) {
        if(!i||abs(a[i]+a[i+1])<min) {
            min=abs(a[i]+a[i+1]);
            b[0]=a[i];
            b[1]=a[i+1];
        }
    }
    if(b[0]>b[1]) printf("%d %d", b[1], b[0]);
    else printf("%d %d", b[0], b[1]);
}

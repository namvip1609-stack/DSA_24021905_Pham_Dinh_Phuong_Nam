#include <iostream>
using namespace std;
void merge (int arr[], int left, int mid, int right){
 int n1 = mid - left +1;
 int n2 = right -mid;
 int *al = new int[n1];
 int *ar = new int [n2];
 
for(int i=0;i<n1;i++){
    al[i] = arr[left +i];
}
for(int i=0;i<n2;i++){
    ar[i]= arr[mid +i +1];
}

int i=0, j=0, k=left;
while (i<n1 && j<n2){
    if(al[i]>ar[j]){
        arr[k] = al[i];
        k++;
        i++;
    }
    else {
        arr[k] = ar[j];
        k++;
        j++;
    }
}

while (i<n1){
    arr[k] = al[i];
    k++;
    i++;
}
while (j<n2){
    arr[k] = ar[j];
    k++;
    j++;
}
}
void ms(int arr[],int left, int right){
  
    if(left >= right ){
        return;
    }
    int m = left + (right - left) / 2;
    ms(arr, left, m);
    ms(arr,m +1,right);
    merge(arr, left, m,right);
    
}
int main()
{
   int arr[] = {12,13,5,6,7};
   int n = sizeof(arr) / sizeof(arr[0]);
   ms(arr,0,n-1);
   int sotrungvi = arr[n/2];
   
      cout<<"so trung vi la: "<<sotrungvi;
   

    return 0;
}

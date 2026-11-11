#include <iostream>
using namespace std;
void swim(int arr[], int n){
    int parent;
    while (n>0){
        if(n%2==0){ parent = n/2 -1;}
        else if(n%2 !=0) { parent = n/2;}
        
        if(arr[parent]< arr[n]){
            swap(arr[parent],arr[n]);
            n = parent;
        }
        else { break;}
        
    }
}

void sink (int arr[],int k,int n){

    while (2*k+1 < n){
    int ct = 2*k +1;
    int cp = 2*k +2;
    int cm = ct;
    if(cp<n && arr[ct]<arr[cp]){ cm = cp;}
    
    if(arr[k]<arr[cm]){ swap(arr[k],arr[cm]);
        k = cm;
    }
    else { break;}
}
}

void heapsort(int arr[],int n){
    for(int i= 0;i<n;i++){
        swim(arr,i);
    }
    
for (int i=n-1;i>=0;i--){
    swap(arr[0],arr[i]);
    sink(arr,0,i);
    
}    
}
int main() {
int arr[5] = {1,3,8,2,4};
heapsort(arr,5);

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}

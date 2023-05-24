#include <iostream>
using namespace std;
void heapify(int arr[],int size,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=size && arr[left]>arr[largest]){
           largest=left;
    }
    if(right<=size && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }
}
void heapSort(int arr[],int n){
    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}
int main(){
    int arr[6]={-1,70,60,55,45,50};
    int n=5;
    heapSort(arr,n);
    cout<<"Printing...................."<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
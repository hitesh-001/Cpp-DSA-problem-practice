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
int main(){
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,5,i);
    }
    cout<<"Printing...................."<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
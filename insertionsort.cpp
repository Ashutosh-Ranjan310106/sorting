#include<iostream>
using  namespace std;
int* insertionsort(int* arr,int len){
    for (int i=0;i<len;i++){
        int key=arr[i];
        int j=i;
        while(j>0&&arr[j-1]>key){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    return arr;
}
int main(){
    int a[5]={1,3,2,5,1};
    int len=sizeof(a)/sizeof(a[0]);
    int* p=insertionsort(a,len);
    for (int i=0;i<len;i++){
        cout<<a[i]<<" // ";
        
    };
    cout<<endl;
}

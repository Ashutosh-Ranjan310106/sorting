#include <stdio.h>
//create a binary file in c and write 10^9 random integer insied it sort these numbeer using recurcive version merge sort post sorting write the sorted sequence of number in another binary file
//also supply for each core diffrent process
//multi processing:-
//multi threading:-

int* merge_sort(int* arr){
    int length=sizeof(arr)/4;
    if (length>1){
        int l[length/2];
        for (int i=0;i<length/2;i++){
            l[i]=arr[i];
        }
        int r[length/2+length%2];
        for (int i=length/2;i<length;i++){
            r[i]=arr[i];
        }
        merge_sort(l);
        merge_sort(r);
        int i=0,j=0,k=0;
        for (int i=0;i<5;i++)
            printf(" %d ",arr[i]);
        while (i<length/2 && j<length/2+length%2){
            if (l[i]<r[j]){
                arr[k]=l[i];
                i++;
                k++;
            }else{
                arr[k]=r[j];
                j++;
                k++;
            }

        }
        while (i<length/2){
            arr[k]=l[i];
            i++;
            k++;
        }
        while (j<length/2+length%2){
            arr[k]=r[j];
            j++;
            k++;
        }
        
        
    }
    return arr;
}
int main(){
    int arr[5]={1,42,45,23,63};
    int *p;
    p=merge_sort(arr);
    for (int i=0;i<5;i++)
        printf(" %d ",p[i]);
    return 0;
}
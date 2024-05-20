
function  selection_sort(arr){
    min_index=0;
    for (let i=0;i<arr.length-1;i++){
        min_index=i
        for (let j=i;j<arr.length;j++){
            if (arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        if (min_index!=i){
            arr[min_index]=arr[min_index]+arr[i]
            arr[i]=arr[min_index]-arr[i]
            arr[min_index]=arr[min_index]-arr[i]
        }
        console.log(a);
    }
}
let a=[1,4,2,5,2]
selection_sort(a);
console.log(a);

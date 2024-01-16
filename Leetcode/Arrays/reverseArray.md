void reverseArray(int arr[] , int n , int m){
    int s = m+1;
    int e = n-1;

    while(s<=e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }

    printArray(arr,n);
}j
int bs(int* arr, int start, int end,int key) {
    // Write your code here.
    int low=start;
    int high=end;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return -1;
}
int pivot(int* arr,int n){
    int s=0, e=n-1;
    int mid;
    while(s<e){
        mid=(s+e)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
            
        }
        else{
            e=mid;
            
        }
        
    }
    return s;
}

int search(int* arr, int n, int key) {
    // Write your code here.
    int p=pivot(arr,n);
    if(key>= arr[p] && key<=arr[n-1]){
        return bs(arr,p,n-1,key);
    }
    else{
        return bs(arr,0,p-1,key); 
    }
}

int singleNonDuplicate(vector<int>& arr)

{

    int low  = 0, high = arr.size() - 1;

    // Edge case - Only one element

    if(high == 0)

        return arr[0];

 

    // Edge case - Ans is first or last element

    if(arr[0]!=arr[1])

        return arr[0];

    else if(arr[high] != arr[high-1])

        return arr[high];  

    while(low <= high){

        int mid = low + (high-low)/2;

 

        // If mid is the single element

        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])

            return arr[mid];

        // If mid is odd, the single element lies on the other side

        if(mid % 2 == 1){

            if(arr[mid] == arr[mid-1])

                low = mid+1;

            else

                high = mid-1;

        }  

 // If mid is even, the single element lies on the same side

        else{

            if(arr[mid] == arr[mid-1])

                high = mid-2;

            else

                low = mid+2;

        }

    }        

}


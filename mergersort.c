/*

merge_sort(A,low,high)

if n < 2 
    return
else
    mid = (low+high)/2      
    merge_sort(A,low,high)  
    merge_sort(A, mid+1, high)
    merge(A,low,mid,high)
end if 
------------------------------

merge (A, low, mid, high)
    left = low
    right = mid + 1
    ptrtemp = left 

    while left <= mid AND right <= high
        if A[left] <= A[right]
            tempA[temp++] = A[right++]
        else 
            tempA[temp++] = A[right++]
        end if 
    end while
end merge    
*/
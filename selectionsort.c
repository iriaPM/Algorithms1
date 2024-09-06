/*
 1. finding  min number
 2. swap
 3. repeat 

    for i=0 to i < N -1 do

        min = i
        for  j= i+1 to j < N do 
            if A[j] < A[min] then 
                min = j
            temp = A[min]
            A[min] = A[i]
            A[i] = temp 
        end for 
    end for


------------------------

//selection sort 

loop (i =0 ; i < N-1 ; i++ )

    //initialisation 

    min = i


        //finding min number 
        LOOP (j = i+1 ; j<N ; j++)

            if A [j] < A[min]
                min = j
            end IF  
            
        end loop inner 
        temp = A[min]
        A[min] = A[i]
        A[i] = temp 

    

end loop outer

*/
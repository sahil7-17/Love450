pair<int, int> getMinMax(vector<int> arr) {
        int n = arr.size();
        if(n == 1){     //if there is only one element then the first element would be  our min and max element at the same time
            return {arr[0],arr[0]};
        }
        // code here
        int min = INT_MAX;
        int max = INT_MIN;
        
        for(int i = 0; i<n; i++){
            if(arr[i] < min){
                min = arr[i];
            }
            if(arr[i] > max){
                max = arr[i];
            }
        }
        
        return {min,max};
    }

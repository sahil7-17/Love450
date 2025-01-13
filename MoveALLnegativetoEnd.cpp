void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        vector<int>positive;
        vector<int>negative;
        
     
        for(int i = 0; i<n; i++){
            if(arr[i] >= 0 ){
                positive.push_back(arr[i]);
            }
            else{
                negative.push_back(arr[i]);
            }
            
        }
        int idx = 0;
        for(int num : positive){
            arr[idx] = num;
            idx++;
        }
        for(int num : negative){
            arr[idx] = num;
            idx++;
        }

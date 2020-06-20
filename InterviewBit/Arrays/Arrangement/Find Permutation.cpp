vector<int> Solution::findPerm(const string A, int B) {
    
    vector<int>ans;
    
    int D = 0;
    
    for(int i =0; i < A.length(); i++){
        if(A[i] == 'D')
            D++;
    }
    // cout << D <<endl;
    int I = D+1;
    // cout << I <<endl;
    
    ans.push_back(I);
    I++;
    
    for(int i =0; i < A.length(); i++){
        
        if(A[i] == 'D'){
            ans.push_back(D);
            // cout << D <<endl;
            D--;
        }else{
            ans.push_back(I);
            // cout << I <<endl;
            I++;
        }
    }
    
    return ans;
}


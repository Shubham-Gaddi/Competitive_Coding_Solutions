vector<int> Solution::getRow(int k) 
{
     vector<int> v(k+1);
    if(k==0){
        v[0]=1;
        return v;
    }
    int c=1;
    v[0]=c;
    for(int j=1;j<=k;j++){
        v[j]=c*(k-j+1)/j;
        c=v[j];
    }
    return v;
}

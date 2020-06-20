/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool cmp(Interval a,Interval b){
return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    if(n==0)
        return A;
    vector<Interval> ans;
    sort(A.begin(),A.end(),cmp);
    ans.push_back(A[0]);
    for(int i=1;i<n;i++)
    {
        if(A[i].start>ans[ans.size()-1].end)
            ans.push_back(A[i]);
        else if(A[i].end>ans[ans.size()-1].end)
            ans[ans.size()-1].end=A[i].end; 
    }
return ans;
}

vector<int> Solution::subUnsort(vector<int> &A) 
{
     int  n = A.size();
    int s = 0, e = n-1, i, max1, min1;
    vector <int> ans ;
  for (s = 0; s < n-1; s++)
  {
    if (A[s] > A[s+1])
      break;
  }
  if (s == n-1)
  {
      ans.push_back(-1);
    return ans ;
  }
  for(e = n - 1; e > 0; e--)
  {
    if(A[e] < A[e-1])
      break;
  }
  max1 = A[s]; min1 = A[s];
  for(i = s + 1; i <= e; i++)
  {
    if(A[i] > max1)
      max1 = A[i];
    if(A[i] < min1)
      min1 = A[i];
  }
  for( i = 0; i < s; i++)
  {
    if(A[i] > min1)
    {  
      s = i;
      break;
    }      
  }
  for( i = n -1; i >= e+1; i--)
  {
    if(A[i] < max1)
    {
      e = i;
      break;
    } 
  }  
      
      
      ans.push_back(s); ans.push_back(e);
}

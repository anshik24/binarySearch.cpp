class Solution {
  public:
  int firstoccurance(vector<int>arr,int low,int high,int x){
      int res=-1;
      while(low<=high){
          int mid=low+(high-low)/2;
          if(arr[mid]==x){
          res=mid;
          high=mid-1;
          }
          else if(arr[mid]<x){
          low=mid+1;
          }
          else{
              high=mid-1;
          }
      }
          return res;
      }
      int lastoccurance(vector<int>arr,int low,int high,int x)
      {
         int res=-1;
      while(low<=high){
          int mid=low+(high-low)/2;
          
          if(arr[mid]==x){
              res=mid;
              low=mid+1;
          }
          else if(arr[mid]<x){
              low=mid+1;
          }
          else{
              high=mid-1;
          }
          
      }
      return res;
  }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        vector<int>res;
        int low=0,high=n-1;
        int first=firstoccurance(arr,low,high,x);
        int last=lastoccurance(arr,low,high,x);
        if(first==-1 && last==-1){
            res.push_back(-1);
            
        }
        else {
            res.push_back(first);
            res.push_back(last);
            
        }
        return res;
    }
};

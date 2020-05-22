class Solution {
public:
    int search(vector<int>& a, int target) {
        int l = 0 , h = a.size() -1;
        if(a.size() ==0) return -1;
        while(l<h){
            int mid = l+ (h-l)/2;
            if(a[mid] <= a[h])
                h = mid;
            else
                l= mid+1;
        }
        int pivot = l;
        l =0  , h = a.size()-1;
        if(a[pivot] <=target && target <=a[h])
            l=pivot;
       else
           h= pivot-1;
        
        while(l<=h){
            int mid = l+ (h-l)/2;
            if(a[mid]  == target)
                return mid;
            if(a[mid] > target)
                h= mid-1;
            else
                l = mid+1;
        }
        return -1;
    
    }
};
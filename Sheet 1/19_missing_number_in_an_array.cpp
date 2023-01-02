// Link: https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

#include<vector>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        long long sum = n;
        sum = ((sum*(sum+1)))/2;
        
        for(int i=0; i<n-1; i++) 
            sum -= array[i];
    
        return (int)sum;
    }
};

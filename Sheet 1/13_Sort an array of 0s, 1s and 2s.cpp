// Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// Time: O(N)
// Space: O(1)

class Solution{
    public:
    void sort012(int a[], int n){
        int arr[3] = {0};
        for(int i=0; i<n; i++) arr[a[i]]++;
        int index = 0;
        for(int i=0; i<arr[0]; i++) a[index++] = 0;
        for(int i=0; i<arr[1]; i++) a[index++] = 1;
        for(int i=0; i<arr[2]; i++) a[index++] = 2;
    }
    
};
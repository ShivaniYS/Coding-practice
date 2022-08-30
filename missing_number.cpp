#include <bits/stdc++.h>
using namespace std;
int getMisssingNo(int arr[] , int n){
    int N = n + 1;
    int total = (N) * (N+1)/2;
    for(int i=0;i<n;i++)
       total -=arr[i];
    return total;
}



int main(){
    int arr[] = {1,2,3,4,6};
    int N = sizeof(arr[0]);
    
    int missingNumber = getMisssingNo(arr,N);
    cout<<missingNumber;
    return 0;
}



USING TEMPLATE

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& arr, int N) {
        // Your code goes here
        int total = 0;
        int d = 0;
        total = (N) * (N+1)/2;
        int newSum = 0;
    
    for(int i=0;i<N-1;i++)
       newSum = newSum + arr[i];
       d = total - newSum;
    return d;
    }
     
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends

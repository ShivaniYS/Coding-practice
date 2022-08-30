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

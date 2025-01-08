#include<iostream>
using namespace std;
int main(){
    int arr[]={10,21,22,100,101,200,300};
    int ans=0;
    int n=sizeof(arr) / sizeof(arr[0]);  
    for(int i=n-1;i>=0;i--){
        int start=0,end=i-1;
        while(start<end){
            if(arr[start]+arr[end]>arr[i]){
                ans+=end-start;
                end--;
            }
            else{
                start++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

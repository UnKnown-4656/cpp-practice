#include <iostream>

using namespace std;

int main()
{
    int arr[]={5,3,1,4,2};
    int n =sizeof(arr)/sizeof(arr[0]);
    int s=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    //for(int i =0;i<n;i++){
     //   cout << arr[i] <<endl;
    //}
    for(int i=0;i<n;i++){ //1st pass i=0
        s=i;
        for(int j=i+1;j<n;j++){ //j=1
             //s=i;//s=0
            if(arr[j]<arr[s]){ //j=1 and s=0 means arr[j]=5 arr[s]=2 so false skipped
                s=j;
            }
        }
        swap(arr[s],arr[i]);

    }
    for(int i =0;i<n;i++){
        cout << arr[i] <<endl;
    }
    return 0;
}

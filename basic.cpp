#include <iostream>
using namespace std;


int main() {
    int arry[]={1,2,3,4,5,6,7,5,8,6,8,9,9};
    int biggest=arry[0];
    int smallest=arry[0];
    int sum =0;
    int n=sizeof(arry)/sizeof(arry[0]);
    //for(int i=1;i<6;i++){
    //    if(arry[i]<smallest){
     //       smallest=arry[i];
     //   }
     //   else if(arry[i]>biggest){
      //      biggest=arry[i];
     //   }

   // }
    //cout << biggest <<endl;
    //cout << smallest <<endl;
    for(int i=0; i<n ; i++){
        sum+=arry[i];
    }
    int average =sum/n;
    int count_a=0;

    for(int i=0 ; i<n ; i++){
        if(arry[i]>average){
            count_a++;
        }
    }
    cout << sum <<endl;
    cout << average <<endl;
    cout << count_a <<endl;

    return 0;
}

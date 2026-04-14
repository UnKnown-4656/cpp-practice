#include <iostream>

using namespace std;

int main()
{
    //int even=0;
    int number=0;
    cout << "Enter Number:\n";
    cin>>number;
    if (number%2 ==0){
        cout << number << "is even" <<endl;
    }
    else{
        cout << number << "is odd" <<endl;
    }
    cout << "Even Numbers Are:\n";

    for(int i=1;i<=number;i++){
        if (i%2==0){
            cout <<i<<endl;
        }
    }
    //cout << "Hello world!" << endl;
    return 0;
}

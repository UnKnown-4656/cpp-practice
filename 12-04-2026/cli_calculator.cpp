#include <iostream>

using namespace std;

int main()
{
    int a =0;
    int b= 0;
    int task=0;
    cout <<"Enter Number A:"<<endl;
    cin>>a;
    cout <<"Enter Number B:"<<endl;
    cin>>b;
    cout <<"Choose The Operation Needs to Done \n";
    cout <<"1.Add\n";
    cout <<"2.Substraction\n";
    cout <<"3.Multiplication\n";
    cout <<"4.Division\n";
    cin>>task;
    if (task == 1){
        cout << a+b <<endl;
    }
    else if (task ==2){
        cout << a-b <<endl;

    }
    else if (task ==3){
        cout <<a*b<<endl;
    }
    else if (task ==4){
        //cout << a/b <<endl;
        if (b ==0){
            cout << "Error! Cant Be Divided by Zero" <<endl;
        }
        else{
            cout << a/b <<endl;
        }
    }
    else{
        cout << "Error! Invalid Task Input" << endl;
    }
    //int Age = 0;
    //string Name ="Testing";
    //cout << "Enter Your Name" <<endl;
    //string Name="";
    //cin >>Name;
    //cout <<"Enter Your Age"<<endl;
    //cin>>Age;
    //if (Age>=18){
       // cout << "You Are Eligible To Vote!";
    //}
    //else{
     //   cout<<"You Are Not Eligible To Vote";
    //}
    //cout << " "<< Name<<" Your Age is "<< Age <<endl;
    return 0;
}

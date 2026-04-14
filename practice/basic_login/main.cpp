#include <iostream>

using namespace std;

int main()
{
    int username= 123456789;
    string password= "Test@123";
    int user_input = 0;
    string pass_input= "";
    int limit =3;



    while(limit>0){
        cout << "Enter ID :" <<endl;
        cin>>user_input;
        cout << "Enter Password :"<<endl;
        cin>>pass_input;
        if(username==user_input){
            if(password == pass_input){
                cout << "Logged In Succesfully\n";
                break;
            }
            else{
                limit-=1;
                cout << "Password is Incorrect \n";
                cout << limit << " Limit Left\n";
                continue;

            }
        }
       else{
        limit-=1;
        cout << "Invalid id or Password!" <<endl;
        cout << limit << " Limits Left" <<endl;
        continue;
      }
    }
    if(limit ==0){
            cout << "account is banned please contact admin\n";
       }


    //cout << "Hello world!" << endl;
    return 0;
}

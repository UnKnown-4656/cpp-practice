#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void print(string val){
    cout << val <<endl;

}
bool checkAnswer(int user_val,int n){
    return user_val==n;

    }

int main()
{
    srand(time(0));
    string level= "";
    int user_val=0;
    int chance =3;
    cout << "Do You Wanna Play? (yes/no)\n";
    cin>>level;


    if(level == "yes"){
        int n= rand()%11+1;//max + min
        while(chance>0){
            cout << "Guess the Number:\n";
            cin>>user_val;
            if(checkAnswer(user_val,n)==true){
                cout << user_val <<" is correct Answer ,You got it ! You Won,\n";
                break;

            }
            else{
                chance-=1;
                if(chance==0){
                    cout << "You lost! The Number is:" << n <<endl;
                }
                else{
                    if(user_val>n){
                        print("Too High!");
                    }
                    else{
                        print("Too Low!");
                    }
                    print("Wrong Answer!");
                    cout << chance <<" Chances left\n";
                    continue;
                }
                //chance-=1;
               // cout << chance <<"Chances left \n";
               // continue;
            }


        }


        //cout << n << endl;
    }
    else if(level=="no"){
        print("Okay ,Bye!");
    }
    else{
        print("Sorry i Cant Understand");
    }


    return 0;
}

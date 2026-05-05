#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;



struct Expenses{
    string title;
    int amount;

};

string toLowerCase(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower); //I dont know whats this i got it from ai
    return str;
}

void AddExpenses(vector<Expenses> &expenses ,string expense ,int amount){
    Expenses expen;
    expen.title=expense;
    expen.amount=amount;
    expenses.push_back(expen);
}
void SearchExpense(vector<Expenses> &expenses,string target){
    target =toLowerCase(target);
    bool found = false;
    for(int i=0;i<expenses.size();i++){
        string title =toLowerCase(expenses[i].title);
        if(title.find(target) != string::npos){
            cout << "\nExpense found :" <<endl;
            cout << expenses[i].title << ":" << expenses[i].amount <<endl;
            found=true;
            }
        }
        if(found != true ){
            cout << "Expense Not Found " <<endl;
    }
}
void DeleteExpen(vector<Expenses>&expenses,string target){
    target=toLowerCase(target);
    for(int i =0;i<expenses.size();i++){
        if(expenses[i].title == target){
            expenses.erase(expenses.begin()+i);
            break;
        }
    }
}

int main()
{
    bool running=true;
    vector <Expenses>expenses;
    while(running == true){
        int user_input;

        cout << "\n1.Add Expense " <<endl;
        cout << "2.View Expense" <<endl;
        cout << "3.Total" <<endl;
        cout << "4.Search" <<endl;
        cout << "5.Delete" <<endl;
        cout << "6.Exit" <<endl;
        cin>>user_input;
        if(user_input==6){
            running=false;
        }
        else{
            switch(user_input){
                case 1:{
                    string title;
                    int amount;
                    cout << "\nEnter The title of expense :"<<endl;
                    cin>>title;
                    cout << "\nEnter The Amount Spent :" <<endl;
                    cin>>amount;
                    AddExpenses(expenses ,title ,amount);
                    break;
                }
                case 2:{
                    for(int i=0;i<expenses.size();i++){
                        cout <<"\n" <<expenses[i].title <<endl;
                        cout <<expenses[i].amount<<endl;
                    }
                    break;
                }
                case 3:{
                    int total=0;
                    for(int i=0;i<expenses.size();i++){
                        total+=expenses[i].amount;
                    }
                    cout << "\nTotal Expense is : "<<endl;
                    cout <<total<<endl;
                    break;
                }
                case 4:{
                    string target;
                    cout << "\nEnter Expense Title TO Search :" <<endl;
                    cin.ignore();
                    getline(cin ,target);
                    SearchExpense(expenses,target);
                    break;
                }
                case 5:{
                    string target;
                    cout << "\nEnter The Name of expense you Wanna Delete :" <<endl;
                    cin.ignore();
                    getline(cin,target);
                    DeleteExpen(expenses,target);
                }
            }

        }
    }
    return 0;
}

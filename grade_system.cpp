#include <iostream>

using namespace std;

struct Student{
    std::string name;
    int marks[6];
    int total;
    char grade;
    float percentage;

};

void input_list(Student &s)
{
    int marks;
    string name;
    cout << "Enter Name:" <<endl;
    cin>>s.name;
    s.total=0;
    for(int i=0;i<6;i++){
        cout << "Enter Subject " << i+1 <<" Marks :"<<endl;
        cin>>marks;
        s.marks[i]=marks;
    }
    for(int i=0;i<6;i++){
        //cout<<s.marks[i] <<" ";
        s.total+=s.marks[i];
    }

    s.percentage=(float)s.total/625*100;

}

void grade(Student &s)
{
    float percentage=s.percentage;
    if(percentage>=20){
            if(percentage<50){
                s.grade='D';
            }
            else if(percentage<70){
                s.grade='C';
            }
            else if(percentage<90){
                s.grade='B';
            }
            else if(percentage>=90){
                s.grade='A';
            }
    }
    else{
        s.grade='F';
    }
}

void print_arry(Student &s)
{
    cout << "Percentage of " <<s.name<<" is:"<<endl;
    grade(s);
    cout << s.percentage << " And Grade is " << s.grade<<endl;
}

void sort_by_percent(Student students[],int st_count){
    for(int i=0;i<st_count;i++){
        for(int j=0;j<st_count-1;j++){
            if(students[j].percentage<students[j+1].percentage){
                swap(students[j+1],students[j]);
            }
        }
    }
}

int main()
{
    cout << "Grade Manager" << endl;
    int user_input=0;
    bool running=true;

    cout << "1.Enter Students:"<<endl;
    cout << "2.Show Students:"<<endl;
    cout << "3.Exit" <<endl;
    Student students[100];
    int st_count=0;
    while(running==true){
        cout<<endl;
        cout << "Enter Your Input:" <<endl;
        cin >>user_input;
        if(user_input>0){
            switch(user_input){
             case 1:
                 input_list(students[st_count]);
                 st_count +=1;
                 break;
             case 2:{
                 string st;
                 for(int i=0;i<st_count;i++){
                    print_arry(students[i]);
                 }
                 cout <<"Do you want to sort it by percentage?(y/n):"<<endl;
                 cin>>st;
                 if(st=="y"){
                    sort_by_percent(students,st_count);
                    cout << "Here is Sorted List of Students by Percentage:"<<endl;
                    for(int i =0;i<st_count;i++){
                        print_arry(students[i]);
                     }
                    }
                 else{
                    break;
                   }

                 //print_arry(students[]);
                 break;
             }
             case 3:
                 cout << "Okay Bye!" <<endl;
                 running=false;
                 break;
                 //input_list(s1);
            }

        }
        else{
            cout << "Error! Invalid Input" <<endl;
            running=false;
            break;
        }

    }

    //input_list(arry);
// TODO: file save/load
    return 0;
}

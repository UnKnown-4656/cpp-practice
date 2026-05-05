#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>

using namespace std;


// ===================== STRING SPLITTING GUIDE =====================

// Example string:
// "Admin:Mandya@123:Name"

// Index positions:
// A d m i n : M a n d y a @ 1 2 3 : N a m e
// 0 1 2 3 4 5 6 7 8 9 ...

// --------------------- WHAT IS size_t ---------------------
// size_t is an unsigned integer (only positive values)
// used for positions, sizes, indexes in strings/arrays
// Example:
//size_t pos = 5;  // valid index

// --------------------- WHAT DOES find() DO ---------------------
// find() returns the index (position) of a character
// If not found → returns string::npos

// Example:
//string line = "Admin:Mandya@123:Name";

//size_t pos1 = line.find(":");
// pos1 = 5 (first ':' found at index 5)

// --------------------- WHAT IS string::npos ---------------------
// string::npos means "NOT FOUND"
// It is a special value returned by find()

// Example:
//if (pos1 == string::npos) {
    // ':' not found in string
//}

// --------------------- FIND SECOND ':' ---------------------
// IMPORTANT: search AFTER first ':'

//size_t pos2 = line.find(":", pos1 + 1);
// starts searching from index pos1+1
// finds second ':'


// --------------------- SPLITTING STRING ---------------------

//string username = line.substr(0, pos1);
// from index 0 to pos1 → "Admin"

//string password = line.substr(pos1 + 1, pos2 - pos1 - 1);
// from after first ':' to before second ':'
// → "Mandya@123"

//string name = line.substr(pos2 + 1);
// from after second ':' till end
// → "Name"


// --------------------- VISUAL UNDERSTANDING ---------------------

// "Admin:Mandya@123:Name"
//        ↑          ↑
//       pos1       pos2

// username → before pos1
// password → between pos1 and pos2
// name     → after pos2

// ==========================================================
struct Userss{
    string username;
    string password;
    string name;
};

int main()
{
    //Writing File
    ofstream Users("users.txt");
    Users <<"Admin:Mandya@123:Name\n";
    Users.close();
    vector<Userss>user;
    unordered_map<string ,Userss>UserMap;
    //Reading File
    ifstream User("users.txt");
    string line;
    while(getline(User,line)){
        size_t pos1=line.find(":");
        size_t pos2=line.find(":",pos1+1);
        if(pos1 != string::npos && pos2 != string::npos){
            Userss u;
            u.username=line.substr(0,pos1);
            u.password=line.substr(pos1+1,pos2-pos1-1);
            u.name=line.substr(pos2+1);
            user.push_back(u);
            UserMap[u.username] = u;

        }
    }

    User.close();
    string searchUser = "Admin";
    string password= "Mandya@123";

    if (UserMap.find(searchUser) != UserMap.end()) { //Find returns index and also checks whether map is empty ot not using .end
        cout << "Found user: " << UserMap[searchUser].name << endl;
        if(UserMap[searchUser].password==password){
                cout << "COrrect Password" <<endl;

        }
    }
    else {
        cout << "User not found" << endl;
}

    return 0;
}

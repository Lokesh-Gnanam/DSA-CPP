

// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    map<string, string> phonebook;
    for(int i=0;i<size;i++){
        string name, num;
        cin>>name>>num;
        phonebook[name]=num;
        phonebook[num]=name;
    }
    string key;cin>>key;
    if(phonebook.count(key)){
            if(isdigit(key[0])){
                cout<<key<<" is associated with "<<phonebook[key]<<" in the phonebook";
            }
            else{
                cout<<key<<" is in the phonebook with number "<<phonebook[key];
            }
    }
    else{
        cout<<"No entries found for "<<key;
    }
}

//Sample test cases :
// Input 1 :
// 3
// John 9874563215
// Jane 9876543210
// James 9745863214
// John
// Output 1 :
// John is in the phonebook with number 9874563215
// Input 2 :
// 3
// John 9874563215
// Jane 9876543210
// James 9745863214
// Alan
// Output 2 :
// No entries found for Alan
// Input 3 :
// 3
// John 9874563215
// Jane 9876543210
// James 9745863214
// 9745863214
// Output 3 :
// 9745863214 is associated with James in the phonebook
#include<iostream>
#include<ctime>
#include<string>
#include <random>
#include<cstdlib>

#ifdef _WIN32
#define CLEAR "cls"
#include <windows.h>
#else //In any other OS
#define CLEAR "clear"
#include <unistd.h>
#endif

using namespace std;

char p;

bool valid_int(int&a);
bool valid_input_to_int(string &hu,int &h);

int main(){
    int h,s;
    string hu,sk;
    int x=1;
    while(true)
    {
        cout<<"Enter a NUMBER: ";
        if(valid_input_to_int(hu,h))
            {
                cout<<h<<endl;
                break;
            }
    }
    while (true)
    {
        cout<<"Enter another NUMBER: ";
        if(valid_input_to_int(sk,s))
            {
                cout<<s<<endl;
                break;                
            }
    }
}

bool valid_int(int&a){
    if(!(cin>>a))                  //it's actually a boolean, go figure
        {
            
            cout<<"No...that's not a number\n";               
            cin.clear();
            cin.ignore(9999,'\n');       
        }
    else if(a>10000000)
        {
            cout<<"number's too big\nthe limit's 10000000\n";   
        }
    else
        {
            return true;
        }
}





bool valid_input_to_int(string &s,int &i){
    getline (cin, s);
    for(int x=0;x<s.length();++x)
        {
            if (!isdigit(s[x]))
                {
                    cout<<"\nbruh those ain't even numbers you're typ'n in\ncome back when you're sober\n\n";   
                    return false;
                }
        }
    if ((s.length()>=7))
        {
            cout<<"\ntoo long\n\n";  
            return false;  
        }
    else
        {
            i=atoi(s.c_str());
            return true;
        }      
}
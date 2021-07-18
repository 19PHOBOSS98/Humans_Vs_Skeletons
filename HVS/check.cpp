#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include <random>


#ifdef _WIN32
#define CLEAR "cls"
#include <windows.h>
#else //In any other OS
#define CLEAR "clear"
#include <unistd.h>
#endif

using namespace std;
int h,s;
char p;

bool valid(string hu, string sk);
void sleepcp(int milliseconds);

int main()
{
    system(CLEAR);
    int y=1;
    string hu,sk;
    while(y){
        
        cout<<"** Humans Vs Skeletons **\n";
        cout<<"\nNumber of Humans to send: ";
        getline (cin, hu);
        cout<<"\n\nNumber of Skeletons to send: ";
        getline (cin, sk);

        if(!valid(hu,sk)){
            y=1;
        }else{
            h=atoi(hu.c_str());
            s=atoi(sk.c_str());
        }
        

    }
    return(0);
}


bool valid(string hu, string sk){
    for(int i=0;i<hu.length();++i){
        if (!isdigit(hu[i]))
        {
            cout<<"\n\nbruh those ain't even numbers you're typ'n in\ncome back when you're sober\n(Press any key to continue)";
                cin.get();
                system(CLEAR);
                cout<<"let's do this again, shall we?\n\n";
                return(false);
            }
        
    }

    for(int j=0;j<sk.length();j++){
        if (!isdigit(sk[j]))
            {
                cout<<"\n\nbruh those ain't even numbers you're typ'n in\ncome back when you're sober S\n(Press any key to continue)";
                cin.get();
                system(CLEAR);
                cout<<"let's do this again, shall we?\n\n";
                return(false);
            }
    }

    if ((hu.length()>=7)&&(sk.length()>=7))
    {
        cout<<"\n\n...\n";
        cout<<"\n\n(Press any key to continue)";
        cin.get();
        system(CLEAR);
        cout<<"let's do this again, shall we?\n\n";
        return(false);  
        
    }
    else if (hu.length()>7)
    {
        cout<<"\n\nwhat, you're sending the women and children too?\n(Press any key to continue)";
        cin.get();
        system(CLEAR);
        cout<<"let's do this again, shall we?\n\n";
        return(false);  
    }
    else if (sk.length()>7)
    {
        cout<<"\n\nhow many undead people do you want to die... again?\n(Press any key to continue)";
        cin.get();
        system(CLEAR);
        cout<<"let's do this again, shall we?\n\n";
        return(false);  
    }
    else
    {
        return(true);
    }
    
      
}

void sleepcp(int milliseconds) // Cross-platform sleep function
{
    #ifdef _WIN32
        Sleep(milliseconds);
    #else
        usleep(milliseconds * 1000);
    #endif // _WIN32
}

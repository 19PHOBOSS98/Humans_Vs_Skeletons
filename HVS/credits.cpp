#include<iostream>
#include <ctime>
#include <cstdlib>

#ifdef _WIN32
#define CLEAR "cls"
#include <windows.h>
#else //In any other OS
#define CLEAR "clear"
#include <unistd.h>
#endif
using namespace std;
void credits();
void sleepcp(int milliseconds);

void sleepcp(int milliseconds) // Cross-platform sleep function
{
    #ifdef _WIN32
        Sleep(milliseconds);
    #else
        usleep(milliseconds * 1000);
    #endif // _WIN32
}

int main()
{
        cout<<"HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHHAH\n";
        sleepcp(500);       
        cout<<"HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHHAH\n";
        sleepcp(500);       
        cout<<"HAHAH    AHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAH    AHAHAHAH      AHAHAHAHAHAHAHAH                     HAHAHAHAHAHAHAHAHHAH\n";
        sleepcp(500);
        cout<<"HAHAHA    HAHAHAHAHAHAHAHAHAHAHAHAHAHAHA    HAHAHAH    HA    AHAHAHAHAHAHAH    AHAHAHAHAHAHAHA    AHAHAHAHAHAHAHAHAH\n";
        sleepcp(500);
        cout<<"HAHAHAH    AHAHAHAHAH        AHAHAHAHAH    AHAHAHA    HAHA    HAHAHAHAHAHAH    AHAHAHAHAHAHAHA    HAHAHAHAHAHAHAHAHA\n";
        sleepcp(500);
        cout<<"HAHAHAHA    HAHAHAHA    HA    AHAHAHAHA    HAHAHA    AHAHAH    AHAHAHAHAHAH    AHAHAHAHAHAHA    HAHAHAHAHAHAHAHAHAHA\n";
        sleepcp(500);
        cout<<"HAHAHAHAH    AHAHAH    HAHA    AHAHAH    AHAHAHA                HAHAHAHAHAH                HAHAHAHAHAHAHAHAHAHAHAHAH\n";
        sleepcp(500);
        cout<<"HAHAHAHAHA    HAHA    HAHAHA    HAHA    HAHAHAH    AHAHAHAHAH    AHAHAHAHAH    AHAHAHAH     AHAHAHAHAHAHAHAHAHAHAHAH\n";
        sleepcp(500);
        cout<<"HAHAHAHAHAH    AH    AHAHAHAH    AH    AHAHAHA    HAHAHAHAHAHA    HAHAHAHAH    AHAHAHAHAH     AHAHAHAHAHAHAHAHAHAHAH\n";
        sleepcp(500);
        cout<<"HAHAHAHAHAHA       AHAHAHAHAHA       HAHAHAH    AHAHAHAHAHAHAHAH    AHAHAHA    HAHAHAHAHAHAH     AHAHAHAHAHAHAHAHAHA\n";
        sleepcp(500);
        cout<<"HAHAHAHAHAHAH     AHAHAHAHAHAHA     HAHAHAH    AHAHAHAHAHAHAHAHAH    AHAHAH    AHAHAHAHAHAHAHA     HAHAHAHAHAHAHAHAH\n";
        sleepcp(500);       
        cout<<"HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHHAH\n";
        sleepcp(500);
        cout<<"HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHHAH\n";
        sleepcp(500);
    
        
}


void credits(){

    system(CLEAR);
    cout<<"                CREDITS         \n\n";
    sleepcp(1000);
    cout<<" Script Writer:           PHOBOSS\n\n";
    sleepcp(1000);
    cout<<"    Programmer:           PHOBOSS\n\n";
    sleepcp(1000);
    cout<<"Game Developer:           PHOBOSS\n\n";
    sleepcp(1000);
    cout<<"       PHOBOSS:           KIM NICKHO A. OBORDO\n\n\n\n";
    sleepcp(1000);
    cout<<"        Thank you for playing\n\n";
    sleepcp(1000);
}
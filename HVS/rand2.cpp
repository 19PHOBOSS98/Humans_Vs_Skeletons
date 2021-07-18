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



int main()
{
srand(time(0));
int randomval = rand() % 2;
system(CLEAR);
cout << randomval << endl;
        system(CLEAR);
        cout<<"Everything fell silent..\n\n";
        sleepcp(3000);
        cout<<"a bright light consumed the horizon...\n\n";
        sleepcp(3000);
        cout<<"as it faded...\n\n";
        sleepcp(3000);
        cout<<"darkness was left all alone to cradle the burning flames and feel the warm embrace of the shadows that painted the walls...\n\n";
        sleepcp(8000);
        cout<<"helmets...\n\n";
        sleepcp(2000);
        cout<<"swords...\n\n";
        sleepcp(2000);
        cout<<"shields...\n\n";
        sleepcp(2000);
        cout<<"all slid off of a hand...\n\n";
        sleepcp(4000);
        cout<<"regardless whether with or without skin...\n\n";
        sleepcp(5000);
        cout<<"all that were still eager to stand could not see the clear blue sky... \n\n";
        sleepcp(5000);
        cout<<"platoons dropped their flags\n\n";
        sleepcp(3000);
        cout<<"generals were in tears\n\n";
        sleepcp(3000);
        cout<<"even those no longer with sight... shed ethers\n\n";
        sleepcp(3000);
        cout<<"someone came and torn the pages...\n\n";
        sleepcp(4000);
        cout<<"no one knows how he got the nukes to the land of Euphoria...\n\n";
        sleepcp(4000);
        cout<<"but regardless, his name will forever ring through history...\n\n";
        sleepcp(4000);
        cout<<"Mr.Waddles...\n\n";
        sleepcp(4000);
        cout<<"ha...\n\n";
        sleepcp(2000);
        cout<<"haha...\n\n";
        sleepcp(2000);
        cout<<"hahaha...\n\n";
        sleepcp(1000);
        cout<<"hahahahaha...\n\n";
        sleepcp(1000);
        cout<<"HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAH\n\n";
        sleepcp(500);
        cout<<"HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAH\n\n";
        sleepcp(500);
        cout<<"HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAH\n\n";
        sleepcp(500);
        cout<<"HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAH\n\n";
        sleepcp(500);
        cout<<"*launging dramatically at her students \"photoed\" to the giant statue of a penguin at central park\n\n";
        sleepcp(10000);

        credits();
        
}



void credits(){

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

void sleepcp(int milliseconds) // Cross-platform sleep function
{
    #ifdef _WIN32
        Sleep(milliseconds);
    #else
        usleep(milliseconds * 1000);
    #endif // _WIN32
}
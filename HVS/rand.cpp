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
        sleepcp(4000);
        cout<<"for a while dark skies faded clearer...\n\n";
        sleepcp(5000);
        cout<<"slowly a symphony of metallic clangs started to grow louder...\n\n";
        sleepcp(5000);
        cout<<"helmets...\n\n";
        sleepcp(2000);
        cout<<"swords...\n\n";
        sleepcp(2000);
        cout<<"shields...\n\n";
        sleepcp(2000);
        cout<<"spears...\n\n";
        sleepcp(1000);
        cout<<"arrows...\n\n";
        sleepcp(500);
        cout<<"chestplates...\n\n";
        sleepcp(500);
        cout<<"groin protectors...\n\n";
        sleepcp(500);
        cout<<"all slid off of a hand...\n\n";
        sleepcp(4000);
        cout<<"regardless whether with or without skin...\n\n";
        sleepcp(5000);
        cout<<"all were stepping into the light of a clear blue sky... \n\n";
        sleepcp(5000);
        cout<<"platoons dropped their flags\n\n";
        sleepcp(3000);
        cout<<"generals were in tears\n\n";
        sleepcp(3000);
        cout<<"even those without sight... shed ethers\n\n";
        sleepcp(3000);
        cout<<"a hero has come to unite the pages...\n\n";
        sleepcp(4000);
        cout<<"no one knows how he brought peace to the land of Euphoria...\n\n";
        sleepcp(4000);
        cout<<"but regardless, his name will forever ring through history...\n\n";
        sleepcp(4000);
        cout<<"Mr.Waddles...\n\n";
        sleepcp(4000);
        cout<<"*smiles dramatically at her students taking photos of the giant statue of a penguin at central park\n\n";
        sleepcp(10000);

        credits();
        
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

void sleepcp(int milliseconds) // Cross-platform sleep function
{
    #ifdef _WIN32
        Sleep(milliseconds);
    #else
        usleep(milliseconds * 1000);
    #endif // _WIN32
}
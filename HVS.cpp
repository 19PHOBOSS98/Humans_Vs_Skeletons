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
int h,s;
char p;

void decision();
void penguin();
void goodending();
void badending();
void credits();
void sleepcp(int milliseconds);
int restart();
bool valid(string hu, string sk);




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
            penguin();

            decision();

            y=restart();
        }

    }
}


void decision(){
    default_random_engine chance(time(0));
    uniform_int_distribution<int> war(0,1);
    uniform_int_distribution<int> pinguin(0,3);
    
    int dh=h;
    int ds=s;
    if((pinguin(chance)==3)&&((p=='y')||(p=='Y'))){
        goodending();
        
    }
    else if((pinguin(chance)==3)&&((p=='n')||(p=='N'))){
   	//else if((3==3)&&((p=='n')||(p=='N'))){
        badending();
    }
    
    else{
        while((h>0)&&(s>0)){      
            h=(war(chance)>0 ? h:h-1); //raise or lower the number of units to shave off when chance decides
            s=(war(chance)>0 ? s:s-15);//here chance kills of 15 skeletons each time she gets
            h=(h<0 ? 0:h);
            s=(s<0 ? 0:s);//this makes sure that she doesn't kill more than what units were on the battlefield i.e. initially:s=1 => s=1-15 => s=0, it should NOT be s=-14
        }
        dh=dh-h;
        ds=ds-s;
        cout<<"\n\nStarting war\n";
        sleepcp(1000);
        cout<<"<war noises>\n";
        sleepcp(1000);
        cout<<"war ended\n\n\n";
        sleepcp(1000);
        if(h>s){
            cout<<"The Humans won!\n\n"<<h<<" survived\n\n";
        }
        else if(s>h){
            cout<<"The Skeletons won!\n\n"<<s<<" survived\n\n";
        }else{
            cout<<"Nobody won!"<<endl;
            if((dh==0)&&(ds==0)){
                cout<<"actually nobody showed up..."<<endl;
                if((p=='y')||(p=='Y')){
                cout<<"except for a penguin\n"<<endl;
                }
            }
            if((dh==1)&&(ds==1)){
                cout<<"you should have seen how they both died, it was EPIC!!"<<endl;
            }
        }
        if(dh==1){
            cout<<dh<<" Human died\n\n";
        }
        else if((dh==h)&&(s>0)){
            cout<<"actually the humans didn't show up to fight so the skeletons didn't get to do anything, that's why we gave them a participation award instead\n\n";
            if((p=='y')||(p=='Y')){
                cout<<"there was a penguin tho...\n"<<endl;
                }
        }
        else if (dh==0){
            cout<<" No Humans died\n\n";
        }else{
            cout<<dh<<" Humans died\n\n";// fine, call me a GrammarNazi
        }
        if(ds==1){
            cout<<ds<<" Skeleton got dismantled\n\n";
        }
        else if((ds==s)&&(h>0)){
            cout<<"actually the skeletons didn't show up so the humans didn't earn anything... at all\n\n";
            if((p=='y')||(p=='Y')){
                cout<<"and a penguin bit steve...\n"<<endl;
                }
        } 
        else if (ds==0){
            cout<<" No skeleton got dismantled\n\n";
        }else{
            cout<<ds<<" Skeletons got dismantled\n\n";
        } 
    }
}

void penguin(){
    cout<<"\n\nSend the Penguin in?[y/n]: ";
    cin>>p;
    cin.ignore(1,'\n');
    int x=1;
        if((p=='y')||(p=='Y')){
                cout<<"Release Mr.Waddles!\n\n";
                sleepcp(1000);
            }
        else if((p=='n')||(p=='N')){
        }else{
        
            system(CLEAR);  // clear screen in win/osx/linux
            cout<<"...\n\n";
            sleepcp(1000);
            cout<<"That wasn't a real answer...\n\n";
            sleepcp(1000);
            int z=1;
            while(z){
                cout<<"...should we send the Penguin in?[y/n]: ";
                cin>>p;
                cin.ignore(1,'\n');
                if((p=='y')||(p=='Y')){
                    system(CLEAR);
                    z=0;
                }
                else if((p=='n')||(p=='N')){
                    system(CLEAR);
                    z=0; 
                }else{
                    system(CLEAR);
                    cout<<"That WASN'T a real answer...\n\n";
                    sleepcp(1000);
                    z=1;
                }   
            }
        }    
}

void goodending(){
        system(CLEAR);
        cout<<"Everything fell silent..\n\n";
        cin.get();
        cout<<"for a while dark skies faded clearer...\n\n";
        cin.get();
        cout<<"slowly a symphony of metallic clangs started to grow louder...\n\n";
        cin.get();
        cout<<"helmets...\n\n";
        cin.get();
        cout<<"swords...\n\n";
        cin.get();
        cout<<"shields...\n\n";
        cin.get();
        cout<<"groin protectors...\n\n";
        cin.get();
        cout<<"all slid off of a hand...\n\n";
        cin.get();
        cout<<"regardless whether with or without skin...\n\n";
        cin.get();
        cout<<"all were stepping into the light of a clear blue sky... \n\n";
        cin.get();
        cout<<"platoons dropped their flags\n\n";
        cin.get();
        cout<<"generals were in tears\n\n";
        cin.get();
        cout<<"even those without sight... shed ethers\n\n";
        cin.get();
        cout<<"a hero has come to unite the pages...\n\n";
        cin.get();
        cout<<"no one knows how he brought peace to the land of Euphoria...\n\n";
        cin.get();
        cout<<"but regardless, his name will forever ring through history...\n\n";
        cin.get();
        cout<<"Mr.Waddles...\n\n";
        cin.get();
        cout<<"<smiles dramatically at her students taking photos of the giant statue of a penguin at central park>\n\n\n\n";
        cin.get();

        credits();    
}
void badending(){
        system(CLEAR);
        cout<<"Everything fell silent..\n\n";
        cin.get();
        cout<<"a bright light consumed the horizon...\n\n";
        cin.get();
        cout<<"as it faded...\n\n";
        cin.get();
        cout<<"darkness was left all alone to cradle the burning flames...\n\n";
        cin.get();
        cout<<"and feel the warm embrace of the shadows that painted the walls...\n\n";
        cin.get();
        cout<<"helmets...\n\n";
        cin.get();
        cout<<"swords...\n\n";
        cin.get();
        cout<<"shields...\n\n";
        cin.get();
        cout<<"all slid off of a hand...\n\n";
        cin.get();
        cout<<"regardless whether with or without skin...\n\n";
        cin.get();
        cout<<"all that were still eager to stand could not see the clear blue sky... \n\n";
        cin.get();
        cout<<"platoons dropped their flags\n\n";
        cin.get();
        cout<<"generals were in tears\n\n";
        cin.get();
        cout<<"even those no longer with sight... shed ethers\n\n";
        cin.get();
        cout<<"someone came and torn the pages...\n\n";
        cin.get();
        cout<<"no one knows how he activated the nukes...\n\n";
        cin.get();
        cout<<"but regardless, his name will forever ring through history...\n\n";
        cin.get();
        cout<<"Mr.Waddles...\n\n";
        cin.get();
        cout<<"ha...\n\n";
        sleepcp(1000);
        cout<<"haha...\n\n";
        sleepcp(1000);
        cout<<"hahaha...\n\n";
        sleepcp(500);
        cout<<"hahahahaha...\n\n";
        sleepcp(500);
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
        
        cout<<"<launging dramatically at her students \"PHOTOED\" to the sides of the giant statue of a penguin at central park>\n\n\n\n";
        sleepcp(4000);

        credits();
}


void credits(){

    cout<<"                CREDITS         \n\n";
    cin.get();
    cout<<" Script Writer:           PHOBOSS\n\n";
    cin.get();
    cout<<"    Programmer:           PHOBOSS\n\n";
    cin.get();
    cout<<"Game Developer:           PHOBOSS\n\n";
    cin.get();
    cout<<"       PHOBOSS:           KIM NICKHO A. OBORDO\n\n\n\n";
    cin.get();
    cout<<"        Thank you for playing\n\n";
    cin.get();
}

void sleepcp(int milliseconds) // Cross-platform sleep function
{
    #ifdef _WIN32
        Sleep(milliseconds);
    #else
        usleep(milliseconds * 1000);
    #endif // _WIN32
}

int restart(){

    cout<<"\n\nStart a war again?[y/n]: ";
        cin>>p;
        cin.ignore(1,'\n');

        
        

        if((p=='y')||(p=='Y')){
            system(CLEAR);
            cout<<"Ah sh*t here we go again\n\n";
            return(1);
        }
        else if((p=='n')||(p=='N')){
            system(CLEAR);
            cout<<"Ight Imma Head Out\n\n";
            return(0);
        }else{
            system(CLEAR);
            cout<<"...\n\n";
            sleepcp(1000);
            cout<<"That wasn't a real answer...\n\n";
            sleepcp(1000);
            int x=1;
            while(x){
                cout<<"Do you want to start a new war or not?[y/n] \n\n";
                cin>>p;
                cin.ignore(1,'\n');
                if((p=='y')||(p=='Y')){
                    system(CLEAR);
                    cout<<"Ah sh*t here we go again\n\n";
                    x=0;
                    return(1);
                }
                else if((p=='n')||(p=='N')){
                    system(CLEAR);
                    cout<<"Ight Imma Head Out\n\n";
                    x=0;
                    return(0);
                }else{
                    system(CLEAR);
                    cout<<"That WASN'T a real answer...\n\n";
                    sleepcp(1000);
                    x=1;
                }   
            }
        }
}

bool valid(string hu, string sk){
    for(int i=0;i<hu.length();++i){
        if (!isdigit(hu[i]))
        {
            cout<<"\n\nbruh those ain't even numbers you're typ'n in\ncome back when you're sober \n(Press Enter to continue)";
                cin.get();
                system(CLEAR);
                cout<<"let's do this again, shall we?\n\n";
                return(false);
            }
        
    }

    for(int j=0;j<sk.length();j++){
        if (!isdigit(sk[j]))
            {
                cout<<"\n\nbruh those ain't even numbers you're typ'n in\ncome back when you're sober \n(Press Enter to continue)";
                cin.get();
                system(CLEAR);
                cout<<"let's do this again, shall we?\n\n";
                return(false);
            }
    }

    if ((hu.length()>=7)&&(sk.length()>=7))
    {
        cout<<"\n\n...\n";
        sleepcp(3000);
        cout<<"\n\nit should be a war crime to send that many people to war\n (Press Enter to continue)";
        cin.get();
        system(CLEAR);
        cout<<"let's do this again, shall we?\n\n";
        return(false);  
        
    }
    else if (hu.length()>7)
    {
        cout<<"\n\nwhat, you're sending the women and children too?\n (Press Enter to continue)";
        cin.get();
        system(CLEAR);
        cout<<"let's do this again, shall we?\n\n";
        return(false);  
    }
    else if (sk.length()>7)
    {
        cout<<"\n\nhow many undead people do you want to die... again?\n (Press Enter to continue)";
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
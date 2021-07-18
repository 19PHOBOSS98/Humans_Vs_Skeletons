#include<iostream>
#include<ctime>
#include <random>

using namespace std;

int randNumi(int a,int b);
float randNumf(float a,float b);


int main(){

    cout<<randNumi(-1,1)<<endl;
    cout<<randNumf(1.234f,12.342f)<<endl;
    cout<<randNumi(5,1)<<endl;

}

 /*
 generates random number from "a" to "b"
 be sure a<b
 */

int randNumi(int a,int b){         
    static default_random_engine chance(time(0));
    uniform_int_distribution<int> range(a,b);
    return range(chance);
}

float randNumf(float a,float b){         
    static default_random_engine chance(time(0));
    uniform_int_distribution<float> range(a,b);
    return range(chance);
}
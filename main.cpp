#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

class kolkokrzyzyk{
    int tab[9] = {0,0,0,0,0,0,0,0,0};
    char tabc[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int o = 1;
    int x = 2;
public:

     void user(){
        while(true){
            int pole;
            cout<<"Podaj pole:"<<endl;
            cin>>pole;

            if(tab[pole]==0){
                tab[pole] = o;
                break;
            }
        }
     }

     void computer(){
        while(true){
            int ran = rand()%8;
            if(tab[ran]==0){
                tab[ran] = x;
                break;
            }
        }
     }

     int sprawdz(){
        if(tab[0]==o && tab[3]==o && tab[6]==o) return o;
        else if(tab[1]==o && tab[4]==o && tab[7]==o) return o;
        else if(tab[2]==o && tab[5]==o && tab[8]==o) return o;

        else if(tab[0]==o && tab[1]==o && tab[2]==o) return o;
        else if(tab[3]==o && tab[4]==o && tab[5]==o) return o;
        else if(tab[6]==o && tab[7]==o && tab[8]==o) return o;

        else if(tab[0]==o && tab[4]==o && tab[8]==o) return o;
        else if(tab[6]==o && tab[4]==o && tab[2]==o)return o;

        else if(tab[0]==x && tab[3]==x && tab[6]==x) return o;
        else if(tab[1]==x && tab[4]==x && tab[7]==x)return o;
        else if(tab[2]==x && tab[5]==x && tab[8]==x)return o;

        else if(tab[0]==x && tab[1]==x && tab[2]==x) return o;
        else if(tab[3]==x && tab[4]==x && tab[5]==x) return o;
        else if(tab[6]==x && tab[7]==x && tab[8]==x) return o;

        else if(tab[0]==x && tab[4]==x && tab[8]==x) return o;
        else if(tab[6]==x && tab[4]==x && tab[2]==x) return o;

        else return -1;
     }

    void wyswietl(){
        for(int i=0;i<9;i++){
            if(tab[i]==0) tabc[i] = ' ';
            else if(tab[i]==1) tabc[i] = 'o';
            else if(tab[i]==2) tabc[i] = 'x';
        }
        cout<<"["<<tabc[0]<<"]";  cout<<"["<<tabc[1]<<"]";  cout<<"["<<tabc[2]<<"]"<<endl;
        cout<<"["<<tabc[3]<<"]";  cout<<"["<<tabc[4]<<"]";  cout<<"["<<tabc[5]<<"]"<<endl;
        cout<<"["<<tabc[6]<<"]";  cout<<"["<<tabc[7]<<"]";  cout<<"["<<tabc[8]<<"]"<<endl;
    }

    void gra(){

        while(sprawdz()==-1){
            user();
            computer();
            wyswietl();
        }
    }

};

int main()
{
    srand(time(NULL));
    kolkokrzyzyk a;
    a.gra();
    return 0;
}

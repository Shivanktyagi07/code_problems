#include<iostream>
//#include"hero.cpp"
using namespace std;

class hero{
       
       private:
    int health;
    public:
    char level;
     hero(){
        
     }
    hero(int health){
        cout<<"ths="<<this<<endl;
        this ->health=health;
    }
     hero(int health, char level){
        //cout<<"ths="<<this<<endl;
        this ->health=health;
        this ->level=level;
    }
void print(){
    cout<<health<<endl;
    cout<<level<<endl;
}



        int getHealth() {
            return health;
        }

        char getLevel() {
            return level;
        }
        
       void setHealth(int h){
           health=h;
       }
        void setLevel(int ch){
            level =ch;
        }
        
    
};
int main(){
  //static allocation;
    hero h1;
    //cout<<"reamesh health is="<<h1.getHealth()<<endl;
   h1.setHealth(11);
//cout<<"level is ="<<h1.getLevel()
      h1.level='a';
   // cout<<"size ="<<sizeof(h1)<<endl;
    cout<<"health of h1 is ="<<h1.getHealth()<<endl;
    cout<<"level is ="<<h1.level;

    //dynamic allocatio:
   hero *h2= new hero;
   cout<<"helath of h2 is="<<h2->getHealth()<<endl;
   h2->setHealth(12);
   h2->setLevel('a');
   cout<<"health ="<<h2->getHealth()<<endl;
 cout<<"level is="<<h2->level;


//hero h3;








 /*hero h1(10);
 cout<<"address of health is="<<&h1<<endl;;
  hero temp(22,'b');
  temp.print();*/
    return 0;

    }






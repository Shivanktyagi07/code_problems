#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void getrollno(int d){
        rollno=d;

    }
    void showrollno(){
        cout<<"roll no is : "<<rollno<<endl;
    }

};
class marks: virtual public student{
    protected:
    float marks ;
    float marks1;
    public:
    void getmarks(float a,float b){
        marks=a;
        marks1=b;

    }
    void showmarks(){
        cout<<"marks of boths subjects "<<marks<<marks1<<endl;
    }
};
class score:virtual public marks{
    protected:
    int score;
    public:
    void getscore(int c){
        score=c;
    }
    void showscore(){
        cout<<"score is : "<<score<<endl;
    }
};
class result:public score,virtual public marks{
    int total;
    public:
    void display(){
        total=marks+marks1+score;
        showrollno();
        showmarks();
        showscore();
        cout<<"total is :"<<total<<endl;



    }

};
int main(){
    result r;
    r.getrollno(5);
    r.getmarks(90.2 , 89.9);
    r.getscore(10.2);
    r.display();
}
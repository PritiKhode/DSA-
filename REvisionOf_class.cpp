#include<iostream>
using namespace std;
class Student {
    public :
    string name ;
    int rno;
    float percentage;
    Student(string name,int rno ,float percentage){
        this->name=name;
        this->rno =rno;
        this->percentage =percentage;
    }
    // Student(string n ,int r ,float p){
        // name = n;
        // rno =r;
        // percentage = p;

};

void change(Student* s){
    s->name = "raghav";

}
int main(){
    Student s("Priti",102,89.8);
    //Student *ptr =&s;
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name;


   // (*ptr).name = "raghav";
    // s.name="prit";
    // s.rno =102;                                // Student* s = new Student("Raghv",12,89.8) - also declared like this
    // s.percentage =89.8;                          // cout<<s->name;
    //ptr->name ="Sanket";
    //cout<<s.name<<endl;


}
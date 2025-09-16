// #include<iostream>
// using namespace std;

// class Teacher{
// public:
//     string name;
//     string dept;
//     string sub ;

//     Teacher(string name,string dept,string sub){   // Constructor
//         this->name = name;
//         this->dept = dept;
//         this->sub  = sub;
//     }
//     void getinfo(){
//         cout<<"name: "<<name<<"\n";
//         cout<<"dept: "<<dept<<" ";
//     }
//     Teacher(Teacher &org_obg){
//         cout<<"I am custom Copy Contructor \n";
//         this->name = org_obg.name;
//         this->dept = org_obg.dept;
//         this->sub = org_obg.sub;

//     }
// };

// int main(){

//     Teacher t1("Gaurav","SM","C++");
//     // t1.getinfo();

//     Teacher t2(t1);
//     t2.getinfo();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class student{
// public:
//     string name;
//     string *branchptr;

//     student(string name,string branch){    // Constructor
//         this->name = name;
//         branchptr = new string;
//         *branchptr = branch;
//     }

//     student (student &obj){
//         this->name = obj.name;
//         branchptr = new string;
//         *branchptr = *obj.branchptr;
//     }

//     void getinfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"branch: "<<*branchptr<<endl;
//     }

// };

// int main(){


//     student s1("Gaurav","SM");
//     s1.getinfo();
//     student s2(s1);
//     *(s2.branchptr) = "CS";  // We are doing changes in s2 but it is also changes in s1 because of pointers to 
//     s1.getinfo();            // overcome this make our own constructor like above :- 
//     s2.name = "Gaur";
//     s2.getinfo();

//     return 0;
// }


// DESTRUCTOR => OPP OF CONSTRUCTOR

// #include<iostream>
// using namespace std;

// class student{
// public:
//     string name;
//     int roll;
//     student(string name,int roll){
//         this->name = name;
//         this->roll = roll;
//     }

//     void getinfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"Roll: "<<roll<<endl;
//     }

//     ~student(){
//         cout<<"I delete Everything"; // destrcutor will  called 1automatically
//     }

// };

// int main(){

//     student s1("Gaur",25);

//     s1.getinfo();
    

//     return 0;
// }


// INHERITANCE => when properties and member function of base class are passed on to the derived class


// #include<iostream>
// using namespace std;

// class person{
// public:

//     string name;
//     int age;

//     // person(string name, int age){
//     //     this->name = name;
//     //     this->age = age;
//     // }

//     person(){
//         cout<<"I am person class \n";
//     }
// };

// class Student: public person{
// public:

//     int roll;

//     Student(){
//         cout<<"I am student class \n";
//     }
    
//     void getinfo(){
//         cout<<"name: "<<name<<endl;
//         cout<<"age: "<<age<<endl;
//         cout<<"roll: "<<roll<<endl;
//     }
// };


// int main(){

//     Student s1;

//     s1.name = "Gaur";
//     s1.roll = 25;
//     s1.age = 19;   
//     s1.getinfo();

    

//     return 0;
// }


// POLYMORPHISM // => ability of object  to take on different forms depending on the context

// 1.) compile time polymorphism -> Constructor overloading 
// #include<iostream>
// using namespace std;


// class Student{
// public:
//     Student(){
//         cout <<"parameterized \n";

//     }

//     string name;

//     Student(string name){
//         this->name = name;
//     }

//     int roll;
//     int age;

//     Student(int age, int roll){
//         this->age = age;
//         this->roll = roll;
//     }

// };

// int main(){

//     Student s1;

//     Student s2("gaur");

//     Student s3(19,25);   

//     return 0;
// }

// 2.) FUNCTION OVERLOADING

// #include<iostream>
// using namespace std;


// class Print{
// public:
//     void show(int x){
//         cout<<x<<endl;
//     }

//     void show(char ch){
//         cout<<ch<<endl;
//     }

// };

// int main(){

//     Print p;

//     p.show(5);
//     p.show('a');

       

//     return 0;
// }


// 3.) FUNCTION OVERRIDING

#include<iostream>
using namespace std;

// class parent{
// public:
//     void show(int x){
//         cout<<x<<endl;
//     }

// };
// class child: public parent{
// public:
//     void show(char x){
//         cout<<x;
//     }

// };

// int main(){

//     parent p;

//     p.show(2);

//     child c;
//     c.show('a');    

//     return 0;
// }

// VIRTUAL KEYWORD


// class Parent {
// public:
//     void show(int x){
//         cout<<x<<endl;
//     }

//     virtual void show1(){
//         cout<<"Parent"<<endl;
//     }
// };

// class child: public Parent {
// public:
//     void show(){
//         cout<<"child"<<endl;
//     }

//     void show1(){
//         cout<<"child";
//     }
// };

// int main(){

//     child c;
//     c.show1();

//     return 0;
// }

// ABSTRACTION : hiding all unnecessary details and showing only the omportant parts
//1.) access modifiers => public , private , protected

// 2.) abstract classes 

// class shape{ // abstract class 
// public:
//     virtual void draw() = 0; 

// };

// class circle : public shape{
// public:
//     void draw(){
//         cout<<"circle";
//     }
// };

// int main(){

//     circle c;
//     c.draw();

//     return 0;
// }

// Static keyword //

void loop1(){
    int x = 0;
    cout<<x<<" ";
    x++;
}

void loop2(){
    static int x = 0;
    cout<<x<<" ";
    x++;
}

int main(){

    loop1();loop1();
    loop2();loop2();loop2();



}
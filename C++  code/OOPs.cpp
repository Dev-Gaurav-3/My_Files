#include<iostream>
#include<complex>
using namespace std;


class fruit{
public:         // By default class is privte to make it accesible add public keyword //

    string name;
    string color;



};

class rectangle {
public:

    int l;
    int b;

    rectangle(){ //Default constructor - no args passed 
        l = 0;
        b = 0;
    }

    rectangle(int x,int y){  //Parameterised constructor 
        l = x;
        b = y;
    }

    rectangle(rectangle &r){  // Copy constructor => initialize an object by another existing object 
        l= r.l;
        b = r.b;
    }

    ~rectangle(){

        cout<<"Destructor is called"<<endl;

    }

};

class abc{
    int x;

    public:
    void set(int n){
        x = n;
    }

    int get(){
        return x;
    }

};


class parent{

    public:

    int x ;

    protected:

    int y;

    private:

    int z;

};

class child1: public parent{

    // x will be accessible.
    // y will be protected.
    // z will not be accessible.    

};

class child2 : private parent{

    // x & y will be private 
    // z will not be accessible 

};

class child3 : protected parent{

    //x & y will be protected 
    // z will be inaccessible

};

// Single ingheritance 

class parent1{

    public:
        parent1(){
            cout<<"Parent Class"<<endl;
        }
};

class child4 : public parent1{

    public: child4(){
        cout<<"Child Class"<<endl;
    }

};

class grandchild: public child4{
public:
    grandchild(){
        cout<<"Grand child"<<endl;
    }
};

// class child5: public parent1,public child4{
// public:
//     child5(){
//         cout<<"child5";
//     }
// };

// int main(){

    // OOPs = Object Oriented programming //

    // class => User defined datatype //

    // Object => variable of type class //


    // fruit apple;

    // apple.name = "Apple";
    // apple.color = "Red";

    // cout<<apple.name<<" "<<apple.color<<"\n";

    // fruit *mango = new fruit();  // Here mango is object pointer

    // mango -> name = "Mango";
    // mango -> color  = "Yellow";

    // cout<<mango->color<<" "<< mango->name<<endl;

    // Constructor => Used to  initialize an object , it is the function which is called when an object is created , same name as class name 
    // its types => 1) Default 2) Parameterized 3) copy

    // rectangle *r1 = new rectangle();
    // cout<<r1->l<<" "<<r1->b<<endl;
    // delete r1;
    // rectangle r2(3,4);

    // cout<<r2.l<<" "<<r2.b<<endl;

    // rectangle r3 = r2;

    // cout<<r3.l<<" "<<r3.b<<endl;

    // DESTRUCTOR => Funtion is called when objecty is deleted , Cannot pass any opertor   

    // ENCAPSULATION => binding of methods and variable together in a single unit , data is only accessible from class methods , also leads to data hiding

    // abc obj1;

    // obj1.set(7);
    // cout<<obj1.get()<<endl;

    // ABSTRACTION => enables us to display only essential info (eg - pow(x,y) )

    // INHERITANCE = a class inherit prop. of another class 

    // modes of Inhertance :

    // 1 - public => They can be accessed from anywhere in code.
    // 2 - protected => ----------------- in parent class and child class.
    // 3 - private => ------------------- only in own class.


    // TYPES OF INHERITANCE

    // 1) Single Inheritance

    // child4 c;

    // 2) Multilevel --------.

    // grandchild(); 

//     child5();

    



//     return 0;
// }

// class Sum{

//     public:
//         void add(int x, int y){
//             int sum = x+y;
//             cout<<sum<<"\n";
//         }
        
//         void add(int x, int y,int z){
//             int sum = x+y+z;
//             cout<<sum<<"\n";
//         }

//         void add(float x, float y){
//             float sum = x+y;
//             cout<<sum<<endl;
//         }
// };

// int main(){

//     Sum s;
//     s.add(3,4);
//     s.add(2,3,4);
//     s.add(float(2.3),float(2.7));

//     return 0;

// }

// class Complex {
//     public:

//     int real;
//     int img;

//     Complex(int x,int y){
//         real = x;
//         img = y;


//     }

//     Complex operator+ (Complex &c){

//         Complex ans(0,0);
//         ans.real = real + c.real;
//         ans.img = img + c.img;

//         return ans;


//     }
    

// };

// int main(){

//     Complex c1(1,2);
//     Complex c2(3,4);

//     Complex c3  = c1+c2;

//     cout<<c3.real<<" + "<<c3.img<<"i";

//     return 0;
// }

// runtime polymorphism // => resolved at runtime , using function overriding

// class Parent{

//     public:
//     virtual void print(){
//         cout<<"Parent class"<<endl;
//     }

//     void show(){
//         cout<<"Parent class"<<endl;
//     }
// };

// class child: public Parent{

//     public:
//     void print(){
//         cout<<"Child class"<<endl;
//     }

//     void show(){
//         cout<<"Child class"<<endl;
//     }
    
// };

// int main(){

//     Parent *p;
//     child c;

//     p = &c;

//     p->print();
//     p->show();


    
//     return 0;
// }

// FRIEND FUNCTION // => which can access private member of the class 

class A{

    int x;

    public:
        A(int y){
            x = y;
        }

    friend void print(A &obj);

};

void print(A &obj){
    cout<<obj.x<<endl;
}

int main(){

    A obj(5);

    print(obj);

    return 0;
}
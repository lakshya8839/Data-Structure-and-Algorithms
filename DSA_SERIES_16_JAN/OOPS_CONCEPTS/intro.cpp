#include<iostream>
using namespace std;

class Hero {

    //properities or Data Members
    private:
    int health;

    public:
    char level;

    // // Default constuctor
    // Hero() {
    //     cout << "Constructor is called" << endl;
    // }

    //private:                //Can be accessed inside the class only.
    //char level;

    Hero() {
        cout << "Simple constructor called" << endl;
    }

    Hero(int health) {  //parameterized constructor
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health - health;
    }

    void print(){
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth() {     //getter
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {   //setter


        health = h;


        // if(name == 'A') {
        //     //some condition we can put so that only 'a' can access it.
        // }
        
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {

    Hero S(70, 'C');
    S.print();

    Hero R(S);
    R.print();







    // //object called statically
    // Hero ramesh(10);
    // //cout << "Address of ramesh " << &ramesh << endl;
    // ramesh.print();

    // //dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();




    /*
    //static allocation 
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is: " << a.level << endl;
    cout << "health is: " << a.getHealth() << endl;
    

    //dynamically
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is: " << (*b).level << endl;
    cout << "health is: " << (*b).getHealth() << endl;

    cout << "level is: " << b->level << endl;
    cout << "health is: " << b->getHealth() << endl;
    */

    // //creation of Object
    // Hero ramesh;
    // cout << "Size of Ramesh is " << sizeof(ramesh) << endl;
    // cout << "Ramesh health is " <<  ramesh.getHealth() << endl;

    // //ramesh.health = 70;
    // ramesh.level = 'A';

    // cout << "health is: " << ramesh.getHealth() << endl;
    // cout << "Level is: " << ramesh.level << endl;
    // //cout << "size : " << sizeof(h1) << endl;

    return 0;
}
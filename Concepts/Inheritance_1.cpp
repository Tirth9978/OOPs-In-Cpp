/*

It is possible to inherit attributes and methods from one
class to other classes.We called them as Inheritance.

*/



#include<iostream>
#include<string>
using namespace std;

// Parent Class
class human{
     private : 
          
     
     public : 
          string name ;
          int age ;
          int height ;

          // human(string name,int age,int height){
          //      this->name = name;
          //      this->age = age;
          //      this->height = height;
          // }

          human(){
               cout << "Human Class Open :)\n";
          }
};


// Child Class

/*
Syntax :
     class Child_class_name : Access_specifier Parent_class_name{
          //code
     }
*/
class male : public human{
     
     public : 
          string nationality ;

          male(){
               cout << "Male Class Open :)\n";
          }
};

int main(){
     male m1;
     m1.age = 20;
     m1.height = 5.8;
     m1.name = "John";
     cout << "Age : " << m1.age << endl;
     cout << "Height : " << m1.height << endl;
     cout << "Name : " << m1.name << endl;
     

     return 0;
}

/*

OutPut : 
     Human Class Open :)
     Male Class Open :)
     Age : 20
     Height : 5.8
     Name : John

*/

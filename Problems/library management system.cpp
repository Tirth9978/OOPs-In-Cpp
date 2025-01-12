#include<iostream>
#include<string>
using namespace std;

class books{
     public : 
          string name ;
          string book_Id;
          string author;
          string language;
          books *next;
          books(string name,string book_Id,string author,string language){
               this->name = name ;
               this->book_Id = book_Id;
               this->author = author;
               this->language = language;
               this->next = NULL;
          }

          void GetInfo(){
               cout << "Name : " << name << endl;
               cout << "Book Id : " << book_Id << endl;
               cout << "Author : " << author << endl;
               cout << "Language : " << language << endl; 
          }
};

void Subject_Search(books * head,string str){
     int i=1;
     while(head != NULL){
          if (head->name.find(str) != str.npos){
               printf("\n\nBook %d: \n",i);i++;
               cout << "Book : " << head->name << endl;
               cout << "Book ID : " << head ->book_Id <<endl;
               cout << "Author : " << head -> author <<endl;
               cout << "Language : " << head -> language <<endl << endl;
          }
          head=head->next;
     }
     if (i == 1){
          cout << "Data Not Found :(\n";
          // search();
     }
     return ;
}

void ID_Search(books * head,string str){
     int i=1;
     while(head != NULL){
          if (head->book_Id == str){
               i++;
               cout << "Book : " << head->name << endl;
               cout << "Book ID : " << head ->book_Id <<endl;
               cout << "Author : " << head -> author <<endl;
               cout << "Language : " << head -> language <<endl << endl;
          }
          head=head->next;
     }
     if (i == 1){
          cout << "Data Not Found :(\n";
          cout << "This Book is not in self :)\n";
          // search();
     }
     return ;
}

void Author_Search(books * head,string str){
     int i=1;
     while(head != NULL){
          if (head->author == str){
               i++;
               cout << "Book : " << head->name << endl;
               cout << "Book ID : " << head ->book_Id <<endl;
               cout << "Author : " << head -> author <<endl;
               cout << "Language : " << head -> language <<endl << endl;
          }
          head=head->next;
     }
     if (i == 1){
          cout << "Data Not Found :(\n";
          cout << "This Book is not in self :)\n";
          // search();
     }
     return ;
}

void search(books * head){
     cout << "Hello , Welcome to Tirth search :)\n";
     cout << "Choose the Option to search(Choose the int):\n";
     cout << "(1) Subject. \n(2)Book ID. \n(3)With Author Name.\n";
     int ref ;
     cout << "Enter the number : ";
     cin >> ref;

     while(ref > 3 || ref <=-1){
          cout << "Please Enter the valid Num\n";
          cout << "Enter the number : ";cin >> ref;
     }

     if (ref == 1){
          string str ;
          cout << "Subject Name : ";
          cin >> str;
          Subject_Search(head,str);
     }
     else if (ref == 2){
          string str ;
          cout << "Book ID : ";
          cin >> str;
          ID_Search(head,str);
     }
     else if(ref == 3) {
          string str ;
          cout << "Author Name : ";
          cin >> str ;
          Author_Search(head,str);
     }
}

int main(){
     books * b1 = new books("C++","123","Bjarne Stroustrup","English");
     books * b2 = new books("Java","124","James Gosling","English");
     b1->next = b2;
     books * b3 = new books("Python","125","Guido van Rossum","English");
     b2->next = b3;
     books * b4 = new books("C","126","Dennis Ritchie","English");
     b3->next = b4;
     books * b5 = new books("C#","127","Anders Hejlsberg","English");
     b4->next = b5;
     books * b6 = new books("JavaScript","128","Brendan Eich","English");
     b5->next = b6;
     books * b7 = new books("PHP","129","Rasmus Lerdorf","English");
     b6->next = b7;
     books * b8 = new books("Ruby","130","Yukihiro Matsumoto","English");
     b7->next = b8;
     books * b9 = new books("Swift","131","Chris Lattner","English");
     b8->next = b9;
     books * b10 = new books("Go","132","Robert Griesemer","English");
     b9->next = b10;
     books * b11 = new books("Rust","133","Graydon Hoare","English");
     b10->next = b11;
     books * b12 = new books("Kotlin","134","JetBrains","English");
     b11->next = b12;
     books * b13 = new books("TypeScript","135","Microsoft","English");
     b12->next = b13;
     books * b14 = new books("Perl","136","Larry Wall","English");
     b13->next = b14;
     books * b15 = new books("Scala","137","Martin Odersky","English");
     b14->next = b15;
     books * b16 = new books("Haskell","138","Simon Peyton Jones","English");
     b15->next = b16;
     books * b17 = new books("Lua","139","Roberto Ierusalimschy","English");
     b16->next = b17;
     books * b18 = new books("R","140","Ross Ihaka","English");
     b17->next = b18;
     books * b19 = new books("Dart","141","Google","English");
     b18->next = b19;
     books * b20 = new books("Julia","142","Jeff Bezanson","English");
     b19->next = b20;
     books * b21 = new books("Erlang","143","Joe Armstrong","English");
     b20->next = b21;
     books * b22 = new books("Clojure","144","Rich Hickey","English");
     b21->next = b22;
     books * b23 = new books("F#","145","Microsoft","English");
     b22->next = b23;
     books * b24 = new books("COBOL","146","Grace Hopper","English");
     b23->next = b24;
     books * b25 = new books("Fortran","147","John Backus","English");
     b24->next = b25;
     books * b26 = new books("Pascal","148","Niklaus Wirth","English");
     b25->next = b26;
     books * b27 = new books("Ada","149","Jean Ichbiah","English");
     b26->next = b27;
     books * b28 = new books("Prolog","150","Alain Colmerauer","English");
     b27->next = b28;
     books * b29 = new books("Lisp","151","John McCarthy","English");
     b28->next = b29;
     books * b30 = new books("Smalltalk","152","Alan Kay","English");
     b29->next = b30;
     books * b31 = new books("Scheme","153","Gerald Jay Sussman","English");
     b30->next = b31;
     books * b32 = new books("Racket","154","Matthias Felleisen","English");
     b31->next = b32;
     books * b33 = new books("Elixir","155","José Valim","English");
     b32->next = b33;
     books * b34 = new books("Objective-C","156","Brad Cox","English");
     b33->next = b34;
     books * b35 = new books("Objective-C++","157","Brad Cox","English");
     b34->next = b35;
     books * b36 = new books("Visual Basic","158","Microsoft","English");
     b35->next = b36;
     books * b37 = new books("Visual Basic .NET","159","Microsoft","English");
     b36->next = b37;
     books * b38 = new books("Perl 6","160","Larry Wall","English");
     b37->next = b38;
     books * b39 = new books("Scratch","161","MIT","English");
     b38->next = b39;
     books * b40 = new books("COBOL","162","Grace Hopper","English");
     b39->next = b40;
     books * b41 = new books("Logo","163","Seymour Papert","English");
     b40->next = b41;
     books * b42 = new books("Alice","164","Randy Pausch","English");
     b41->next = b42;
     books * b43 = new books("Turing","165","Chris Stephenson","English");
     b42->next = b43;
     books * b44 = new books("Q#","166","Microsoft","English");
     b43->next = b44;
     books * b45 = new books("K","167","Arthur Whitney","English");
     b44->next = b45;
     books * b46 = new books("APL","168","Kenneth E. Iverson","English");
     b45->next = b46;
     books * b47 = new books("BASIC","169","John G. Kemeny","English");
     b46->next = b47;
     books * b48 = new books("Forth","170","Charles H. Moore","English");
     b47->next = b48;
     books * b49 = new books("ML","171","Robin Milner","English");
     b48->next = b49;
     books * b50 = new books("OCaml","172","Xavier Leroy","English");
     b49->next = b50;
     books * b51 = new books("Standard ML","173","Robin Milner","English");
     b50->next = b51;
     books * b52 = new books("D","174","Walter Bright","English");
     b51->next = b52;
     books * b53 = new books("Rexx","175","Mike Cowlishaw","English");
     b52->next = b53;
     books * b54 = new books("Bash","176","Brian Fox","English");
     b53->next = b54;
     books * b55 = new books("PowerShell","177","Microsoft","English");
     b54->next = b55;
     books * b56 = new books("AWK","178","Alfred Aho","English");
     b55->next = b56;

     search(b1);
     return 0;
}

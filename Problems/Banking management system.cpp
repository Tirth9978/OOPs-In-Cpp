#include<iostream>
#include<string>
using namespace std;

class bank{
     private : 
          string name ;
          string AccountID;
          int PIN;
          float Amount ;
     public :
          bank * next ;
          bank(string name , string AccountID,int PIN,float Amount){
               this->name = name ;
               this->AccountID = AccountID;
               this->PIN = PIN;
               this->Amount = Amount;
               this->next = NULL;
          }
          bool IdMatch(string id){
               return this->AccountID == id;
          }
          void GetInfo(){
               cout << "Name : "<< this->name <<endl;
               cout << "Account ID : " << this->AccountID <<endl;
          }
          void Chenk_amount(){
               int PIN ;
               cout << "PIN : ";
               cin >> PIN;
               if (this -> PIN == PIN){
                    cout << "Your Current Amount : " << this->Amount <<endl;
                    cout << "Thnak You :)\n";
               }
               else {
                    cout << "Worng PIN :(\n\n\n";
                    this->Chenk_amount();
               }
          }
          void Add_Amount(){
               float add;
               cout << "Enter the Amount to add : ";
               cin >> add;
               int PIN;
               cout << "PIN : ";
               cin >> PIN;
               if (this->PIN == PIN){
                    this->Amount += add;
                    cout << "Your Amount Added to your account :)\n";
                    cout << "Your Amount : " << this->Amount << endl;
               }
               else {
                    cout << "Wrong PIN :(\n\n";
                    this->Add_Amount();
               }
          }
          void pay(){
               float pay;
               string ID ;

               cout << "Enter the UPI ID : ";
               cin >> ID;
               cout << "Enter the amount to pay : ";
               cin >> pay;
               cout << "PIN : ";
               int PIN;
               cin >> PIN;
               if (PIN != this->PIN){
                    cout << "Wrong PIN :(\n\n";
                    this->pay();
               }
               else if (pay <= this->Amount){
                    this->Amount-=pay;
                    cout << "Money successfully transfer to this " << ID << endl << endl;;
               }
               else if (pay > this->Amount) {
                    cout << "Your Account hasn't enough amount :(\n\n";
               }
          }

};

void ref_fun(bank * head,string id ,int a){
     bool find = false;
     while(head != NULL){
          if (head->IdMatch(id)){
               if (a==1)head->GetInfo();
               else if (a==2)head->Chenk_amount();
               else if (a==3)head->Add_Amount();
               else head->pay();
               find = true;
               break;
          }
          head=head->next;
     }
     if (!find){
          cout << "Data Not Found:)\n\n";
     }
     return ;
}

void start(bank * head){
     int a ;
     cout << "(1)Get Information \n(2)Check Amount \n (3)Add Amount \n (4) Pay\n";
     cout << "Enter : ";
     cin >> a ;
     while(a > 4 || a < 0){
          cout << "Not Valid \n";
          cout << "Enter Again : ";
     }
     string id ;
     cout << "Enter the ID : ";
     cin >> id;
     ref_fun(head,id,a);
}

int main(){
     bank* b1 = new bank("Tirth Patel", "1234", 9978, 100235.343);
     bank* b2 = new bank("Aarav Shah", "5678", 1123, 54321.12);
     bank* b3 = new bank("Riya Mehta", "9101", 3345, 12458.78);
     bank* b4 = new bank("Vihan Desai", "1213", 4567, 87594.56);
     bank* b5 = new bank("Anika Joshi", "1415", 8890, 65423.90);
     bank* b6 = new bank("Ishaan Gupta", "1617", 7788, 42987.34);
     bank* b7 = new bank("Myra Patel", "1819", 6677, 32145.67);
     bank* b8 = new bank("Krish Rao", "2021", 5566, 27549.89);
     bank* b9 = new bank("Zara Singh", "2223", 4455, 14987.45);
     bank* b10 = new bank("Vivaan Shah", "2425", 3344, 59748.23);
     bank* b11 = new bank("Aryan Mehta", "2627", 2233, 84756.12);
     bank* b12 = new bank("Diya Patel", "2829", 1122, 98564.98);
     bank* b13 = new bank("Kabir Singh", "3031", 9988, 74839.45);
     bank* b14 = new bank("Tara Gupta", "3233", 8877, 61327.89);
     bank* b15 = new bank("Yash Sharma", "3435", 7766, 98214.67);
     bank* b16 = new bank("Anvi Joshi", "3637", 6655, 19483.56);
     bank* b17 = new bank("Reyansh Rao", "3839", 5544, 74839.23);
     bank* b18 = new bank("Saanvi Shah", "4041", 4433, 48293.89);
     bank* b19 = new bank("Ayaan Desai", "4243", 3322, 28934.45);
     bank* b20 = new bank("Nia Patel", "4445", 2211, 15837.67);
     bank* b21 = new bank("Arjun Mehta", "4647", 1100, 84376.89);
     bank* b22 = new bank("Rhea Shah", "4849", 9987, 43827.45);
     bank* b23 = new bank("Ira Singh", "5051", 8876, 75843.67);
     bank* b24 = new bank("Ved Desai", "5253", 7765, 67483.45);
     bank* b25 = new bank("Sara Gupta", "5455", 6654, 12487.89);
     bank* b26 = new bank("Om Joshi", "5657", 5543, 91283.67);
     bank* b27 = new bank("Kiara Shah", "5859", 4432, 74382.45);
     bank* b28 = new bank("Vivaan Rao", "6061", 3321, 32984.23);
     bank* b29 = new bank("Alina Patel", "6263", 2210, 59847.89);
     bank* b30 = new bank("Arnav Sharma", "6465", 1109, 43827.45);
     b1->next = b2;
     b2->next = b3;
     b3->next = b4;
     b4->next = b5;
     b5->next = b6;
     b6->next = b7;
     b7->next = b8;
     b8->next = b9;
     b9->next = b10;
     b10->next = b11;
     b11->next = b12;
     b12->next = b13;
     b13->next = b14;
     b14->next = b15;
     b15->next = b16;
     b16->next = b17;
     b17->next = b18;
     b18->next = b19;
     b19->next = b20;
     b20->next = b21;
     b21->next = b22;
     b22->next = b23;
     b23->next = b24;
     b24->next = b25;
     b25->next = b26;
     b26->next = b27;
     b27->next = b28;
     b28->next = b29;    
     b29->next = b30;
     b30->next = NULL;
     start(b1);
     return 0;
}

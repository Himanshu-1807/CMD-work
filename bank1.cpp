//2:Create cpp application for bank account handling.
//2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
//Add  constr. (2 constrs : first to accept all details )
//
//2.2 Add Business logic methods
//Methods
//public void withdraw(double amt) 
//public void deposit(double amt)
//
//2.3: Create object of account class and test withdraw and deposit methods.
//---------------------------------------------------------------------------------
#include<iostream>
#include<string.h>
using namespace std;
class bankaccount{
	private:
		int id;
		string name="jugal";
		double bal;
	public:
		bankaccount(){
			this->id=0;
			this->name="zIr00";
			this->bal=0;
			cout<<"----inside parameterless constructor---"<<endl;
		}
		bankaccount(int a,string b,double c){
			this->id=a;
			this->name=b;
			this->bal=c;
		}
		void withdraw(int n){
			if(n>bal){
				cout<<" balance is low bro:"<<endl;
			}
			else
				this->bal=(this->bal)-n;
		}
		void deposit(int n){
			this->bal=this->bal+n;
		}
		
		
		void display(){
			cout<<"id : "<<id<<"name :"<<name<<"balance"<<bal<<endl;
		}
		
};
int main(){
	bankaccount s1(101,"jignesh",20000);
	s1.deposit(20000);
	s1.display();
	s1.withdraw(20000);
	s1.display();
	
	
}



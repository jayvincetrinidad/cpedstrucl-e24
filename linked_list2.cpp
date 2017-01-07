#include <iostream>
#include<conio.h>

using namespace std;

class LinkedList {
	struct Node{
		int t;
		Node *next;
	};
  public:
    LinkedList(){
	     	head = NULL;
	}
    
    
  void addValue(int val) {
	    Node *n = new Node();   
        n->t = val;             
        n->next = head;         
        head = n;
		cout<<val<<"  has been inserted to the list"<<endl;
  }
  
  int popValue() {
	  	Node *n = head;
        int ret = n->t;
        head = head->next;
        delete n;
        return ret;
  }
  
  void displayValue() {
    	tempo = head;
		while (head != 0)
		{
		Node *n = head;
		Node *x = tempo;
		int ret = n->t;
		head = head->next;

        cout<<"\t\t" <<ret << endl;
	}
	head = tempo;
	}
  
  private:
    Node *head; 
    Node *tempo;
};
int main(){
	LinkedList list;
	int choice;
while(1){
	int choice, val, num;
	while(choice!=10){
	cout<<"======================================================================================================================="<<endl;
	cout<<"\nWhat would you like to do?\n";
	cout<<"1. Insert into linked list\n";
	cout<<"2. Pop\n";
	cout<<"3. Exit\n";
	cout<<"4. Display contents of the linked list\n ";
	cout<<"\nEnter choice: ";
	cin>>choice;
	switch (choice)
{
	case 1: 
	cout<<"\nInput a number to insert into linked list: ";
	cin>>val;
	list.addValue(val);
	break;
	
	case 2: 
		cout<<list.popValue()<<" has been popped"<<endl;
		break;
	
	case 3:
		exit(0);
		
	case 4:
		list.displayValue();
		break;
	
	default:
		cout<<"Wrong input!";}	
	break;
}}
return 0;
};

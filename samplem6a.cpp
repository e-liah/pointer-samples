#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
} *p;

Node *fp;

void add(int num){
	if(p==NULL){
		p = new Node();
		p->data = num;
		p->next = NULL;
		fp = p;
	} else {
		p->next = new Node();
		p = p->next;
		p->data = num;
		p->next = NULL;
	}
	
}

bool search(int num){
	
}

void showAll(){
	Node *sp = fp;
	do{
		cout << sp->data << " ";
		sp = sp->next;
	}while(sp != NULL);
}

void remove(int num){
	
}


int main() {
	p = NULL;
	int choice, num;
	bool isExist ;
	
	while(1){
		system("cls");
		cout << "Linked List" << endl;
		cout << "[1] - Add" << endl;
		cout << "[2] - Search" << endl;
		cout << "[3] - Delete" << endl;
		cout << "[4] - List" << endl;
		cout << "[5] - Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch(choice){
			case 1:
				cout << "ADD" << endl;
				cout << "Enter a number: ";
				cin >> num;
				add(num);
				break;
			case 2:
				cout << "SEARCH";
				cout << "Enter a number: ";
				cin >> num;
				isExist = search(num);
				if(isExist) cout << "The number exist";
				else cout << "No number found";
				break;
			case 3:
				cout << "DELETE";
				cout << "Enter a number: ";
				cin >> num;
				remove(num);
				break;
			case 4:
				cout << "LIST" << endl;
				showAll();
				break;
			case 5:
				cout << "Thank you";
				return 0;
			default:
				cout << "Invalid Choice" << endl;
				
		}
		
		
		system("pause");
	}
	
	
	
	return 0;
}
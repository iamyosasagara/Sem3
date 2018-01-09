#include <iostream>

using namespace std;

typedef struct TNode
{
	int data;
	TNode *next;
	
}data;
TNode *head;
int main(int argc, char const *argv[])
{
	char p;
	int n;
	do{
		TNode *baru,*temp;
		baru = new TNode;
		cout <<"Masukkan Data = ";
		cin >> n;
		baru->data = n;
		baru->next = NULL;
		if(head==NULL)
		{
			head=baru;
			head->next=NULL;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=baru;
		}

		
		if (head!=NULL)
		{
			/* code */
			TNode *tampil;
			tampil = head;
			while(tampil!=NULL)
			{
				cout <<tampil->data<<" ";
				tampil = tampil->next;
			}
		}
		cout << "Masih ingin menghitung (y/n) ";
		cin >>p;
	}while(p=='y');
}
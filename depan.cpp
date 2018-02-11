#include <iostream>

using namespace std;

typedef struct TNode
{
	int data;
	TNode *next;
	
}data2;
TNode *head;
int main(int argc, char const *argv[])
{
	char p;
	int n;
	do{ 
		TNode *baru;
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
			baru->next=head;
			head=baru;
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
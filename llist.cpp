#include <iostream>
#include "complex.h"
#include "llist.h"

using namespace std;

llist::llist ()	{
	head=NULL;
}

llist::~llist ()	{;}
	
void llist::insertend(complex num)	{
	complex* temp= head;
	complex* newnode=new complex;

	newnode->re=num.re;
	newnode->img=num.img;
	newnode->ptr=NULL; 

	if (temp==NULL)		head=newnode;
	else
	{
		while (temp->ptr)	temp=temp->ptr;
		temp->ptr=newnode;
	}
}

void llist::deletepos (int pos)	{

	complex* pre=head;
	complex* curr=head->ptr;

	int a=1;
	while (a<pos-1)	{
		pre=pre->ptr;
		a++;
	}
	curr=pre->ptr;	
	pre->ptr=curr->ptr;	
	delete curr;	
}

void llist::valatpos (int pos)		{
	complex* temp=head;
	int a=1;
	while (a<pos)	{
		temp=temp->ptr;	
		a++;
	}
	cout << temp->re << "+" << temp->img << "i\n";
}
complex* llist::val(int pos)		{
	complex* temp = head;
	int a = 1;
	while (a<pos)	{
		temp = temp->ptr;
		a++;
	}
	return temp;
}
void llist::insertafterpos (complex num, int pos)	{
	complex* temp=head;
	complex* newnode=new complex;	
	
	newnode->re=num.re;
	newnode->img=num.img;
	newnode->ptr=NULL; 

	int a=1;
	while (a<pos)	{
		temp=temp->ptr;	
		a++;
	}
	newnode->ptr=temp->ptr;
	temp->ptr=newnode;
}

void llist::traverse()
{
	complex*temp= head;

	while (temp)	{
		cout << temp->re << "+" << temp->img << "i,  ";
		temp=temp->ptr;
	}
	cout << endl;
}
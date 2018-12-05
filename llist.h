#ifndef llist_H
#define llist_H

#include "complex.h"

class llist	{
private:
	complex* head;
public: 
	llist ();	
	~llist ();	

	void insertend(complex num);	
	void deletepos (int pos);	
	void valatpos (int pos);	
	complex* val(int pos);
	void insertafterpos (complex num, int pos);	
	void traverse ();			
};

#endif
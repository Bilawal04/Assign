#include <iostream>
#include "complex.h"
#include "complex.cpp"
#include "llist.h"
#include "llist.cpp"

using namespace std;

int main ()
{
	try{
		complex num1(4,5), num2(3,-3), num3(4,3);
complex num4;
	llist list;

	cout << "Given numbers 1. 4+5i, 2. 3-3i, 3. 4+3i are inserted at end\n";
	list.insertend(num1);list.insertend(num2);list.insertend(num3);
	list.traverse();
	
	cout << "Inserting 1. + 2. in end:"	;
	list.insertend(num1.add(num2));
	list.traverse();

	cout << "Inserting 1. - 3. in end:";
	list.insertend(num1.sub(num3));
	list.traverse();

	cout << "Inserting 2. * 3. in end:";
	list.insertend(num2.mul(num3));
	list.traverse();

	cout << "Inserting 1. \ 3. in end:";
	list.insertend(num1.div(num3));
	list.traverse();
	num4.Copy(list.val(4));
	cout << "Deleting at fourth position:";
	list.deletepos(4);
	list.traverse();

	
	cout << "Inserting Deleted number at end:";
	
	list.insertend(num4);
		list.traverse();
	}
	catch(int a){
		cout << endl << "Denominator is zero." << endl;
	}
}
	
#include <iostream>
#include "complex.h"

using namespace std;

complex::complex()	{
	re=0; img=0; ptr=NULL;
}

complex::complex(double real, double imaginary)	{
	re=real; img=imaginary; ptr=NULL;
}

complex::~complex()	{;}

void complex::Copy(complex* a)	{

	
	re = a->re;
	img = a->img;

}
complex complex::add (complex num)	{

	complex sum;
	sum.re=num.re+ re;					
	sum.img=num.img+ img;	
	return sum;
}

complex complex::sub (complex num)	{

	complex sub;
	sub.re=	re-num.re;				
	sub.img=img-num.img;	
	return sub;
}

complex complex::mul (complex num)	{

	complex pro;
	pro.re=re * num.re - img * num.img ;
	pro.img=re * num.img + img * num.re; 
	return pro;
}

complex complex::div (complex num)	{

	complex result;
	double denomerator = (num.re * num.re + num.img * num.img);

		if (denomerator==0)
			throw 0;
			
		result.re= ( re * num.re + img * num.img) / denomerator ;
		result.img=( -re * num.img + img * num.re ) / denomerator ; 
		return result;
		
	}
}
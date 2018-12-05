#ifndef complex_H
#define complex_H

class complex
{
public:
	double re, img;
	complex* ptr;
	complex();	
	void Copy(complex *a);
	complex(double real, double imaginary);
	~complex();
	complex add (complex num);	
	complex sub (complex num);	
	complex mul (complex num);	
	complex div (complex num);	
};

#endif
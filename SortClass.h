#ifndef SORTCLASS_H

#define SORTCLASS_H


class CIntSort

{

private:

int size; 


int *array; 


public:

CIntSort(): size(0), array(NULL) {};


CIntSort(int, int *); 


~CIntSort();


public:

int *Get_Mas() const; 



void Set_Mas(int, const int*); 

void Sort_Mas(); 

void View_Mas(); 


void View_Mas(int, const int*);


private:

bool Test_Mas(); 

};


#endif


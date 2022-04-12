#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int* ptr;               //Pointer declaration of type int
    int x = 5;              //int variable declaration with 5 as asigned value
    ptr = &x;               //We assign the address of x to the pointer "ptr"
    int c = *ptr;     //We declarate an int variable and we assign it the value which ptr points

    char* cptr;             //Pointer declaration of char type
    char cvar = 'x';        //char variable declaration with 'x' as assigned value
    char cvar2;             //char variable declaration with no value at this moment
    cptr = &cvar;           //we assign the address of cvar to the pointer cptr
    cvar2 = *cptr;          //we assign to cvar2 the dereferentiated value of cptr('x')

    float* fptr;            //Pointer declaration of float type
    float fvar = 1.5;       //float variable declaration with 1.5 as assigned value
    float fvar2;            //float variable with no value at this moment
    fptr = &fvar;           //We assign the address of fvar to the pointer fptr
    fvar2 = *fptr;          //We assign to fvar2 the dereferentiated value of fptr(1.5)

    //& = the address of a variable
    //dataType* pointer declaration
    //Once declared the pointer, when we use '*' operator, we dereferentiate the pointer and we
                                            //can get the value of the variable which the pointer
                                            //points
    cout<<"Int values"<<endl;
    cout<<ptr<<endl<<*ptr<<endl<<&ptr<<endl<<x<<endl<<&x<<endl<<c;
    //1) We print the address of the variable which the pointer points (x)
    //2) We print the dereferianted value of the pointer which is the value of x(5)
    //3) We print the pointer's address THAT is different from the value which it points
    //4) We print the value asigned to the variable x(5)
    //5) We print the address of the variable x
    //6) We print the the value of the variable c, which is the dereferentiated value of ptr7
    getch();
    system("cls");


    cout<<"Char values"<<endl;
    cout<<cptr<<endl<<*cptr<<endl<<&cptr<<endl<<cvar<<endl<<&cvar<<endl<<cvar2;
    //1) We print the address of the variable which the pointer points (cvar)
    //2) We print the dereferentiated value of the pointer which is the value of cvar('x')
    //3) We print the pointer's address THAT is different from the value which it points
    //4) We print the value asigned to the variable cvar('x')
    //5) We print the address of the variable cvar
    //6) We print the the value of the variable cvar2, which is the dereferentiated value of cptr
    getch();
    system("cls");



    cout<<"Float values"<<endl;
    cout<<fptr<<endl<<*fptr<<endl<<&fptr<<endl<<fvar<<endl<<&fvar<<endl<<fvar2;
    //1) We print the address of the variable which the pointer points (fvar)
    //2) We print the dereferentiated value of the pointer which is the value of fvar(1.5)
    //3) We print the pointer's address THAT is different from the value which it points
    //4) We print the value asigned to the variable fvar(1.5)
    //5) We print the address of the variable fvar
    //6) We print the the value of the variable fvar2, which is the dereferentiated value of fptr
    getch();
    system("cls");
       
    
}

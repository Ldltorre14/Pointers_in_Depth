/*VOID POINTER
A void pointer is a pointer that does not point to any memory address of a primitive data type, 
because it doesn't point to an specific data type address...it can be casted 
to any data type pointer, which is a great advantage*/

#include <iostream>

using namespace std;

void Print(void*,char);

int main(){
    
    int ival = 5;       
    char cval = 'a';        //We declare 3 values of different data type each one
    float fval = 1.5;

    char type;
    cout<<"[i]int   [c]char    [f]float"<<endl;
    cout<<"What type of value do you wanna print? "; cin>>type; 
    switch(type){
        case 'i':
            Print(&ival,type);
            break;
        case 'c':
            Print(&cval,type);
            break;
        case 'f':
            Print(&fval,type);
            break;
        default:
            cout<<"Data type not existent"<<endl;
            break;
    }
    
    return 0;
}

void Print(void* ptr, char type){
    switch(type){                           //In this function we receive a void pointer
        case 'i':                           //and a data type which we want to cast the pointer
            cout<<*((int*)ptr)<<endl;       
            break;
        case 'c':
            cout<<*((char*)ptr)<<endl;
            break;
        case 'f':
            cout<<*((float*)ptr)<<endl;
            break;
        default:
            cout<<"Not existent data type"<<endl;
            break;
    }
    //The syntax to cast a void pointer to an specific data type, is:
            //((Data type*)void pointer) in that way we cast our void pointer to an
            //specific data type
}

//COMMON ERRORS
//1)Cast a pointer to an specific data type which don't corresponds to the value the pointer
//  receives
//  THIS is a very common error and an error that becomes really really hard to find when 
//  having a lot of lines to code
//  EXAMPLE:
//  in our previous function we receive the data type which whe want our pointer to, but if
//  we make the pointer point to that data type and we cast it to another different data type
//  it will print an undefined symbol
//  for example, if we send this arguments to the function
//  Print(&intAdress,intType)
//
//  And the function cast the void pointer to any other data type like char
//  ((char*)voidptr)
//  that would be a logical error.

#include <iostream>

using namespace std;

void Add(int,int,int);      //We declare the prototype of the Add function(By value) 
void Add2(int*,int*,int*);  //We declare the prototype of the Add function(By Pointer)
void Add3(int*,int*,int*);  //We declare the prototype of the Add function(By Reference/Address)

int main(){
    int* ptra; int* ptrb; int* ptrc;
    int a, b, c=0;                        //We declarate 3 int type variables
    cout<<"Digit a number: "; cin>>a;   //We ask input for 'a' value
    cout<<"Digit a number: "; cin>>b;   //We ask input for 'b' value
    Add(a,b,c);                         //We call the function 'Add' and we pass the 3 int type
                                        //variables;
    cout<<"Sum result(Pass by value): "<<c; //We print c value after calling Add(Pass by value)

    ptra = &a;                          //We assign the address of a to ptra pointer
    ptrb = &b;                          //We assign the address of b to ptrb pointer
    ptrc = &c;                          //We assign the address of c to ptra pointer
    Add2(ptra,ptrb,ptrc);               //We call the function 'Add2' and we pass the 3 pointers
    cout<<"\nSum result(Pass by pointers): "<<*ptrc<<"   "<<c;
                                        //We print c and the dereferenced value of ptrc
                                        // after calling Add2(Pass by pointer)

    Add3(&a,&b,&c);                     //We call the function Add3 and we pass 3 addresses
    cout<<"\nSum result(Pass by reference/Address): "<<c;
                                        //We print c value after calling Add2(Pass by pointer)
                                        
    //Add4(&a,&b,&c); //COMMON ERROR(check line 90)
    return 0;
}

void Add(int a, int b, int c){          //We define the Add function with 3 int type variable as
                                        //Parameters
    c = a + b;                          //We store in C the result of the sum of a and b
    //cout<<"Sum result: "<<c<<endl;      //We print C which is the result of the sum

    //Question 1? what would happen if we don't print c in the function but we print C
    //in the main function?(Go check the main function line 17)

    //Answer: We pass to the function as arguments, the variable a,b and c, and we actually
    //store the sum of a and b in the c variable, but when we print c in the main function
    //we can see that it prints '0' as the value of c, that's because, when we pass to a function
    //only the variables, actually we don't pass THESE variables, we pass a copy of them, and
    //the function actually works with these copies, all changes are made in these copies, so
    //when the function ends, these copies get deleted from the memory permanently.... 
    //so no changes are made in the original variables declared in the main function

    //Solution? There are actually 2 solutions
    //1)Pass by Pointer:
    //You need to make 3 POINTERS point to the addresses of the original variables to the
    //function as arguments; working with these pointers will make changes in the original
    //variables too(Check line 62 to see the implementation).  

    //2)Pass by Reference:
    //You need to pass the ADDRESS  of the original variables to the function as arguments,
    //Doing that will put the function working with the original variables and not with copies 
    //of them.(Check line 72 to see the implementation)
}

void Add2(int* a, int* b, int* c){ //We define Add2 function in which we pass 3 pointers THAT
                                   //HAVE the address of 3 int type variables(a,b,c)
    
    *c = *a + *b;               //We make a sum between the dereferenced values of a and b
                                //and we store the result in the dereferenced value of c.
                                //Doing this, we achieve actually are making changes in the
                                //original variables because the pointers are pointing to the
                                //Address of the original variables           
}

void Add3(int* a, int* b, int* c){ //We define Add3 function in which we receive 3 pointer BUT
                                   //there is something interesting happening here, as we can see
                                   //in line 27(main function) we actually don't pass pointers as
                                   //arguments....we pass addresses.
                                   //Here starts an implicit operation:
                                //When we pass addresses to a function that has pointers as parameter
                                //The compiler does the pointers to automatically point to the addresses
                                //We passed before when we called the function
                                //Graphically the declaration/definition of the function do this:
                                //void Add3(int* a=&varA, int* b=&varB, int* c=&varC)
    *c = *a + *b; //Because actually the function has pointers as parameters
                  //It actually does the same as the pass by pointer function, an operation 
                  //between the dereferenced values of the pointers; thanks to this, changes to
                  //the original variables are succesfully made.
}


//COMMON ERRORS
void Add4(int& a, int& b, int& c){ //Why this is an error? you can have a function that has
                                   //Addresses as parameter, but YOU CAN'T work with these
                                   //addresses just like that; if you call the function and pass
                                   //the addresses as arguments, the compiler will mark you an error
                                   //because you can't pass addresses to a function without using
                                   //pointers to point them first, as we saw in the previous examples
    int* ptra; int* ptrb; int* ptrc;
    ptra = &a; ptrb = &b; ptrc = &c;        //So...this is WRONG
    *ptrc = *ptra + *ptrb;

}

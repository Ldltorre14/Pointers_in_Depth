#include <iostream>
using namespace std;

//Arrays and pointers, are not the same BUT, they share a lot of similarities and behave
//really similar.

int main(){
    int array[5] = {1,2,3,4,5}; //We declare an array and we give it values
    int* ptr = array;           //We make the pointer point to the array

    //Question 1: what happen when we print the address which ptr is pointing to?
    cout<<ptr<<endl; //When we print ptr, it prints the address of the first element of the array
    //Question 2: What happen if we print the array without mentioning the index which we want to
                  //print?
    cout<<array<<endl; //When we print the array without mentioning the index, it also gives us the
                 //Address of the FIRST index, like the pointer

    //So, the array is a data structure which behave pretty similar as the pointers, the array as
    //we know, has contiguous memory addresses where are actually stored the values
    //By default, the array point to the first element, that's the reason the pointer also gives
    //us the address of the first element.

    //Question 3: What would happen if we apply pointer arithmetics in the array?
    cout<<array<<" "<<array+1<<" "<<array+2<<" "<<array+3<<endl;
    //With the first one, we actually print the address of the elementin the first index AND
    //we print the address of the 2nd, 3rd, and 4th index, because we are increasing by one 
    cout<<*array<<" "<<*(array+1)<<" "<<*(array+2)<<" "<<*(array+3)<<endl;
    //With this one, it is read like "Print the dereferentiate value of the array in x index"
    //So, we get the value stored in address of the 1st,2nd,3rd and 4th index
    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<endl;
    //And with the last one, the usual way, we get the value of these index without dereferencing
    //Any of them, which MEANS that "[]" symbol, works the same as the "*" derefence symbol 
    //usually used in pointers, that is one thing that Arrays share in common with pointers



    return 0;
}

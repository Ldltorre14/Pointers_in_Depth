#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main(){
    int *ptr;                       //We declare an int type pointer
    int array[100] = {100, 67,46,3,7,62};                 //We declare an int type array of 100 elements
      

    ptr = array;                    //We point the pointer to the array;
                        //If we don't give an specific index of the array to point
                        //The pointer will point to the first index of the array
                        //ptr
                        // |
                        //[100,67,46,3,7,62]

    cout<<ptr[0]<<endl;   //As we can see, if we print the dereferenced value of the pointer
                        //it will be the value of the first index of the array (100)
    //system("cls");

    //POINTER ARITHMETICS
    //Question 1: What would happen if I increase +1 the value of ptr?
    ptr[0]++;
    cout<<*ptr<<endl;
    
    //Answer: If we increase by one or more, the actual index which the pointer is pointing to,
             // we actually don't move to the next index, we increase the value assigned
             // in the actual index of the array 
             
    
    //Example: print al the array values but incrementing by one the actual index
    for(int i=0; i<6; i++){
        ptr[i]++;
        cout<<ptr[i]<<" ";
    }
    //What happens here? well, if we have the next array [101,67,46,3,7,62]
    //when we print "ptr[i]" we print the the value of the index which is the pointer 
    //pointing to, BUT when we do "ptr[i]++" what we are doing is increasing by one the value
    //of the actual index which ptr is pointing to in that moment
    
    //Graphically it would look like this: 
    //with i=0
    //ptr[i]  
    // |
    //[101, 67, 46, 3, 7, 62]               and if we do ptr[i]++, then
    //                                  ptr[i]
    //                                    |
    //                                  [101++, 67, 46, 3, 7, 62]



    //with i=1
    //     ptr[i]  
    //      |
    //[102, 67, 46, 3, 7, 62]               and if we do ptr[i]++, then
    //                                       ptr[i]
    //                                         |
    //                                  [102, 67++, 46, 3, 7, 62]


    //with i=2
    //         ptr[i]  
    //          |
    //[102, 68, 46, 3, 7, 62]               and if we do ptr[i]++, then
    //                                           ptr[i]
    //                                             |
    //                                  [102, 68, 46++, 3, 7, 62]


    //with i=3
    //             ptr[i]  
    //              |
    //[102, 68, 47, 3, 7, 62]               and if we do ptr[i]++, then
    //                                              ptr[i]
    //                                                |
    //                                  [102, 68, 46, 3++, 7, 62]


    //with i=4
    //                ptr[i]  
    //                 |
    //[102, 68, 47, 4, 7, 62]               and if we do ptr[i]++, then
    //                                                 ptr[i]
    //                                                   |
    //                                  [102, 68, 46, 4, 7++, 62]



    //with i=5
    //                  ptr[i]  
    //                     |
    //[102, 68, 47, 4, 8, 62]               and if we do ptr[i]++, then
    //                                                      ptr[i]
    //                                                       |
    //                                  [102, 68, 46, 4, 7, 62++]


    //After the for loop ends, the array would look like this:
    //[102, 68, 47, 4, 8, 63]

    cout<<endl;
    for(int i=0; i<6; i++){
        cout<<array[i]<<" ";
    }




    return 0;
}

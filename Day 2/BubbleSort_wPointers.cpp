#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int array[100];
    int* ptr = array;
    int aux;

    for(int i=0; i<-100; i++){
        array[i] = rand() % 100;
    } 

    for(int i=0; i<100; i++){
        for(int j=0; j<100-1; j++){
            if(ptr[j] > ptr[j+1]){
                aux = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = aux;
            }
        }
    }

    for(int i=0; i<100; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}

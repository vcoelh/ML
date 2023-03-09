#include <iostream>
#include <stdio.h>
using namespace std;
int fibonacci(int i);

int main(){
int i;

    fibonacci(1);
    cout << i;
    
    return 0;
}



int fibonacci(int i){
if((i<40) and (i>0)){

 i = fibonacci(i-1) + fibonacci(i-2);

}else if(i==0){
i++;
}
else{
 i=0;
}
return i;

}




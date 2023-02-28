#include <iostream>
#include <vector>
#include <numeric>


int main(){
using namespace std;

vector <int> numbers;

    for(int i=0; i<1000; i++){

        if(i%3==0){

             numbers.push_back(i);
        }
        else if(i%5 ==0){
            numbers.push_back(i);
        }
    }
    cout << " "<<accumulate(numbers.begin(),numbers.end(),0);
    return 0;
}

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>


using namespace std;

double get_execution_time(int (*func)(int),int n, string title ){

    clock_t start, finish;
    double duration;
    start=clock();

    //function
    
    func(n);

    finish=clock();

    duration = (double)(finish-start)/CLOCKS_PER_SEC;
    
    cout<<fixed;
    cout.precision(6);

    cout<<title<<": "<< duration <<"s \n";
    
    return duration;
}

int sumAlgorithm1(int n){
    return ((n+1)*n)/2;
}

int sumAlgorithm2(int n){
    int temp=0;

    for(int i=0;i<n;i++){
        temp+=(i+1);
    }
    return temp;
}

int sumAlgorithm3(int n){
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            temp+=1;
        }
    }
    return temp;
}

int main(void){
    const int n = 50000;

    get_execution_time( &sumAlgorithm1,n,"first");
    get_execution_time( &sumAlgorithm2,n,"second");
    get_execution_time( &sumAlgorithm3,n,"third");

    return 0;
}
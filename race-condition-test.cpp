#include <iostream>
#include <vector>
#include <string>
#include <thread>

using namespace std;

int shared=0;

const int count_number=1000;

void func1(const int n){
    for(int i=0;i<count_number;i++){
        shared++;
    }
    cout<<n+1<<"th thread: "<<shared<<endl;
}


int main(int argc, char *argv[])
{
    const size_t nloop = 11;

    const size_t nthreads = 5; //thread::hardware_concurrency();
    
    cout<<endl<<"parallel ("<<nthreads<<" threads):"<<endl<<endl;
    vector<thread> threads(nthreads);
    
    for(int t = 0;t<nthreads;t++)
    {
      threads[t] = thread(func1,t);
    }
    
    for(int i=0;i<nthreads;i++){
        threads[i].join();
    }


    cout<<"result Number: "<<shared<<endl;

    return 0;

}
#include<iostream>
#include<vector>
#include <random>

using namespace std;

const int MAZE_SIZE=10;

class Point{
    private:
        int x;
        int y;
    public:
        Point(int initial_x, int initial_y){
            x=initial_x;
            y=initial_y;
        }
        void getX(){
            cout<<x<<"\n";
            cout<<y<<"\n";
        }
};

int main(){    
    int maze[MAZE_SIZE][MAZE_SIZE];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);
    
    for(int i=0;i<MAZE_SIZE;i++){
        for(int j=0;j<MAZE_SIZE;j++){
            maze[i][j]= (dis(gen)<20);
            cout<<maze[i][j] <<" ";
        }
        cout<<"\n";
    }

    
    vector<Point> stack = vector<Point>();
    Point start = Point(0,0);
    Point end =Point(9,9);
    
    stack.push_back(start);
    
    while(stack.size()){
        Point currentPoint=stack.back();
        stack.pop_back();

        //check four directions
        
    }
    



    return 0;
}
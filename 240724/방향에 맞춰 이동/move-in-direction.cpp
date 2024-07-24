#include <iostream>
using namespace std;


int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;
    int x=0,y=0;
    for(int i=0;i<N;i++){
        char ch;
        int num;
        cin>>ch>>num;
        if(ch=='S'){
            x+=dx[2];
            y+=dy[2]*num;
        }
        if(ch=='E'){
            x+=dx[1]*num;
            y+=dy[1];
        }if(ch=='N'){
            x+=dx[3];
            y+=dy[3]*num;
        }if(ch=='w'){
            x+=dx[0]*num;
            y+=dy[0];
        }
    }
    cout<<x<<" "<<y;
    return 0;
}
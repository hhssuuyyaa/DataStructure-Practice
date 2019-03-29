#include<iostream>
using namespace std;
int dirC[2]= {1 ,0} ;
int dirR[2] ={0 ,1} ;
int mat [1000][1000] = {0};

bool CanIGo (int nextrow, int nextcol ,int N, int M){
    if(nextrow< N && nextrow>=0 && nextcol <M && nextcol >=0 && mat[nextrow][nextcol] != 7){
        return true;
    }
    else{
        return false;
    }
}

bool Reach(int curr, int curc, int reachR, int reachC , int N, int M){
    if(curr == reachR && curc == reachC){
        mat[curr][curc] = 1;
        return true;
    }
    for(int dir =0 ; dir<2; ++dir){
       int nextR = curr + dirR[ dir ] ;
       int nextC =  curc + dirC[ dir ] ;
        if( CanIGo( nextR , nextC ,N,M) == true){
            if ( Reach(nextR, nextC , reachR, reachC,N,M) == true){
                mat[ curr][ curc] = 1;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int N,M;
    cin>> N>>M;
    char x ;
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            cin>> x ;
            if(x == 'O'){
                mat[i][j] = 0;
            }
            else if(x == 'X'){
                mat[i][j] = 7;
            }
        }
    }
    bool y = Reach(0 ,0 , N-1, M-1 , N,M);
    for(int i=0; i<N; ++i){
        for(int j=0; j<M; ++j){
            if(mat[i][j] != 1 ) cout<< 0<<" ";
            else cout<< mat[i][j] <<" ";
        }
        cout<<endl;
    }
}

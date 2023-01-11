#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int>adj[],int v){
    for(int i=0; i<v; i++){
        for(int go : adj[i]){
            cout<<go<<" ";
        }cout<<"\n";
    }
}
int main(){
    int v = 6;
    vector<int> adj[v];
    addEdge(adj,0,2);
    addEdge(adj,1,5);
    addEdge(adj,3,4);
    addEdge(adj,3,5);
    addEdge(adj,0,4);
    addEdge(adj,2,5);
    addEdge(adj,2,4);
    addEdge(adj,2,4);
    addEdge(adj,2,3);
    printGraph(adj,v);

    return 0;
}
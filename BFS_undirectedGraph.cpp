#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[],int v){
    for(int i=0;i<v;i++){
        for(int x:adj[i]){
            cout<<x<<" ";
        }cout<<endl;
    }
}
void BFS(vector<int>adj[], int v, int s){
    bool visited[v+1];
    for(int i=0; i<v;i++){
        visited[i] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
int main(){
    int v = 5;
    vector<int> adj[v];
    addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);

    printGraph(adj,v);int s = 0;
    cout<<endl<<"BFS : "<<endl;
    BFS(adj,v,s);cout<<endl;

    return 0;
}
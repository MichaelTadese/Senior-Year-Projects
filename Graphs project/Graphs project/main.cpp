//Michael Tadese

#include <bits/stdc++.h>

using namespace std;

class graph{
  
  map<string, list<string>> adj;
  int V;
  
  public:
  
  graph(int v){
      this->V=v;
  }
  void addedge(string u, string v){
      adj[u].push_back(v);
  }
  
  void dfs(string src, unordered_map<string, bool> &visited){
      
      if(visited[src])
      return;
      
      visited[src]=true;
      cout<<src<<" ,";
      for(auto u: adj[src]){
          if(!visited[u])
          dfs(u,visited);
      }
  }
  
  void helper(string src){
      unordered_map<string, bool> visited;
      dfs(src,visited);
      cout<<endl;
  }
};

int main()
{
    int v=5;
    graph g(v);
    
    g.addedge("Introduction","Unix Shell");
    g.addedge("Introduction", "Javascript");
    g.addedge("Introduction", "Useful Python tips");
    g.addedge("Unix Shell", "Intermediate C");
    g.addedge("Unix Shell", "Javascript");
    g.addedge("Unix Shell", "Editor");
    g.addedge("Unix Shell", "Some more git");
    g.addedge("Javascript", "Useful Python tips");
    g.addedge("Javascript", "Intermediate Web Dev");
    g.addedge("Some more git", "Intermediate Web Dev");
    g.addedge("Some concept around functions","Intermediate Web Dev");
    g.addedge("Some concept around functions","Strongly Statically typed language");


    g.addedge("First touch of algorithms","Javascript");
    g.addedge("First touch of algorithms", "Useful Python tips");
    g.addedge("First touch of algorithms", "Data structure - part two");
    g.addedge("First touch of algorithms", "Intermediate C");
    g.addedge("Javascript", "Useful Python tips");
    g.addedge("Javascript", "Intermediate web dev");
    g.addedge("Useful Python tips", "some concepts around functions");
    g.addedge("Useful Python tips", "Intermediate web dev");
    g.addedge("Data structure - part two", "Useful Python tips");
    g.addedge("Intermediate C", "Learning to programm using suduko");


    g.addedge("Programming language taxonomy","Intermediate C");
    g.addedge("Programming language taxonomy", "Learning to programm using suduko");
    g.addedge("Programming language taxonomy", "Useful Python tips");
    g.addedge("Programming language taxonomy", "Javascript");
    g.addedge("Intermediate C", "Working with binary data");
    g.addedge("Useful Python tips", "Some concepts around functions");
    g.addedge("Useful Python tips", "Intermediate web dev");
    g.addedge("Useful Python tips", "Intermediate web dev");
    g.addedge("Javascript", "Useful Python tips");
    g.addedge("Javascript", "Intermediate web dev");

    string src="Introduction";
    string src2="First touch of algorithms";
    string src3="Programming language taxonomy";

    g.helper(src);
        cout<<endl;
    g.helper(src2);
        cout<<endl;
    g.helper(src3);

    return 0;
}

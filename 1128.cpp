#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
#define N 2001

using namespace std;

int reverse[N], original[N];
vector<int> graph[N];
int index_graf;

int DFS(int i)
{
  if(reverse[i] != -1) return reverse[i];

  original[i] = index_graf++;
  reverse[i] = original[i];

  for(int j=0; j < int(graph[i].size()); j++)
  {
    reverse[i] = min(reverse[i], DFS(graph[i][j]));
  }

  return reverse[i];
}

int main(void)
{
  int n, m;
  int v, w, p;
  while(cin >> n >> m && (n + m))
  {
    // Limpando para a proxima iteração;
    index_graf=0;
    memset(reverse,-1,sizeof(reverse));
    memset(original,-1,sizeof(original));
    for(int i =0; i < n; i++) graph[i].clear();
    // Lista de adjacencia;
    for(int i = 0; i < m; i++)
    {
      cin >> v >> w >> p;
      // Caso seja mão única;
      graph[v-1].push_back(w-1);
      // Caso seja mão dupla
      if(p == 2) graph[w-1].push_back(v-1);
    }
    // Ponto inicial do DFS
    DFS(0);

    int i;
    for (i = 1; i < n && original[i] > reverse[i]; i++);

    if(i >= n) cout << "1"<< endl;
    else cout << "0" << endl;
  }


}

/*
 * Autor: Scioville
 * Problema: Instagraph (https://open.kattis.com/problems/instagraph)
 * Juez online: Katiis
 * Veredicto: accepted  
 * There is no meaning,there is no purpose,and we seek only the impossible,i am not your legend,your legend does not exist.
 * */
#include<bits/stdc++.h>
#include<cstdlib>
#define MAX_V 101

using namespace std;

struct Vertex
{
    vector <int> adj;
    int follow = 0;
    int cc = 0;

};

int main(int argc, char *argv[])
{
    int V, E,x,y,maxi,maxx;
    scanf("%i %i", &V, &E);

    vector<Vertex> G(V+1);
    vector<pair<int,int>> edges(E);

    for (int i = 0; i < E; i++)
    {
        scanf("%i %i", &x, &y);
        edges[i] = {x,y};
        G[x].adj.push_back(y);
        G[y].follow++;
    }

    for (int i = 1; i <= V; i++)
    {
        sort(G[i].adj.begin(),G[i].adj.end());
        G[i].cc = G[i].follow;
    }


    for (int i = 0; i < E; i++)
    {
        int a,b;
        a = edges[i].first;
        b = edges[i].second;
        if(binary_search(G[b].adj.begin(),G[b].adj.end(),a))
        {
            G[b].cc--;
        }
}
        maxi = 1;
        maxx = G[1].cc;
        for(int i = 2; i <= V; i++)
        {
            if(G[i].cc> maxx)
            {
                maxx = G[i].cc;
                maxi = i;
            }
        }



    cout<<maxi<<" "<<maxx<<endl;
}

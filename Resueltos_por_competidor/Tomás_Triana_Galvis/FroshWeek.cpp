#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
 * Autor: Tomás Triana Galvis
 * Problema: Frosh Week
 * Juez online: UVA 11858
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2958
 **/
struct MergeSort{
    static ll inversiones;

    static void merge(vector<int>& arr, int izq, int mid, int der){
        vector<int> temp(der - izq + 1);
        int i = izq, j = mid + 1, k = 0;

        while (i <= mid && j <= der){
            if (arr[i] <= arr[j]){
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inversiones += (mid - i + 1);
            }
        }
        while (i <= mid) temp[k++] = arr[i++];
        while (j <= der) temp[k++] = arr[j++];

        for (int x = 0; x < (int)temp.size(); x++)
            arr[izq + x] = temp[x];
    }

    static void ordenar(vector<int>& arr, int izq, int der){
        if (izq >= der) return;
        int mid = izq + (der - izq) / 2;
        ordenar(arr, izq, mid);
        ordenar(arr, mid + 1, der);
        merge(arr, izq, mid, der);
    }

    static void ordenar(vector<int>& arr){
        if (!arr.empty())
            ordenar(arr, 0, arr.size() - 1);
    }
};
ll MergeSort::inversiones=0;
int main()
{
    ll n;

    while(cin>>n){
        MergeSort::inversiones = 0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        MergeSort::ordenar(arr);
        cout<<MergeSort::inversiones<<"\n";
    }

    return 0;
}

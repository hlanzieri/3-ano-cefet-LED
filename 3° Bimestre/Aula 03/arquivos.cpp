#include <bits/stdc++.h>

using namespace std;

int main () {
    cout << "cout > nova mensagem\n"; // stream de saída padrão (cout)
    cerr << "cerr > nova mensagem\n"; // stream de erro padrão (cerr)

    /*
    string texto;
    cin >> texto; // stream de entrada padrão (cin)
    cout << texto << endl;
    */

    ifstream fin("arquivo_cout.txt");
    ofstream fout("copia.txt");

    if(fin.is_open()){
        string palavra;
        while(fin >> palavra){
            cout << palavra << ".";
        }
        cout << endl;
    
        fin.close();
    }

    return 0;
}
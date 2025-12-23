//ALUNO: Humberto de Moraes Lanzieri Filho
//TURMA: 3° Informatica;

#include <bits/stdc++.h>

using namespace std;

// Funcao para exibir o arquivo lab.txt
void mostrar_arquivo() {
	ifstream arq("lab.txt");
	cout << "\n========== Conteudo do arquivo 'lab.txt' ==========\n\n";
	cout << arq.rdbuf();
	arq.close();
}

// Funcao para exibir matriz do labirinto
void mostrar_matriz(int labirinto[][100], int tamanho){
    int linha = 0, coluna = 0;
	for(linha = 0; linha < tamanho; linha++){
		for(coluna = 0; coluna < tamanho; coluna++){
			if(labirinto[linha][coluna] < 0){
			    cout << (labirinto[linha][coluna] * - 1) << " "; 	
			} else {		        
				cout << labirinto[linha][coluna] << " ";
		    }
		}
		cout << "\n";
	}
}

// Funcao para exibir labirinto em formato texto
void mostrar_labirinto(int labirinto[][100], int tamanho){
	int linha = 0, coluna = 0;
	for(linha = 0; linha < tamanho; linha++){
		for(coluna = 0; coluna < tamanho; coluna++){
			if(labirinto[linha][coluna] == 0){
				cout << ".";
			}
			else if(labirinto[linha][coluna] == -1){
				cout << "#";
			}
			else if(labirinto[linha][coluna] == -2){
				cout << "E";
			}
			else if(labirinto[linha][coluna] == -3){
				cout << "S";
			}
		}
		cout << "\n";
	}
}

// Funcao para exibir labirinto com cores
void exibir_colorido(int labirinto[][100], int tamanho){
	const string COR_PRETO = "\033[40m";
	const string COR_BRANCO = "\033[47m";
	const string COR_VERDE = "\033[42m";
	const string COR_VERMELHO = "\033[41m";
	const string LIMPAR = "\033[0m";
	int linha = 0, coluna = 0;
	for(linha = 0; linha < tamanho; linha++){
		for(coluna = 0; coluna < tamanho; coluna++){
			if(labirinto[linha][coluna] == -1){
				cout << COR_BRANCO << "  " << LIMPAR;
			} else if(labirinto[linha][coluna] == 0){
				cout << COR_PRETO  << "  " << LIMPAR;
			}
			else if(labirinto[linha][coluna] == -2){
				cout << COR_VERDE  << "  " << LIMPAR;
			} else if(labirinto[linha][coluna] == -3){
				cout << COR_VERMELHO   << "  " << LIMPAR;
			}
		}
		cout << "\n";
	}
}

// Funcao auxiliar para verificar caminho ortogonal
int existe_caminho(char matriz[][101], int tamanho, int linhaEnt, int colunaEnt, int linhaSai, int colunaSai){
    int queueLin[10000], queueCol[10000];
    int marcado[101][101];
    int inicio = 0, final = 0, i = 0, j = 0, k = 0;
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            marcado[i][j] = 0;
        }
    }
    queueLin[final] = linhaEnt;
    queueCol[final] = colunaEnt;
    final++;
    marcado[linhaEnt][colunaEnt] = 1;
    int deltaLin[4] = {-1, 1, 0, 0};
    int deltaCol[4] = {0, 0, -1, 1};
    while(inicio < final){
        int linAtual = queueLin[inicio];
        int colAtual = queueCol[inicio];
        inicio++;
        if(linAtual == linhaSai && colAtual == colunaSai){
            return 1;  
        }
        for(k = 0; k < 4; k++){
            int novaLin = linAtual + deltaLin[k];
            int novaCol = colAtual + deltaCol[k];
            if(novaLin >= 0 && novaLin < tamanho && novaCol >= 0 && novaCol < tamanho){
                if(marcado[novaLin][novaCol] == 0 && (matriz[novaLin][novaCol] == '.' || matriz[novaLin][novaCol] == 'S')){
                    marcado[novaLin][novaCol] = 1;
                    queueLin[final] = novaLin;
                    queueCol[final] = novaCol;
                    final++;
                }
            }
        }
    }
    return 0;  
}

// Funcao para criar labirinto
void criar_labirinto() {
    srand(time(0));
    int tamanho = 0, percentual = 0, i = 0, j = 0, aleatorio = 0;
    int linhaEnt = 0, colunaEnt = 0, linhaSai = 0, colunaSai = 0;
    int bordaEnt = 0, bordaSai = 0;
    cout << "Informe o tamanho N (7 a 100) e o percentual P de obstaculos (10 a 80): ";
    cin >> tamanho >> percentual;
    char matriz[101][101];
    int temCaminho = 0;
    while(temCaminho == 0) {
        for(i = 0; i < tamanho; i++){
            for(j = 0; j < tamanho; j++){
                if(i == 0 || j == 0 || i == tamanho - 1 || j == tamanho - 1){
                    matriz[i][j] = '#';
                } else {
                    aleatorio = rand() % 100;
                    if(aleatorio < percentual){
                        matriz[i][j] = '#';
                    } else {
                        matriz[i][j] = '.';
                    }
                }
            }
        }
        bordaEnt = rand() % 4;
        if(bordaEnt == 0){ 
            linhaEnt = 0;   
            colunaEnt = rand() % tamanho; 
        }
        if(bordaEnt == 1){ 
            linhaEnt = tamanho - 1; 
            colunaEnt = rand() % tamanho; 
        }
        if(bordaEnt == 2){ 
            linhaEnt = rand() % tamanho; 
            colunaEnt = 0; 
        }
        if(bordaEnt == 3){ 
            linhaEnt = rand() % tamanho; 
            colunaEnt = tamanho - 1; 
        }
        matriz[linhaEnt][colunaEnt] = 'E';
        do{
            bordaSai = rand() % 4;
        } while(bordaSai == bordaEnt);
        if(bordaSai == 0){ 
            linhaSai = 0;   
            colunaSai = rand() % tamanho; 
        }
        if(bordaSai == 1){ 
            linhaSai = tamanho - 1; 
            colunaSai = rand() % tamanho; 
        }
        if(bordaSai == 2){ 
            linhaSai = rand() % tamanho; 
            colunaSai = 0; 
        }
        if(bordaSai == 3){ 
            linhaSai = rand() % tamanho; 
            colunaSai = tamanho - 1; 
        }
        matriz[linhaSai][colunaSai] = 'S';
        temCaminho = existe_caminho(matriz, tamanho, linhaEnt, colunaEnt, linhaSai, colunaSai);
    }
    ofstream arqSaida("lab.txt");
    for(i = 0; i < tamanho; i++){
        for(j = 0; j < tamanho; j++){
            arqSaida << matriz[i][j];
        }
        arqSaida << "\n";
    }
    arqSaida.close();
    cout << "\nLabirinto válido foi criado e salvo no arquivo lab.txt!\n";
}
 
// Funcao para validar arquivo de labirinto
int validar_arquivo(string nomeArq){
	ifstream arq(nomeArq);
	vector<string> vetorLinhas;
	string texto;
	int tamanho = 0, i = 0, j = 0, contadorEnt = 0, contadorSai = 0;
	int linhaEnt = 0, colunaEnt = 0, linhaSai = 0, colunaSai = 0;
	bool entradaNaBorda = false, saidaNaBorda = false;
	char caractere = 0;
	while(getline(arq, texto)){
		if((int)texto.size() == 0){
			return 0;
		}
		vetorLinhas.push_back(texto);
	}
	arq.close();
	tamanho = vetorLinhas.size();
	if(tamanho < 7 || tamanho > 100){
		return 0;
	}
	for(i = 0; i < tamanho; i++){
		if((int)vetorLinhas[i].size() != tamanho){
			return 0;
		}
	}
	contadorEnt = 0, contadorSai = 0;
	entradaNaBorda = false, saidaNaBorda = false;
	for(i = 0; i < tamanho; i++){
		for(j = 0; j < tamanho; j++){
			caractere = vetorLinhas[i][j];
			if(caractere != '.' && caractere != '#' && caractere != 'E' && caractere != 'S'){
				return 0;
			}
			if(caractere == 'E'){
				contadorEnt++;
				linhaEnt = i;
				colunaEnt = j;
				if(i == 0 || j == 0 || i == tamanho - 1 || j == tamanho - 1){
					entradaNaBorda = true;
				}
			}
			if(caractere == 'S'){
				contadorSai++;
				linhaSai = i;
				colunaSai = j;
				if(i == 0 || j == 0 || i == tamanho - 1 || j == tamanho - 1){
					saidaNaBorda = true;
				}
			}
		}
	}
	if(contadorEnt != 1 || contadorSai != 1){
		return 0;
	}
	if(!entradaNaBorda || !saidaNaBorda){
		return 0;
	}
	return tamanho;
}

// Funcao para carregar labirinto do arquivo
char carregar_labirinto(string nomeArq, int labirinto[][100], int tamanho){
	ifstream arq(nomeArq);
	string texto;
	int i = 0, j = 0;
	char caractere;
	while(getline(arq, texto)){
		for(j = 0; j < tamanho; j++){
			caractere = texto[j];
			if(caractere == '.'){
				labirinto[i][j] = 0;
			}
			else if(caractere == '#'){
				labirinto[i][j] = -1;
			}
			else if(caractere == 'E'){
				labirinto[i][j] = -2;
			}
			else if(caractere == 'S'){
				labirinto[i][j] = -3;
			}
		}
		i++;
	}
	arq.close();
	return 'v';
}

// Funcao Main
int main() {
	string nomeArquivo;
	int labirinto[100][100], tamanho = 0;
	cout << "===== PARTE 1: Criacao do Labirinto =====\n\n";
	criar_labirinto();
	mostrar_arquivo();
	cout << "\n===== PARTE 2: Leitura e validacao de arquivo =====\n\n";
	cout << "Informe o nome do arquivo de labirinto: ";
	cin >> nomeArquivo;
	tamanho = validar_arquivo(nomeArquivo);
	if(tamanho == 0){
		cout << "\nO arquivo informado eh invalido!\n";
	}
	cout << "\nArquivo eh valido! Dimensao do labirinto (N) = " << tamanho << "\n\n";
	if(carregar_labirinto(nomeArquivo, labirinto, tamanho) == 'v'){
        cout << "Exibicao da matriz numerica do labirinto (valores negativos exibidos como positivos):\n\n";
		mostrar_matriz(labirinto, tamanho);
		cout << "\nExibicao do labirinto em formato texto:\n\n";
		mostrar_labirinto(labirinto, tamanho);
		cout << "\nExibicao do labirinto com cores:\n\n";
		exibir_colorido(labirinto, tamanho);
	} else {
		cout << "\nFalha ao carregar o labirinto.\n";
	}
	return 0;
}

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

char vogal(){
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    int n = rand() % 5;
    return vogais[n];
}
char cons(){
    char consul[] = {'b', 'c','d','f','g','h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't','v', 'x', 'z' };
    int n = rand() % 20;
    return consul[n];
}


int main(){
    int tNome = 4;
    char nome[tNome];
    int opcao = 1;
    do{
        bool cAchada = false;
        for(int j = 0; j<tNome; j++){
            if(rand()%2 && !cAchada){
                nome[j] = cons();
                cAchada = true;
            }
            else{
                nome[j] = vogal();
                cAchada = false;
            }
        }
        for(int i = 0; i<tNome; i++){
            cout<<nome[i];
        }
        cout<<"\ncontinuar: 1-sim.\n";
        cin>>opcao;
    }while(opcao == 1);
    return 0;
}

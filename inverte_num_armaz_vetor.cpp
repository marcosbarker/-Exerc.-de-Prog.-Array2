#include <iostream>
using namespace std;

void inverte(int* vet, int n){
int temp = 0;

    for (int i = 0; i<(int)(n/2); i++){
      temp = vet[i];
      vet[i] = vet[n-i-1];
      vet[n-i-1] = temp;
     }
   }

int main() {
    int n = 15; 
    int vet[n] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    cout << "Vetor original: ";
    for(int i =0; i<n; i++){
        cout << vet[i] << (",");    
    }
    cout << endl;

    inverte(vet,n);

    cout << "Vetor invertido: ";
    for(int i =0; i<n; i++){
        cout << vet[i] << (",");    
    }
    cout << endl;

    return 0;
}





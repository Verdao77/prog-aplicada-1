#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string palavraFinal = "";

    char textoEntrada[1000],
         textoIntermediario[1000],
         textoSaida[2000],
         pulador[0],
         letraAtual[0],
         repeticoes[1000],
         op;


    int a = 0,
        f = 0,
        z= 0,
        cont = 0,
        i = 0,
        y = 0,
        d = 0,
        x = 0;


    cout <<"Digite C para codificar ou D para decodificar: ";
    cin >> op;

    if(op == 'C'){
      cout << "Entre com a palavra a ser codificado: ";
      cin>> textoEntrada;

      
      for (i = 0; i < 1000; i++){
        pulador[0]= 's';
        
        if (textoEntrada[i] == '0'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'A';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '1'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'B';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '2'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'C';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '3'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'D';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '4'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'E';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '5'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'F';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '6'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'G';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '7'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'H';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '8'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'I';
                a = a+2;
                pulador[0]= 'n';
            }

        if (textoEntrada[i] == '9'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'J';
                a = a+2;
                pulador[0]= 'n';
            }

        
        if (pulador[0] == 's'){
            if (textoEntrada[i] == 'Z'){
                textoIntermediario[a] = 'Z';
                textoIntermediario[a+1] = 'Z';
                a = a+2;
            } else {
                textoIntermediario[a] = textoEntrada[i];
                a++;
        }
        }



      }

      i=0;
      
      while(textoIntermediario[i] != '\0'){

        letraAtual[0] = textoIntermediario[i];
        while(letraAtual[0] == textoIntermediario[i]){
        cont++;
        i++;

        }

        itoa (cont, repeticoes, 10);
        if (cont>1){
            palavraFinal += repeticoes;
            palavraFinal += letraAtual[0];
        } else {
            palavraFinal += letraAtual[0];
        }

        cont=0;


      }
      cout<<"Palavra codifcada: "<<palavraFinal;
}
      
      if (op == 'D') {

        cout<<"entre com a palavra a ser decodificada: ";
        cin >> textoEntrada;
        f = strlen(textoEntrada);

        while (y < f){

                if ( textoEntrada[i] == '0' || textoEntrada[i] == '1' ||
                    textoEntrada[i] == '2' || textoEntrada[i] == '3' ||
                    textoEntrada[i] == '4' || textoEntrada[i] == '5' ||
                    textoEntrada[i] == '6' || textoEntrada[i] == '7' ||
                    textoEntrada[i] == '8' || textoEntrada[i] == '9'){

                        while ( textoEntrada[i] == '0' || textoEntrada[i] == '1' ||
                            textoEntrada[i] == '2' || textoEntrada[i] == '3' ||
                            textoEntrada[i] == '4' || textoEntrada[i] == '5' ||
                            textoEntrada[i] == '6' || textoEntrada[i] == '7' ||
                            textoEntrada[i] == '8' || textoEntrada[i] == '9'){

                            repeticoes[d] = textoEntrada[i];
                            i++;
                            d++;
                        }

                    } else {
                        repeticoes[0] = '1';
                    }


                cont = atoi(repeticoes);


                while (a<cont){
                    textoIntermediario[z]=textoEntrada[i];
                    a++;
                    z++;
                }


                cont = 0;
                for(x = 0; x<d; x++){
                     repeticoes[x] = ' ';
                }
                d = 0;
                a = 0;
                y++;
                i++;
      }



      int tamanhoIntermediario = strlen(textoIntermediario);
      a = 0;
      string testeZ = textoIntermediario;
      if(testeZ == "Z" ||
         testeZ == "Z1" ||
         testeZ == "Z2" ||
         testeZ == "Z3" ||
         testeZ == "Z4" ||
         testeZ == "Z5" ||
         testeZ == "Z6" ||
         testeZ == "Z7" ||
         testeZ == "Z8" ||
         testeZ == "Z9") {
            cout<<"                 ";
            return 0;
      }


      for(i = 0; i<tamanhoIntermediario; i++){

        if (textoIntermediario[i] == 'Z'){
                if(textoIntermediario[i+1] == 'Z') {
                    textoSaida[a] = 'Z';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'A') {
                    textoSaida[a] = '0';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'B') {
                    textoSaida[a] = '1';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'C') {
                    textoSaida[a] = '2';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'D') {
                    textoSaida[a] = '3';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'E') {
                    textoSaida[a] = '4';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'F') {
                    textoSaida[a] = '5';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'G') {
                    textoSaida[a] = '6';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'H') {
                    textoSaida[a] = '7';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'I') {
                    textoSaida[a] = '8';
                    a++;
                    i++;
                }
                if(textoIntermediario[i+1] == 'J') {
                    textoSaida[a] = '9';
                    a++;
                    i++;
                }
        } else {
            textoSaida[a] = textoIntermediario [i];
            a++;
        }

      }

       palavraFinal = textoSaida;
       cout<<"Palavra decodifcada: "<<palavraFinal;
      }



    return 0;
}
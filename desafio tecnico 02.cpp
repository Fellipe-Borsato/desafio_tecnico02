#include <cstdlib> 
#include <iostream>
#include <random>

using namespace std;

int main()
{
      random_device numAleatorio;
      uniform_int_distribution<> distribuicao(1, 75);
      int valorInteiro = distribuicao(numAleatorio);

   int caso;
   int acao;
    int numdig;
    int contador = 0;
     int caes = 0;
   

   cout<<"Bem vido a casa cão!"<<endl;

   
   while (true)
   {
       cout<<" "<<endl;
       cout<<"(1) Introdução a assistencia canina"<<endl;
       cout<<"(2) Quem é Simon 'ghost' Riley"<<endl;
       cout<<"(3) Porque ghost decidiu ajudar cães"<<endl;
       cin>> acao;
       
       switch (acao)
       {
           case 1: cout<<"Aqui acolhemos cães feridos"<<endl;
                   cout<<"ver um resumo de quais cães estão na casa"<<endl;
                   cout<<"caso (1)- Riley"<<endl;
                   cout<<"caso (2)- Jeff"<<endl;
                   cout<<"caso (3)- Rex"<<endl;
                   cin>>caso;
                   
                   if (caso == 1)
                   {
                       cout<<"Riley é o cão de ghost, foi baleado durante uma missão de rastreamento, mas hoje se encontra e ótimo estado"<<endl;
                   }
                   
                   else if (caso == 2)
                   {
                       cout<<"Jeff é um cão domestico, porém seu dono precisou mudar de país, hoje Jeff mora aqui e passa bem"<<endl;
                   }
                   
                   else
                   {
                       cout<<"Rex é um cão cego que foi encontrado nas ruas com fome e sede, aqui ele recebe tratamentos dignos"<<endl;
                   }
           break;
           
           case 2: cout<<"Sumon Riley, conhecido como ghost atua em campo militar, juto a sua equipe e seu companheiro canino Riley"<<endl;
                   cout << "Adivinhe o numero de missões completas de Ghost "<<endl;
                 do {
        
                        cout << "Digite o número "<<endl;
                        cin >> numdig;
                        contador++;

                       if (numdig < valorInteiro) 
                       {
                        cout << "Chutou baixo!"<<endl;
                       } 
                       else if (numdig > valorInteiro) 
                       {
                        cout << "Chutou alto!"<<endl;
                       } 
                       else 
                       {
                       cout << "Parabéns! Ghost realizou " << valorInteiro << " missões voce acertou em " << contador << " tentativas."<<endl;
                       }

                       } while (numdig != valorInteiro);
                       
                       
           
                       break;
           
           case 3: cout<<"Em uma operação em Verdansk, ghost foi encarregado de rastrear o terrorista conhecido como barkov."<<endl;
                   cout<<"Para isso ghost leveu seu cão Riley, porem acabaram em uma emboscada e Riley foi baelado."<<endl;
                   cout<<"Desse dia em diante, Ghost jurou dar o máximo de assistencia para cães, criando a casa cão"<<endl;
                   cout<<"Hoje Riley se encontra bem e continua atuando em campo ao lado de Ghost."<<endl;
                   
                    for (int i = 1; i <= 22; ++i) 
                   {
                    if ( i > 0) 
                   {
                     caes += i; 
                   }
    }
                   cout << "Na casa cão " << caes << " cães já foram socorridos graças ao ghost"<<endl;
                   break;
       }
       
       
   }
    return 0;
}
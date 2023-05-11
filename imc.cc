#include<iostream>
#include<locale.h>
#include<unistd.h>//Usada para inserir o comando sleep
#include<iomanip>//manipular dados como as casas decimais

using namespace std;

int main()
{
    //Calculo IMC
    setlocale(LC_ALL, "");
    float peso, altura, imc;
    cout << setprecision(4);//manipula as casa decimais do meu programa
    cout << "Para calcular seu imc é necessário seu peso e altura,\nvamos começar pelo peso:" << endl;
    cin >> peso;
    cout << "Aguarde" << endl;
    sleep(2);//aguarda 2 segundos antes de executar a proxima linha de código
    cout << "Ok, peso armazenado!\nAgora me diga sua altura:" << endl;
    cin >> altura;
    imc = peso / (altura * altura);//calculo do imc
    cout << "Vejamos..." << endl;
    sleep(2);
    cout << "seu imc é: " << imc << "\nentão:" << endl;
    
    if (imc >= 18.5 && imc < 25 ){//Se o imc for maior ou igua e menor que e menor que 
        sleep(1);
        cout << "Você está no seu peso ideal." << endl;
    }
    else if(imc >= 25.0 && imc < 29.9){//se o imc for maior ou igual e menor que 
        sleep(1);
        cout << "Você esté com Sobrepeso" << endl;
    }
    else if(imc > 30 && imc < 40){//se o imc for maior que e menor que
        sleep(1);
        cout << "Você esté com Obesidade" << endl;
    }else if(imc > 40){ // se o imc for maior
        sleep(1);
        cout << "Você esta com Obesidade grave, procure um médico" << endl;
    }else if(imc <= 18.5){
        cout << "Opa, parece que está tentando calcular o imc de uma criança ou adolescente.\nas faixas de peso são diferentes, então estamos trabalhando para calcular\no imc de crianças e adolescentes. Aguarde!\n" << endl;
    }
    cout << "Obrigado por usar o programa,\nespero que sua saúde esteja em dia!\nSe cuide, boa saúde!" << endl;
    return 0;
}

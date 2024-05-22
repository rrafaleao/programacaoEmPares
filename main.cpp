#include <iostream>
using namespace std;

int main(){
    int num1, den1, num2, den2,resto,a ,b ,res ;
    char op;
    cout<<"Digite o primeiro numerador: ";
    cin>>num1;
    cout<<"Digite o primeiro denominador: ";
    cin>>den1;
    cout<<"Digite o segundo numerador: ";
    cin>>num2;
    cout<<"Digite o segundo denominador: ";
    cin>>den2;
    cout<<"Digite o operador (+, - , * , /): ";
    cin>>op;

    


    if(op == '*'){
        cout<<num1*num2<<"/"<<den1*den2<<endl;
    }

    else if(op == '/'){
        cout<<num1*den2<<"/"<<num2*den1<<endl;
    }

    else if((op == '-') && (den1=den2)){
        cout << num1-num2 << "/" << den1 << endl;
    
    }else if((op=='-') && (den1!=den2)){
        a = num1; b = num2;
        do{
            resto = a % b;
            a = b;
            b = resto;
        }   
    }
    int i = 0;

    while(i != 1){
        cout<<(num1*num2) / a <<endl;
    if (num1 %2 ==0 && num2 %2 ==0){
        cout << (num1/ 2) << (num2 / 2) <<endl;

    }else {
        i++;

    }

    }
    
    
    if((op == '+')&&(den1 == den2)){
        cout<<num1 + num2<< "/"<< den1 << endl; 
    }else {
    a = num1; b = num2;
        do{
            resto = a % b;
            a = b;
            b = resto;
    }
    
    while(resto != 0);
    cout<<num1+num2<<"/"<<a<<endl;
    }
    cout << op;

    return false;

}

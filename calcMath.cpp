#include <iostream>
#include <cmath>

using namespace std;

int aritmetiskSummaFranAnalys(int n){
    return n*(n+1)/2;
}
int aritmetiskSummaFranLoop(int n){
    int x;
    int summan = 0;
    for(x=0; x<=n;x+=1){
        summan+=x;
    }
    return summan;
}
void provaSumma(int n){
    double resultat=aritmetiskSummaFranLoop(n);
    double diff=resultat - aritmetiskSummaFranAnalys(n);
    cout << "diffen är: " << diff << endl;
}
void provaFleraSummor(){
    for(int n=0;n<100;n+=5)
        provaSumma(n);
}
double integralX2FranAnalys(double a, double b){
    return (b*b*b - a*a*a)/3;
}
double integralX2FranLoop(double a, double b){
    const double dx = 0.01;
    double area = 0;
    double x = 0;
    for(x=a; x<(b-dx); x+=dx){
        area +=(x*x*dx);
    }
    return area;
}
void provaintegralCCC(double a, double b){
    double svaretA=integralX2FranLoop(a,b);
    double svaretB=integralX2FranAnalys(a,b);
    double diff = svaretA - svaretB;
    cout << "diffen: " << diff << endl;
}
// Skriver ut de n första fibonacci-talen numrerade från 1.
// skrivUtFibonacci(6) skall skriva ut 1:1, 2:1, 3:2, 4:3, 5:5, 6:8
// En Lazze-Stefanz funktion
void skrivUtFibbo(int n){
    if(n>=1)
        cout << "1:1 ";
    if(n>=2)
        cout << "2:1 ";
    int x2=1;
    int x1=1;
    int p=0;
    for(int i=3;i<=n;i+=1){
        p=x1+x2;
        cout << i <<":" << p << " ";
        x1=x2;
        x2=p;
    }







}
// returrnerar kvadratroten ur x(där x>=0)
double gissaKvadde(double x){
    cout << "gissa kvadratroten ur " << x << endl;
    double g = 1;
    for(int i=0;i<10;i+=1){
        double k=x/g;
        double kvot=(k+g)/2;
        g = kvot;
    }
    return g;



}
void provaKvadratroten(double x){
    double resultat = gissaKvadde(x);
    double diff=resultat-sqrt(x);
    cout << "diffen blir " << diff << endl;


}
//returnernar e upphöjt till x
double ePowerOfXForloop(double x){
    double summa=0;
    double nFakultet=1;
    double xUppN=1;
    double resultat=0;
    for(int n=1; n<20; n+=1){
        summa=(xUppN/nFakultet);
        nFakultet*=n;
        xUppN*=x;
        resultat+=summa;


    }

    return resultat;


}
//returnernar e upphöjt till x
double ePowerOfXWhiletrue(double x){
    double summa=0;
    double nFakultet=1;
    double xUppN=1;
    double resultat=0;
    double n=1;
    while(true){
        cout << "varv " << n << endl;
        summa=(xUppN/nFakultet);
        if(summa<0.0001)
            break;
        nFakultet*=n;
        xUppN*=x;
        n+=1;
        resultat+=summa;


    }

    return resultat;


}
double ePowerWhileX(double x){
    double nF=1;
    double xSq=1;
    double reso=0;
    double nPlus=1;
    while(true){
        double summ = 0;
        summ=xSq/nF;
        nF*=nPlus;
        xSq*=x;
        reso+=summ;
        if(summ<1)
            break;
    }
    return reso;
}
void medWhile(double x){
    double tatet=ePowerWhileX(x);
    double diff=tatet-exp(x);
    cout << "the diff is: " << diff << endl;


}

void skrivUtePower(double x){
    double resultatet = ePowerOfXWhiletrue(x);
    double diff=resultatet - exp(x);
    cout << "the diff is " << diff << endl;
}




void shortcutToCalcMath(){
    skrivUtePower(5);


}

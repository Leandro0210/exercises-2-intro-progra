
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  for (int i = 0; i< s1.size(); ++i ) {
    if (s1[i] == ' ') {
      cout << i << endl;
    }
  }
  cout << s1.size() << endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
 /* string s2;
  for (int i = 0; i < s1.size(); ++i) {
    
    if (s1[i] != ' ') {
      s2 = s2 + s1[i];
    } else {
      cout << "["<<s2<<"]"<<endl;
      s2= "";
    }
  }
  cout << "["<<s2<<"]"<<endl;*/
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
 /* if (n<0) {
    cout<< "Numero no valido, Por favor ingrese un numero positivo"<<endl;
  }  else if (n>10) {
    cout<< "El numero es muy alto"<<endl;
  } else {
    int resultado= 1;
    for (int i=1; i<=n; i=i+1 ) {
      resultado = resultado * i;
    }
    cout<< resultado;
 }*/
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
if (n<0) {

cout << "Numero no valido";
}
int suma = 0;
while(n>0) {

suma = suma + n % 10;
n = n / 10;
}
cout << "El resultado de la suma es: "<<suma;
  
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
/*int co;
        int re;
        co = 0;
    re = divident;

    for (; re >= divider; co++) {
        re -= divider; 
            
        }
        cout << "Cociente: " << co <<endl;
    cout << "Residuo: " << re << endl; */
    }

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
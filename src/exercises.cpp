
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
  string word= "";
  for (int i = 0; i < s1.size(); ++i) {
    
    if (s1[i] != ' ') {
      word = word + s1[i];
    } else {
      cout<<"["<<word<<"]"<<endl;
      word= "";
    } 
    
  }
  if(s1==""){
    cout<<"";
  }
  else{
  cout<<"["<<word<<"]"<<endl;
  }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
  for (int i = 0; i < s1.length() && i < 20; ++i) {
          int paste = s1[i] - '0';
          if (paste == 1) {
              cout<<"Om-nom-nom :P"<<endl;
          }  else if (paste == 0) {
              cout<<"No cake :("<<endl;
              break;
          }
          
      }
 
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERe
  if (n<0) {
    cout << "El numero es negativo. Intentelo de nuevo"<<endl;
  
  } else if (n>14) {
    cout<<"El numero es muy grande. Intentelo de nuevo"<<endl;
  } else {
    int resultado= 1;
    for (int i= 1; i<=n; i=i+1) {
      resultado= resultado * i;
    }
cout << resultado<<endl;
  }
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
  return suma;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
  double resultado = 0;
    int m = -1;
    for (int i = 1; i <= n; i=i+1) {
        resultado =resultado + pow(m, i + 1) / i;
    }
    cout<< resultado << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
  string esp;
for (int i = 0; i < s.size(); ++i){
    if (s[i] != ' ') {
        esp = esp + s[i];
    }
}
    // Compruebo si es palindromo
    bool ep = true;
    int longi = esp.size();
    for (int i = 0; i <= longi ; ++i) {
        if (esp[i] != esp[longi - i - 1]) {
            ep = false;
        }
    }
    // mostramos el resultado
    if (ep) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
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
   int co;
    while (divident >= divider) {
        divident = divident - divider; 
            co++;
            
        }
        cout << co<<" " << divident <<endl;
    }

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
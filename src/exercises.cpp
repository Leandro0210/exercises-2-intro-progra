
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
  for(int i=1; i < n; ++i) {
    cout << "   ";
  }
  for (int j = 1; j <= k; ++j) {
    if(j < 10) {
      cout << " ";
    }
    cout << j;

    int salto =(j + n - 1) % 7;

    if (salto == 0) {
      cout << endl;
    } else if(j == k) {
      cout << " " << endl;
    } else {
      cout << " ";
    }
  }
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
  int longi = s.size();
    int cuenta= 0;
    for (int i=0; i<longi; ++i) {
        if(s[i] == 'f') {
            cuenta = cuenta + 1;
        }
    }
     if (cuenta == 1 ) {
            cout <<"-1"<<endl;
           return ;
        }   else if (cuenta == 2) {
            cout << "3"<<endl;
             return ;
        }  if (cuenta == 0) {
            cout << "-2"<<endl;
             return ;
        }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
  
}

void exercise_11() {
  // TODO: YOUR CODE HERE

 double u_0 = 1.0; 
    double u_n = u_0; 
    cout << "U0 = " << u_0 << endl;
    for (int i = 1; i <= 10; ++i) { 
        u_n /= i; 
        cout << "U" << i << " = " << u_n << endl;
    }


   
}

void exercise_12() {
  // TODO: YOUR CODE HERE

double u_0 = 1.0;
  double u_n = u_0;
  double v_n = u_0;

  for (int i = 1; i <= 10; ++i) {
    u_n /= i;
    v_n += u_n; 
    cout << "U" << i << " = " << u_n << " V" << i << " = " << "1" << endl;
  }


}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
 long resultado = 0;

    for (int i = 1; i <= n; i++) {
        resultado = resultado + pow(i,k);
        
    }
    return resultado;
  
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
   string resultado;
    string num = to_string(n);
    int longitud = num.size();
    
    bool espa = true;
    for (int i = 0; i < longitud; ++i) {
        if (num[i] != num[longitud - i - 1]) {
            espa = false;
    
        }
    }
    
    if (espa) {
        resultado = "Es palindrome";
    } else {
        resultado = "No es palindrome";
    }
    
    return resultado;
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
   string bin = ""; 
  if(decimal == 0){
    bin = to_string(decimal);
  }
  while (decimal > 0) {
  int r = decimal % 2; 
  bin = to_string(r) + bin; 

  decimal /= 2; 
    }
    cout << bin << endl;
}

void exercise_16(int divident, int divider) {
int i;
  if(divident < divider){
    i = 0;
    cout << i << " " << divident << endl;
  }
  if(divider > 0 && divident >= divider){
    for(i = 0; divident != 0 && divident != 1; ++i){
    divident -= divider;
  }
    cout << i << " " << divident << endl;
  }
  
   
}
void exercise_17(int n) {
  // TODO: YOUR CODE HERE
   int count = 0;
  int num = 2;
  while (count < n) {
    bool prim = true;
    for (int divisor = 2; divisor * divisor <= num; divisor++) {
    if (num % divisor == 0) {
    prim = false;
     break;
    }
    }
    if (prim) {
     cout << num << " ";
   count++;
    }
   num++;
  }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
  if ( debut > fin) {
    cout << "El numero de fin no debe de ser menor al inicial" << endl;
    return;
  }
  for (int i = debut; i <= fin; i++) {
    if ( debut == 1 && fin == 1){
        cout << debut << "->" << fin << endl;
        break;
    }
   if (debut <= 0) {
    cout << "El numero debe de ser positivo y mayor a zero" << endl;
    break;
  }
    int count = 0;
    int x = i; 
    while (x > 0) {
    if (x % 3 == 0) {
    x += 4;
    } else if (x % 4 == 0) {
    x /= 2;
    } else {
   x--;
    }
    count++;
    }
    cout << i << "->" << count << endl;
  }
}
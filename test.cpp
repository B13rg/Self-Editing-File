#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
     const int a=1; 
     int red = a+1;
     char blue;
     fstream file;
     file.open("copy.cpp", fstream::in | fstream::out);
     file.seekg(94, ios::beg);
     file << "const int a=";
     file << red;
     file << ";";
     cout << "Times run: " << a << endl;
     file.close();
     system("g++ copy.cpp -o rewrite");
     if(a<10)
          system("./rewrite");
     else{
          cout << "Reset file?";
          cin >> blue;  
          if(blue == 'y')
            system("cp test.cpp copy.cpp -f");
     }
     return 0;
}

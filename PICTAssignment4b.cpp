 #include <iostream>
using namespace std;
  
struct Complex {
   int realPart;
   int imaginaryPart;
};
   
int main() {
   Complex c1, c2, add,subtract,multiply,divide;
   
   cout << "Enter value of A and B  where A + iB is first complex number\n";
   cin >> c1.realPart >> c1.imaginaryPart;
     
   cout << "Enter value of A and B  where A + iB is second complex number\n";
   cin >> c2.realPart >> c2.imaginaryPart;

   add.realPart = c1.realPart + c2.realPart;
   add.imaginaryPart = c1.imaginaryPart + c2.imaginaryPart;
      
   subtract.realPart = c1.realPart - c2.realPart;
   subtract.imaginaryPart = c1.imaginaryPart - c2.imaginaryPart;

   multiply.realPart = ((c1.realPart) * (c2.realPart))-((c1.imaginaryPart) * (c2.imaginaryPart));
   multiply.imaginaryPart = ((c1.realPart) * (c2.imaginaryPart))+((c2.realPart) * (c1.imaginaryPart));
      
   divide.realPart =(c1.realPart)/(c2.realPart);
   divide.imaginaryPart =(c1.imaginaryPart)/(c2.imaginaryPart);
      
      

      cout <<"Addition is " <<add.realPart << " + " << add.imaginaryPart<<"i"<<endl;
      cout <<"Subtraction is "<<subtract.realPart << " + " << subtract.imaginaryPart<<"i"<<endl;
      cout <<"Multiplication is "<<multiply.realPart << " + " << multiply.imaginaryPart<<"i"<<endl;
      cout <<"Division is "<<divide.realPart << " + " << divide.imaginaryPart<<"i"<<endl;

   return 0;
}
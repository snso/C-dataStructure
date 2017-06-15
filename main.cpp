#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

struct Complex
{
       int a;
       int b;
}; 

Complex operator+(Complex& c1, Complex& c2)
{
        Complex rest;
        printf("µ÷ÓÃ + \n ");
        return rest;
}



class Test
{
      
     private:
             static Test* test;
             Test()
             {};
             
     public:
            
            static Test * getTest()
            {
                 if(test == NULL)
                 {
                         test = new Test();
                 }
                 return test;
            }
      
      
};


Test* Test::test = NULL;

int main()
{
    
    Test *t = Test::getTest();
    
  
    Complex c1 = {1,2};  
    Complex c2 = {3,4};
     
    Complex c =  c1+c2;

          
     system("PAUSE");
     return 0;
}

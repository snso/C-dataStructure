#include<stdio.h>
#include<string>
#include<iostream>

#include "./list/SeqList.h" 

using namespace std;

struct Complex
{
       int a;
       int b;
}; 

Complex operator+(Complex& c1, Complex& c2)
{
        Complex rest;
        printf("调用 + \n");
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
    
    /**线性列表测试*/
    SeqList* list = SeqList_Create(5);
    
    int i = 0;
    int j = 1;
    int k = 2;
    int x = 3;
    int y = 4;
    int z = 5;
    int index = 0;
    
    SeqList_Insert(list, &i, 0);
    SeqList_Insert(list, &j, 0);
    SeqList_Insert(list, &k, 0);
    SeqList_Insert(list, &x, 0);
    SeqList_Insert(list, &y, 0);
    SeqList_Insert(list, &z, 0);
    
    for(index=0; index<SeqList_Length(list); index++)
    {
        int* p = (int*)SeqList_Get(list, index);
        
        printf("%d\n", *p);
    }
    
    printf("\n");
    
    while( SeqList_Length(list) > 0 )
    {
        int* p = (int*)SeqList_Delete(list, 0);
        
        printf("%d\n", *p);
    }
    
    SeqList_Destroy(list);
    

          
     system("PAUSE");
     return 0;
}

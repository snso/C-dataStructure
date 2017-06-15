#include<stdio.h>
#include<string>
#include<iostream>

#include "./list/SeqList.h" 
#include "./list/LinkList.h" 

using namespace std;

struct Complex
{
       int a;
       int b;
}; 

Complex operator+(Complex& c1, Complex& c2)
{
        Complex rest;
        printf("���� + \n");
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


struct Value
{
    LinkListNode header;
    int v;
};

int main()
{
    
    Test *t = Test::getTest();
    
  
    Complex c1 = {1,2};  
    Complex c2 = {3,4};
     
    Complex c =  c1+c2;
    
    /**�����б����*/
    /*
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
    */
    //����洢���� 
    int i = 0;
    LinkList* list = LinkList_Create();
    
    struct Value v1;
    struct Value v2;
    struct Value v3;
    struct Value v4;
    struct Value v5;
    
    v1.v = 1;
    v2.v = 2;
    v3.v = 3;
    v4.v = 4;
    v5.v = 5;
    
    LinkList_Insert(list, (LinkListNode*)&v1, LinkList_Length(list));
    LinkList_Insert(list, (LinkListNode*)&v2, LinkList_Length(list));
    LinkList_Insert(list, (LinkListNode*)&v3, LinkList_Length(list));
    LinkList_Insert(list, (LinkListNode*)&v4, LinkList_Length(list));
    LinkList_Insert(list, (LinkListNode*)&v5, LinkList_Length(list));
    
    for(i=0; i<LinkList_Length(list); i++)
    {
        struct Value* pv = (struct Value*)LinkList_Get(list, i);
        
        printf("%d\n", pv->v);
    }
    
    while( LinkList_Length(list) > 0 )
    {
        struct Value* pv = (struct Value*)LinkList_Delete(list, 0);
        
        printf("%d\n", pv->v);
    }
    
    LinkList_Destroy(list);

          
     system("PAUSE");
     return 0;
}

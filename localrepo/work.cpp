#include<iostream>
using namespace std;
class parent
{
       public:void show();
};
void parent::show(){
    std::cout<<"This is parent class";
}
class child:public parent 
{
     public:void show();
};
void child::show(){
    std::cout<<"This is child class";
}
int main()
{
      child c;
      c.show();
      parent p=c;
      p.show();
      
}


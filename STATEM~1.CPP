#include<iostream.h>
#include<conio.h>
#include<process.h>
class StateMachine
{
    public:
    int start;
    int func1()
   {
     cout<<"This is the start node."<<endl;
     cout<<"Following are the operations available:"<<endl;
     cout<<"1:Addition of numbers"<<endl;
     cout<<"2:Substration of numbers"<<endl;
     cout<<"3:Multiplication of numbers"<<endl;
     cout<<"0:Quit"<<endl;
     cout<<"Choose Operation: "<<endl;
     cin>>start;
     return start;
   }
    void add();
    void substract();
    void multiply();
};
void StateMachine::add() //defination of add()
   { int n,sum=0,num;
     cout<<"ADDITION"<<endl;
     cout<<"Enter how many numbers you want to add"<<endl;
     cin>>n;
     for(int i=0;i<n;i++)
     {
      cout<<"Enter number"<<endl;
      cin>>num;
      sum=sum+num;
      cout<<"submission result so far ="<<sum<<endl;
     }
    }
void StateMachine::substract() //defination of substarct()
   { int n,sub=0,num;
     cout<<"SUBSTRACTION"<<endl;
     cout<<"Enter how many numbers you want to substract"<<endl;
     cin>>n;
     for(int i=0;i<n;i++)
     {
      cout<<"Enter number"<<endl;
      cin>>num;
      sub=num-sub;
      cout<<"subtraction result so far ="<<sub<<endl;
     }
    }
void StateMachine::multiply() //defination of multiply()
   { int n,mul=1,num;
     cout<<"MULTIPLY"<<endl;
     cout<<"Enter how many numbers you want to multiply"<<endl;
     cin>>n;
     for(int i=0;i<n;i++)
     {
      cout<<"Enter number"<<endl;
      cin>>num;
      mul=mul*num;
      cout<<"multiplication result so far ="<<mul<<endl;
     }
    }

int main()
 {
  //Program execution starts from here
  StateMachine s1; //object of class StateMachine
  int a; //local variable
  while(1)
 {
 a=s1.func1(); //calling menu driven function func1()
 switch(a)
 {
  case 0:
  exit(0);
  case 1:
  s1.add(); //call statement for add()
  break;
  case 2:
  s1.substract(); //call statement for substract()
  break;
  case 3:
  s1.multiply(); //call statement for multiply()
  break;
  default:
  cout<<"Enter Valid Option"<<endl;
  break;
 }
}
 getch();
 return 0;
}
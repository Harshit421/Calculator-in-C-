//calculatorll
#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#define new_cal 1
#define old_cal 0

class stand_calc{
    public:
      static double addition(double,double);
      static double subtract(double,double);
      static double multiplication(double,double);
      static double division(double,double*);
      static double modulus(double*,double*);
};
class scien_calc{
    public:
      static double square(double);
      static double cube(double);
      static double power(double,double);
      static double sq_root(double);
      static long int fact(double);
      static double sin_func(double);
      static double cos_func(double);
      static double tan_func(double);
};
double stand_calc::addition(double a,double b){
    return (a+b);
}
double stand_calc::subtract(double a,double b){
    return (a-b);
}
double stand_calc::multiplication(double a, double b){
    return (a*b);
}
double stand_calc::division(double a,double *b){
    while(*b==0){
        cout<<"\n cannot divided by zero";
        cout<<"\n Enter second number again";
        cin>>*b;
    }
    return (a/(*b));
}
double stand_calc::modulus(double *a,double *b){
    while(*b==0){
        cout<<"\nCannot divided by zero. ";
        cout<<"\n Enter second number again.";
        cin>>*b;
    }
    int x=(int)*a;
    int y=(int)*b;
    if(*a-x>0||*b-y>0)
          cout<<"\n Convert decimal number into intiger to peerform modulus";
    *a=x;
    *b=y;
    return (x % y);      
}
//..............scien_calculator.............................//
double scien_calc::square(double x){
    return (pow(x,2));
}
double scien_calc::cube(double x){
    return (pow(x,3));
}
double scien_calc::power(double x,double y){
    return (pow(x,y));
}
double scien_calc::sq_root(double x){
    return (sqrt(x));
}
long int scien_calc::fact(double x){
   int n=(int)x;
   long int f=1;
   while(n>1){
    f*=n;
    n--;
   }
   return f;
}
double scien_calc::sin_func(double x){
    return (sin(x));
}
double scien_calc::cos_func(double x){
    return (cos(x));
}
double scien_calc::tan_func(double x){
    return (tan(x));
}
//.................MAIN MENU.............................//
int main(){
    double num1,num2,num3,temp;
    int choice1=0,choice2,flag;
    do{
       system("cls"); 
       cout<<"==========Type Of Calculator======================";
       cout<<"\n1\t Standard calculator\n2\t Scientific Calculator\n3\t Quit";
       cout<<"\n Choose the type of calculator:";
       cin>>choice1;
       flag=new_cal;
       
       switch(choice1)
       {
         case 1:
             do{
                system("cls");
                cout<<"...................Standard Calculator....................";
                cout<<"\n1\t Addition\n2\t Subtraction\n3\tMultiplication\n4\tDivision\n5\tModulus\n6\tReturn to previous Menu\n7\tQuit";
                if(flag==old_cal)
                  cout<<"\n8\tClear Memory";
                  cout<<"\n Choose the type of calculator:";
                  cin>>choice2;

                switch(choice2){
                  case 1:
                     if(flag==new_cal){
                        cout<<"Enter the first number:";
                        cin>>num1;
                     }
                     else{
                        num1=temp;
                        cout<<"\n First number is "<<num1<<endl;
                     }
                     cout<<"Enter se3cond Number:";
                     cin>>num2;
                     num3=stand_calc::addition(num1,num2);
                     cout<<"\n Addition of "<<num1<<" and "<<num2<<" is "<<num3;
                     cout<<"\nPress any key to continue.........";
                     getch();
                     temp=num3;
                     flag=old_cal;
                     break;
                  case 2:
                     if(flag==new_cal){
                        cout<<"Enter first number:";
                        cin>>num1;
                     }
                     else{
                       num1=temp;
                       cout<<"\n First number is "<<num1<<endl; 
                     }  
                     cout<<"Enter second number:";
                     cin>>num2;
                     num3=stand_calc::subtract(num1,num2);
                     cout<<"\n Subtraction of "<<num2<<" from "<<num1<<" is "<<num3;
                     cout<<"\n Press any key to continue..........";
                     getch();
                     temp=num3;
                     flag=old_cal;
                     break;    
                  case 3:
                     if(flag==new_cal){
                        cout<<"Enter first number:";
                        cin>>num1;
                     }
                     else{
                       num1=temp;
                       cout<<"\n First number is "<<num1<<endl; 
                     }  
                     cout<<"Enter second number:";
                     cin>>num2;
                     num3=stand_calc::multiplication(num1,num2);
                     cout<<"\n Multiplication of "<<num1<<" and "<<num2<<" is "<<num3;
                     cout<<"\n Press any key to continue..........";
                     getch();
                     temp=num3;
                     flag=old_cal;
                     break;       
                  case 4:
                     if(flag==new_cal){
                        cout<<"Enter first number:";
                        cin>>num1;
                     }
                     else{
                       num1=temp;
                       cout<<"\n First number is "<<num1<<endl; 
                     }  
                     cout<<"Enter second number:";
                     cin>>num2;
                     num3=stand_calc::division(num1,&num2);
                     cout<<"\n Division of "<<num1<<" by "<<num2<<" is "<<num3;
                     cout<<"\n Press any key to continue..........";
                     getch();
                     temp=num3;
                     flag=old_cal;
                     break;           
                  case 5:
                     if(flag==new_cal){
                        cout<<"Enter first number:";
                        cin>>num1;
                     }
                     else{
                       num1=temp;
                       cout<<"\n First number is "<<num1<<endl; 
                     }  
                     cout<<"Enter second number:";
                     cin>>num2;
                     num3=stand_calc::modulus(&num1,&num2);
                     cout<<"\n Modulus of "<<num1<<" by "<<num2<<" is "<<num3;
                     cout<<"\n Press any key to continue..........";
                     getch();
                     temp=num3;
                     flag=old_cal;
                     break; 
                  case 6:
                     cout<<"\nReturning to previous menu.";           
                     cout<<"\n Press any key to continue.............";
                     getch();
                     break;
                  case 7:
                      cout<<"\n Quitting ...........";
                      cout<<"\nPress any key to continue...........";
                      getch();
                      exit(0);
                  case 8:
                      if(flag==new_cal){
                        cout<<"\n Invalid choice.";
                        cout<<"\n Press any key to continue..............";
                        getch();
                      }         
                      else{
                        temp=0;
                        flag=new_cal;
                      }         
                      break;
                  default:
                      cout<<"\n Invalid choice.";
                      cout<<"\n Press any key to continue...........";
                      getch();
                      break;     
                }
             }while (choice2!=6);
              break;
         case 2:
            do{
                system("cls");
                cout<<"\n\tSquare\n2\tCube\n3\tPower\n4\tFactorial\n5\tSin\n6\tCos\n7\tTan\n8\tReturn to previous menu\n9\tQuit";
               if(flag==old_cal)
                cout<<"\n10\tClear Memory";
                cout<<"\nChoose the type of calculator:";
                cin>>choice2;
                switch(choice2){
                  case 1:
                      if(flag==new_cal){
                        cout<<"Enter number to find square:";
                        cin>>num1;
                      }
                      else{
                        num1=temp;
                        cout<<"\nNumber is "<<num1<<endl;
                      }
                      num3=scien_calc::square(num1);
                      cout<<"\n Square of "<<num1<<" is "<<num3;
                      cout<<"\n Press any key to contiue.........";
                      getch();
                      temp=num3;
                      flag=old_cal;
                      break;
                   case 2:
                      if(flag==new_cal){
                        cout<<"Enter number to find cube:";
                        cin>>num1;
                      }
                      else{
                        num1=temp;
                        cout<<"\nNumber is "<<num1<<endl;
                      }
                      num3=scien_calc::cube(num1);
                      cout<<"\n Cube of "<<num1<<" is "<<num3;
                      cout<<"\n Press any key to contiue.........";
                      getch();
                      temp=num3;
                      flag=old_cal;
                      break;   
                  case 3:
                     if(flag==new_cal){
                        cout<<"Enter first number for base to find power:";
                        cin>>num1;
                      }
                      else{
                        num1=temp;
                        cout<<"\nNumber is "<<num1<<endl;
                      }
                      cout<<"Enter the second number for power to find power:";
                      cin>>num2;
                      num3=scien_calc::power(num1,num2);
                      cout<<"\n"<<num1<<"to the power"<<num2<<" is "<<num3;
                      cout<<"\n Press any key to contiue.........";
                      getch();
                      temp=num3;
                      flag=old_cal;
                      break; 
                  case 4:
                      if(flag==new_cal){
                        cout<<"Enter number to find factorial:";
                        cin>>num1;
                      }
                      else{
                        num1=temp;
                        cout<<"\nNumber to find factorial is "<<num1<<endl;
                      }
                      long int num4;
                      num4=scien_calc::fact(num1);
                      cout<<"\n Factorial of "<<num1<<" is "<<num4;
                      cout<<"\n Press any key to contiue.........";
                      getch();
                      temp=num4;
                      flag=old_cal;
                      break; 
                  case 5:
                     if(flag==new_cal){
                        cout<<"Enter number to find sin value:";
                        cin>>num1;
                      }
                      else{
                        num1=temp;
                        cout<<"\nNumber for sin value is "<<num1<<endl;
                      }
                      num3=scien_calc::sin_func(num1);
                      cout<<"\n Sin value of "<<num1<<" is "<<num3;
                      cout<<"\n Press any key to contiue.........";
                      getch();
                      temp=num3;
                      flag=old_cal;
                      break;
                  case 6:
                      if(flag==new_cal){
                        cout<<"Enter number to find cos:";
                        cin>>num1;
                      }
                      else{
                        num1=temp;
                        cout<<"\nNumber for cos value is "<<num1<<endl;
                      }
                      num3=scien_calc::cos_func(num1);
                      cout<<"\n Cos value of "<<num1<<" is "<<num3;
                      cout<<"\n Press any key to contiue.........";
                      getch();
                      temp=num3;
                      flag=old_cal;
                      break;
                  case 7:
                      if(flag==new_cal){
                        cout<<"Enter number to find tan value:";
                        cin>>num1;
                      }
                      else{
                        num1=temp;
                        cout<<"\nNumbern for tan value is "<<num1<<endl;
                      }
                      num3=scien_calc::tan_func(num1);
                      cout<<"\n Tan value of "<<num1<<" is "<<num3;
                      cout<<"\n Press any key to contiue.........";
                      getch();
                      temp=num3;
                      flag=old_cal;
                      break; 
                  case 8:
                      cout<<"\nReturning to previous menu.";
                      cout<<"\nPress any key to continue...........";
                      getch();
                      break;                     
                  case 9:   
                      cout<<"\n Quitting..............";
                      cout<<"\n Press any key to continue..............";
                      getch();
                      exit(0);                  
                  case 10:    
                      if(flag==new_cal){
                      cout<<"\n Invalid choice.";
                      cout<<"\n Press any key to continue...........";
                      getch();
                      }       
                      else{
                        temp=0;
                        flag=new_cal;
                      }          
                      break;
                  default:
                      cout<<"\nInvalid choice.";    
                      cout<<"\n Press any key to continue..............";
                      getch();
                      break;    
                } 
            }while(choice2!=8);
            break; 
          case 3:
           cout<<"\nQuitting.........";   
           cout<<"\nPress any key to continue..........";
           getch();
           break;
          case 4: 
            cout<<"\n Invalid Choice.";    
            cout<<"\n Press any key to continue........";
            getch();
            break;    
       }
    }while(choice1!=3);
   return 0;  
}
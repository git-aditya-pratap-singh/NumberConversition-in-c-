#include<iostream>
#include<math.h>
#include<conio.h>
#include<string.h>
using namespace std;
class Conversion
{
public:
void dectobinary(int n)   //press 1;
{
long int binarynum[32];
int i=0; 
  while(n>0)   //start the loop 
   {
	binarynum[i]=n%2;
	n=n/2;
	i++;       
   }             //end of loop
   cout<<"\n\t Binary number : ";
for(int j=i-1;j>=0;j--)
cout<<""<<binarynum[j];
cout<<"\n\t---------------------------------------------"; 
}                       // end of press 1

void bintodecimal(long int m)   //press 2;
{
	long int rem,decimal_num=0;
	int i=0;
	while(m>0)
	{
		rem=m%10;
		decimal_num+=rem*pow(2,i);
		m=m/10;
		i++;
	} 
	cout<<"\n\t Decimal number : ";              
      cout<<"\t"<<decimal_num;
	cout<<"\n\t---------------------------------------------";  
}                     //end of press 2

void bintooctal(int k)   //press 3;
{
	long int octal_num[32],decimal_num=0,i=0,rem,j;
	while(k!=0)
	{
		rem=k%10;
		decimal_num=decimal_num+rem*pow(2,i);
		i++;
		k=k/10;
	}
   i=0;
    while(decimal_num!=0)
    {
    	
    	octal_num[i]=decimal_num%8;
    	decimal_num=decimal_num/8;
    	i++;
    }
    cout<<"\n\t Octal number : ";
    for(int j=i-1;j>=0;j--)
   	cout<<""<<octal_num[j];
   	cout<<"\n\t---------------------------------------------";
 }                          //end of press 3
 
void bintohexadecimal(int p)    //press 4
{
	long int rem,decimal_num=0,j;
	char hexadecimal[50];
	int i=0;
	while(p>0)
	{
		rem=p%10;
		decimal_num+=rem*pow(2,i);
		p=p/10;
		i++;
	}

     while(decimal_num!=0)
     {
     	  rem=decimal_num%16;
     	  if(rem<10)
     	     hexadecimal[i++]=rem+48;
     	     else
     	     {
     	     	hexadecimal[i++]=rem+55;
	     }
	     decimal_num=decimal_num/16;
	}	
	cout<<"\n\t Hexadecimal number : ";
	for(j=i-1;j>=0;j--)
	cout<<hexadecimal[j];
	cout<<"\n\t---------------------------------------------";
}                            //end of press 4

void dectooctal(int q)       //press 5;
{
   	long int octal_num[32],i=0,j; 
     while(q!=0)
    {
    	
    	octal_num[i]=q%8;
    	q=q/8;
    	i++;
    }
    cout<<"\n\t Octal number : ";
    for(int j=i-1;j>=0;j--)
   	 cout<<""<<octal_num[j];
   	 cout<<"\n\t---------------------------------------------";
 }                            // end of press 5
 
  void dectohexadecimal(int a)    //press 6
  {
     long int i=0,j,rem;
     char hexadecimal[50];
     while(a!=0)
     {
     	  rem=a%16;
     	  if(rem<10)
     	     hexadecimal[i++]=rem+48;
     	     else
     	     {
     	     	hexadecimal[i++]=rem+55;
	     }
	     a=a/16;
	}	
	cout<<"\n\t Hexadecimal number : ";
	for(j=i-1;j>=0;j--)
	cout<<hexadecimal[j];
	cout<<"\n\t---------------------------------------------";
  }                         // end of press 6
  
   void hexadecimaltobinary(char hexdec[])   //press 7
   {
     int i=0;
   	while(hexdec[i])
   	{
   		switch(hexdec[i])
   		{
   		case'0':
		   cout<<"0000";
		   break;
		case'1':
		   cout<<"0001";
		   break;
		case'2':
		   cout<<"0010";
		   break;
		case'3':
		   cout<<"0011";
		   break;
		case'4':
		   cout<<"0100";
		   break;
		case'5':
		   cout<<"0101";
		   break;
		case'6':
		   cout<<"0110";
		   break;
		case'7':
		   cout<<"0111";
		   break;
		case'8':
		   cout<<"1000";
		   break;
		case'9':
		   cout<<"1001";
		   break;
		case'A':
		case'a':
		   cout<<"1010";
		   break;
		case'B':
	      case'b':
		   cout<<"1011";
		   break;
		case'C':
	      case'c':
		   cout<<"1100";
		   break;
		case'D':
		case'd':
		   cout<<"1101";
		   break;
		case'E':
		case'e':
		   cout<<"1110";
		   break;
		case'F':
	      case'f':
		   cout<<"1111";
		   break;
		default:
		  cout<<"\n Invalid number";
		  break;   	
      	}
	      i++;
	   }  
   }           // end of press 7
   
void hexadecimaltodecimal(char c[])  //press 8
{
	long int dec_val=0;
	int base=1;
	int len=strlen(c);
	for(int i=len-1;i>=0;i--)
	{
		if(c[i]>='0' && c[i]<='9')
		{
			dec_val=dec_val+(c[i]-48)*base;
			base=base*16;
		}
		else  
		{
			dec_val=dec_val+(c[i]-55)*base;
			base=base*16;
		}
	}
	cout<<"\n\t Decimal number : "<<dec_val;
      cout<<"\n\t---------------------------------------------";	
}                    // end of press 8


   void hexadecimaltooctal(char d[])   //press 9
   {
   	long int octal_num[50];
       long int dec_val=0;
	int base=1,j;
	int len=strlen(d);
	for(int i=len-1;i>=0;i--)
	{
		if(d[i]>='0' && d[i]<='9')
		{
			dec_val=dec_val+(d[i]-48)*base;
			base=base*16;
		}
		else if(d[i]>='A' && d[i]<='F')
		{
			dec_val=dec_val+(d[i]-55)*base;
			base=base*16;
		}
	}
		  
    int i=0;
     while(dec_val!=0)
     {
    	octal_num[i]=dec_val%8;
      dec_val=dec_val/8;
    	i++;
     }
    cout<<"\n\t Octal number : ";
    for(int j=i-1;j>=0;j--)
   	 cout<<""<<octal_num[j];
   	 cout<<"\n\t---------------------------------------------";
}                           // end of press 9


  void octaltobinary(int e)    //press 10;
   {
   	 int decimal_num=0,i=0,rem,binarynum[32],j;
	while(e!=0)
	{
	   rem=e%10;
	   decimal_num+=rem*pow(8,i);
	   e=e/10;
	   i++;
      }
i=0; 
  while(decimal_num>0)   //start the loop 
   {
	binarynum[i]=decimal_num%2;
	decimal_num=decimal_num/2;
	i++;       
   }             //end of loop
      cout<<"\n\t Binary number : ";
      for(int j=i-1;j>=0;j--)
      cout<<""<<binarynum[j];
      cout<<"\n\t---------------------------------------------";	
   }                 // end of press 10
   
 void octaltodecimal(int f)    //press 11;
 {
      long int decimal_num=0,i=0,rem;
	while(f!=0)
	{
	   rem=f%10;
	   decimal_num+=rem*pow(8,i);
	   f=f/10;
	   i++;
	}
	cout<<"\n";
	cout<<"\t Decimal number : "<<decimal_num;
      cout<<"\n\t---------------------------------------------";		
 }                             // end of press 11
 
 void octaltohexadecimal(int g)  //press 12
 {
   long int decimal_num=0,i=0,rem,j;
    char hexadecimal[50];
	while(g!=0)
	{
	   rem=g%10;
	   decimal_num+=rem*pow(8,i);
	   g=g/10;
	   i++;
	}
	cout<<"\n";
	
     while(decimal_num!=0)
     {
     	  rem=decimal_num%16;
     	  if(rem<10)
     	     hexadecimal[i++]=rem+48;
     	     else
     	     {
     	     	hexadecimal[i++]=rem+55;
	     }
	     decimal_num=decimal_num/16;
	}	
	cout<<"\n\t Hexadecimal number : ";
	for(j=i-1;j>=0;j--)
	cout<<hexadecimal[j];
      cout<<"\n\t---------------------------------------------";	
 }                   // end of press 12
};



int main()
{ 
   long int n[100],option,m[32],k[32],p[32];
   long int q;
   long int a;
   long int e,f,g;
   char binnum[100], hexdec[100];
   char c[100];
   char d[100];
   long int dec_val=0;
   //clrscr();
   Conversion obj;      // create obj of the class name conversion;
do
{
	cout<<"\n\t\t\t\t********WELCOME TO NUMBER SYSTEM CONVERSION ********";
	cout<<"\n\n\n";
	cout<<"\n\n\t---------------------------------------------";
	cout<<"\n\t\t******* MAIN MENU ******";
	cout<<"\n\n\t PRESS  1. Decimal to convert's Binary number ";
	cout<<"\n\n\t PRESS  2. Binary to convert's Decimal number ";
	cout<<"\n\n\t PRESS  3. Binary to convert's Octal number ";
	cout<<"\n\n\t PRESS  4. Binary to convert's Hexadecimal number ";
	cout<<"\n\n\t PRESS  5. Decimal to convert's Octal number ";
	cout<<"\n\n\t PRESS  6. Decimal to convert's Hexadecimal number ";
	cout<<"\n\n\t PRESS  7. Hexadecimal to convert's Binary number ";
	cout<<"\n\n\t PRESS  8. Hexadecimal to convert's Decimal number ";
	cout<<"\n\n\t PRESS  9. Hexadecimal to convert's Octal number ";
	cout<<"\n\n\t PRESS 10. Octal to convert's Binary number ";
	cout<<"\n\n\t PRESS 11. Octal to convert's Decimal number ";
	cout<<"\n\n\t PRESS 12. Octal to convert's Hexadecimal number ";
	cout<<"\n\n\t PRESS 13. EXIT ";
	cout<<"\n\t---------------------------------------------";
	cout<<"\n\n\t -> PRESS the keys : ";
	cin>>option;

switch(option)
{
   case 1:
      {
	cout<<"\n\t Enter the Decimal number : ";
	cin>>n[100];
	obj.dectobinary(n[100]); //calling to function
	break;
      }
   case 2:
   	{
   	cout<<"\n\t Enter the Binary number : ";
	cin>>m[32];
	obj.bintodecimal(m[32]); //calling function
	break;	
      }
   case 3:
     {
      cout<<"\n\t Enter the Binary number : ";
      cin>>k[32];
      obj.bintooctal(k[32]); //calling function
      break;
     }
    case 4:
   	{
   	cout<<"\n\t Enter the Binary number : ";
   	cin>>p[32];
   	obj.bintohexadecimal(p[32]);   //calling function
   	break;
     }
   case 5:
   	{
   	cout<<"\n\t Enter the Decimal number : ";
   	cin>>q;
   	obj.dectooctal(q);   //calling function
   	break;
      }
    case 6:
    	{
    	cout<<"\n\t Enter the Decimal number : ";
    	cin>>a;
    	obj.dectohexadecimal(a);   //calling function
    	break;
    	}
    case 7:
    	{
    	cout<<"\n\t Enter the Hexadecimal number : ";
    	cin>>hexdec;
    	cout<<"\n\t Binary number : ";
    	obj.hexadecimaltobinary(hexdec);   //calling function
    	break;
      }
    case 8:
      {
      cout<<"\n\t Enter the Hexadecimal number : ";
      cin>>c;
      obj.hexadecimaltodecimal(c);   //calling function
      break;
	}  
    case 9:
    	{
    	cout<<"\n\t Enter the Hexadecimal number : ";
    	cin>>d;
    	obj.hexadecimaltooctal(d);   //calling function
    	break;
      }
    case 10:
      {
      cout<<"\n\t Enter the Octal number : ";
      cin>>e;
      obj.octaltobinary(e);    //calling function
      break;
      }
    case 11:  
      {
      cout<<"\n\t Enter the Octal number : ";
      cin>>f;
      obj.octaltodecimal(f);   //calling function
      break;	
      }
    case 12:
      {
      cout<<"\n\t Enter the Octal number : ";
      cin>>g;
      obj.octaltohexadecimal(g);   //calling function
      break;
      }
    case 13:
      {
      cout<<"\n\t PRESS ANY KEY :";
      break;
      }		   
  }
 }while(option!=14);
 //getch();
	return 0;
}



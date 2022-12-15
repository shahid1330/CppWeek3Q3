#include<iostream>
#include<conio.h>
using namespace std;
class string_reverse
{
	char s[15];
	public:
		void input()
		{

			cout<<"Enter the String  : " <<endl;
			cin>>s;
			cout<<s<<endl;
		}
		
		void reverse()
		{
			//finding size
			int size=0;
		    char *str=s;
			while(*str!='\0')
			{
				size++;
				str++;
			}
			
			str--; // omitting the extra last space 
			
			//reversing the string
			char *ptr=s;
			int i=1;
			while(i<=size/2)
			{ 
			  char temp;
			  temp=*ptr;
			  *ptr=*str;
			  *str=temp;
			  
			  str--;
			  ptr++;
			  i++;
			}
			//printing issue here
			cout<<s;
			 
			 
		}
};
int main()
{
	string_reverse ob;
	ob.input();
	ob.reverse();
	getch();
}

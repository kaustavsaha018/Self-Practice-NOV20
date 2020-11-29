//Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
#include<stdio.h>
int main(){
	char s[10];
	int i;
	gets(s);
	
	if(s[8]==80){
		if(s[0]==48){
			if(s[1]<=55){
					s[0]=s[0]+1;
					s[1]=s[1]+2;	
			}
			else{
				
				s[0]='2';
				s[1]=s[1]-8;
			}	
		}
		else if(s[0]==49 && s[1]<=49){
		
				s[0]='2';
				s[1]=s[1]+2;
		}
		
	}
	else if(s[8]==65){
		if(s[0]==49){
			s[0]='0';
			s[1]='0';
		}
	}
	for(i=0;i<8;i++){
		printf("%c",s[i]);
	}
	return 0;
}

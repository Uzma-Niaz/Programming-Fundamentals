#include <stdio.h>
#include <conio.h>
int main(){
	
	char vowel;
	printf("Enter Any Letter:\n");
	scanf("%c",&vowel);
    if(vowel=='a'||vowel=='e'||vowel=='i'||vowel=='o'||vowel=='u'){
    	printf("This is a vowel\n");
	}
	else{
		printf("This is a consonant\n");
	}
	getch();
	return 0;
}
	

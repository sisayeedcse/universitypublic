# include<stdio.h>

void main(){

char a, b, c, d, e, f;

a = 'S', b = 'a', c = 'y', d = 'e' , e = 'e', f = 'd';

// This is the name output
printf("This is the name - %c%c%c%c%c%c \n", a,b,c,d,e,f);

//This line is for the uppercase
printf("This is the UpperCase style - %c%c%c%c%c%c \n",toupper(a),toupper(b),toupper(c),toupper(d), toupper(e), toupper(f) );

//This line is for the lowercase
printf("This is the LowerCase style - %c%c%c%c%c%c \n",tolower(a),tolower(b),tolower(c),tolower(d), tolower(e), tolower(f) );

}

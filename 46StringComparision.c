#include <stdio.h>

int main(){
char firstName[25];
char lastName[25];

printf("Enter first name: ");
gets(firstName);

printf("Enter last name: ");
gets(lastName);

if(strcmp(firstName, lastName) == 0 ){
	printf("Both Sring Are Equal");
}else{
	printf("Both Sring Are Not Equal");
}

return 0;
}

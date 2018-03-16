#include <stdio.h>

int main(void) {
    	int age, a;
    	scanf("%d", &age);
    	a = age % 10;
    	switch (age){
            	case 11 :
            	case 12 :
            	case 13 :
            	case 14 :printf("Мне %d лет\n", age); break;
    	default: switch (a){
                    	case 1:printf("Мне %d год\n", age); break;
                    	case 2:
                    	case 3:
                    	case 4:printf("Мне %d года\n", age); break;
                    	case 5:
                    	default :printf("Мне %d лет\n", age); break;
            	}
    	}
return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

// Une fonctione qui renvoie 1 si le nombre est premier, 0 sinon
bool isprime(long int nb){
	assert(nb>1);
	bool prime=true;
	for (long int i=2;i*i<=nb;i++){
		if (nb%i==0){return !prime;}
	}
	return prime;
}

// Une fonction qui renvoie un nombre premier aléatoire en temps O(n)
int random_prime(long int nb){
	srand(time(NULL));
	long int rprime[nb];
	long int i=0;
	for (long int j=2;j*j<nb;j++){
		if (isprime(j)){
			rprime[i]=j;
			i++;
		}
	}
	return rprime[rand() % i];
}
int main(void){
	/* printf("%d", random_prime(761)); Renvoie un nombre premier < 761
	   printf("%d", is_prime(11)) Renvoie 1
	*/
	return 0;
}
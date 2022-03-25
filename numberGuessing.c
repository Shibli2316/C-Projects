#include <stdio.h>
int main(){
	int secretNumber=5;
	int guess;
	int guessCount=0;
	int guessLimit=3;
	int outOFguessess=0;
	while (guess != secretNumber && outOFguessess!=1){
		if (guessCount<guessLimit){
		printf("Enter a number: ");
		scanf("%d", &guess);
		guessCount++;
		}else {
			outOFguessess=1;
		}
	}
	if (outOFguessess==1){
		printf("Out of guessess");
	}else{
		printf("You win");	
	}
	return 0;
}

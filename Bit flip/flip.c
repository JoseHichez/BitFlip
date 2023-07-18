//Jose Hichez
//PID: 6186740
// I affirm that I wrote this program myself without any help from the internet or any other people or sources   


#include <stdio.h>

int main(int argc, const char* argv[] ){//the start of the program
	int num, flip;// variable are created to hold the input
       	char flag1='y';//variables to break out of the loop 
	char flag2='y';//variable to break out of the loop
	char ch = 'y';//variable to break out of the loop   

		printf("Enter the starting value:\n");//Enter the starting value between 1 and 25000
		
		if (scanf("%d", &num) !=1){
			fgetc(stdin);
			printf("Not an integer.\n");//If the user enters something other  than a integer
		}
		else{
			printf("Number entered: %d\n", num);
			if(num >= 1 && num <= 25000){//Prints the number entered between 1 and 25000  

				while (flag2 != 'n'){//if the input is incorrect outer while loop
					do {//start the loop 

						printf("Enter the bit to flip :\n");// enters the bit to flip
				
						if(scanf("%d", &flip) !=1){
							fgetc(stdin);
							printf("Not an integer.\n");//prints if the user enters something other than an integer 

						}
						else if (flip >= 0 && flip <= 31){
							printf("Number entered: %d\n", flip);//enters the bit to flip between 0 and 31 
							printf("Flipping %d and %d will Result:%d\n",num,flip, (num^((1 << flip))));// gives the user the result
							printf("Do you want to run this again Y/N :\n");//asks the user if they want to run it again between Yes or no 

							scanf(" %c", flag2);
						}
						else{
							printf("Number is not between 0 and 31.\n");//Tells the user if the bit is not between  0 and 31
						}

					}while(ch != 'n' || ch != 'N');//if the user wants to run it again 
				}
			}		
			else{	
				printf("Number entered is not between 1 to 25000.\n", num);//tells the user if the starting value is not between 1 and 25000
			}
			
		}
	        return 0;	//ends program
}


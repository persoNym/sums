#include<stdio.h>
#include<math.h>
     
#define LIMIT 10
     
     
    int main(void)
    {
            // Input from user - the amount of numbers he entered, and the values
            int numberOfValues;
            int enteredValues[LIMIT];
     
            // Temp values for our loops
            int userInput;
            int i;

	    int negsum=0;
	    int possum=0;
	    int plus, minus;
	    float total1 = 0.0;
	    float total2 = 0.0;
	    float avg1;
	    float avg2;           

 		for (i = 0; i < LIMIT; i++)
            		{
                    // Remember how many values we are using
                    numberOfValues = i;
     
                    // Get the next value
                    printf("Enter a value. Enter 0 to stop:\n");
                    scanf("%d", &userInput);
     
                    // If the input isn't 0, store it, otherwise break the loop
                if (userInput != 0)
                    {
                            // Put the current input at our current position in the array
                            enteredValues[i] = userInput;
                    }
                    else
                    {
                            break;
                    }
            }
  		for(i = 0; i < numberOfValues; i++) {
                    printf("Value %d: %d\n", i, enteredValues[i]);
            	}



		for(i = 0; i < numberOfValues; i++) {

			if(enteredValues[i] > 0) {
				plus++;	
		}

		else if(enteredValues[i] < 0) {
			minus++;
		}
	}     




	for(i = 0; i < numberOfValues; i++) {

		if(enteredValues[i] > 0) {
			possum = possum + enteredValues[i];
			total1 = possum + enteredValues[i];
	}

	else if(enteredValues[i] < 0) {
		negsum = negsum + enteredValues[i];
		total2 = possum +enteredValues[i];
	}
	}


	avg1 = total1/numberOfValues;
	avg2 = total2/numberOfValues;
	printf("Sum of postive numbers:%d\n", possum);
	printf("Average of postive numbers:%.2f\n", avg1);
	printf("Sum of negative numbers:%d\n", negsum);
	printf("Average of negative numbers:%.2f\n", avg2);
	
	



return 0;
}



#include <stdio.h>
/* print fahrenheit to celcius table for fahr = 0, 20, ... , 300 */

main()
{
	float fahr, celcius;
	int lower, upper, step;
	
	lower = 0; 	/*lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/*step size */
	
	fahr = lower;
	printf("fahr      celc\n");
	while(fahr <= upper) {
		celcius = (5.0/9.0) * (fahr-32);
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}


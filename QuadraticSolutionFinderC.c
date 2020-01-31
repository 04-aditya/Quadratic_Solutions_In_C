#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
		int i;
		float a,b,c,root,det,det1,det2,det3,root1,root2,root3,root4,b1;
		i = 0;
		while (i==0){
		printf("\n\nEnter coefficients of the quadratic equation of form ax^2 + bx + c.\nPress 'Enter' after each coefficient, in the form:\na\nb\nc\n\nEnter coefficients now:\n");
		scanf("%f %f %f",&a,&b,&c);

		det= (b*b-4*a*c);
		det3=sqrt(det);
		det1= -(b*b-4*a*c);
		det2=sqrt(det1)/2*a;
		b1=-b/2*a;
		if(det>0)
		{
			root1= (-b+det3)/2*a;
			root2= (-b-det3)/2*a;
			printf("The roots are real and distinct.\nRoots= %f   AND  %f ",root1,root2);

		}

		else if(det<0)
		{
			printf("The roots are imaginary. \n Roots= %0.2f+%0.2fi   AND  %0.2f-%0.2fi ",b1,det2,b1,det2);
		}
		else
		{
			root= (-b)/2*a;
			printf("The roots are real and equal. \nRoot= %f ",root);
		}
		printf("\n\nEnter '1' to end the program.\nEnter '0' to solve another equation.\nEnter '1' or '0': ");
		scanf("%d",&i);
		printf("-----------------------------------------------------------");
}
printf("\nThank you for using our program!");
}

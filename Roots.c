#include <stdio.h>
#include<math.h>
int main() {
    int a,b,c,r1,r2;
    printf("TO FIND THE ROOTS of the Quadratic Equation\n");
    printf("Enter the Co-eff of x^2 term:");
    scanf("%d",&a);
    printf("Enter the Co-eff of x term: ");
    scanf("%d",&b);
    printf("Enter the Co-eff of Constant term: ");
    scanf("%d",&c);
    r1 = -b + pow(b*b - 4*a*c,0.5);
    r2 = -b - pow(b*b - 4*a*c,0.5);
    printf("Therefore the Roots are:-\n",a,b,c);
    printf("1st Root: %d\n2nd Root: %d",r1/(2*a),r2/(2*a)); 
    return 0;
}
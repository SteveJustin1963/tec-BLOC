\\ ballistics calculation

#include <stdio.h>
#include <math.h>

int main()

{
   double v0, theta, vx, vy, t, g;
   g = 9.81;

   printf("Enter the initial velocity (m/s): ");
   scanf("%lf", &v0);

   printf("Enter the launch angle (degrees): ");
   scanf("%lf", &theta);

   printf("Enter the time (seconds): ");
   scanf("%lf", &t);

   theta = theta * (M_PI/180); // converts degrees to radians

   vx = v0 * cos(theta); //calculates velocity in the x direction
   vy = v0 * sin(theta); //calculates velocity in the y direction

   printf("\nVelocity in the x-direction: %.2lf m/s", vx);
   printf("\nVelocity in the y-direction: %.2lf m/s", vy);

   printf("\n\nHorizontal Distance: %.2lf meters", (vx * t)); //calculates and prints horizontal distance
   printf("\nVertical Distance: %.2lf meters", (vy * t) - ((1/2) * g * pow(t, 2))); //calculates and prints vertical distance

   return 0;
}

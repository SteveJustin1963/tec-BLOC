 

#include <stdio.h>
#include <math.h>

int main()

{
   double v0, theta, vx, vy, t, g, d;
   g = 9.81;

   printf("Enter the initial velocity (m/s): ");
   scanf("%lf", &v0);

   printf("Enter the launch angle (degrees): ");
   scanf("%lf", &theta);

   printf("Enter the time (seconds): ");
   scanf("%lf", &t);

   printf("Enter the distance to target (meters): ");
   scanf("%lf", &d);

   theta = theta * (M_PI/180); // converts degrees to radians

   vx = v0 * cos(theta); //calculates velocity in the x direction
   vy = v0 * sin(theta); //calculates velocity in the y direction

   printf("\nVelocity in the x-direction: %.2lf m/s", vx);
   printf("\nVelocity in the y-direction: %.2lf m/s", vy);

   printf("\n\nHorizontal Distance: %.2lf meters", (vx * t)); //calculates and prints horizontal distance
   printf("\nVertical Distance: %.2lf meters", (vy * t) - ((1/2) * g * pow(t, 2))); //calculates and prints vertical distance

   if (d == (vx * t)) { //compares horizontal distance to target with actual horizontal distance
      printf("\n\nThe target is %.2lf meters away horizontally.", d);
   } else if (d < (vx * t)) {
      printf("\n\nThe target is %.2lf meters closer than the calculated horizontal distance.", ((vx * t) - d));
   } else {
      printf("\n\nThe target is %.2lf meters further than the calculated horizontal distance.", (d - (vx * t)));
   }

   if (d == ((vy * t) - ((1/2) * g * pow(t, 2)))) { //compares vertical distance to target with actual vertical distance
      printf("\nThe target is %.2lf meters away vertically.", d);
   } else if (d < ((vy * t) - ((1/2) * g * pow(t, 2)))) {
      printf("\nThe target is %.2lf meters closer than the calculated vertical distance.", (((vy * t) - ((1/2) * g * pow(t, 2))) - d));
   } else {
      printf("\nThe target is %.2lf meters further than the calculated vertical distance.", (d - ((vy * t) - ((1/2) * g * pow(t, 2)))));
   }

   return 0;
}

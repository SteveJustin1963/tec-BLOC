v0 = input("Enter the muzzle velocity: ")
v0 = int(v0)

angle = input("Enter the firing angle: ")
angle = int(angle)

g = 9.81

y = v0*math.sin(angle)*t - 0.5*g*t**2
print (y)

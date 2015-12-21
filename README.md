# Final pt. 2
Calculates total energy of the interaction between two identical cubes whose corresponding edges are parallel to coordinate axes.
The total charge of the cubes is zero and the dipole momentum is one.

The total energy of the interaction is the integral: V(r) = int ((dx1dy1dz1dx2dy2dz2 ρ(x1,y1,z1) ρ(x2, y2,z2)/ sqrt((x1 − x2 + r)^2 + (y1 − y2)^2 + (z1 − z2)^2)) where r is the distance between the center of the cubes.

This integral is calculated using a Vegas algorithm and a homemade Monte Carlo algorithm. (See results). They are then plotted against a dipole approximation. The dipole approximation closely matched the Vegas and homemade algorithm at a distance of ~2.

![alt tag](https://github.com/matthewignal/fin2/blob/master/plot.png)


import numpy as np
import matplotlib.pyplot as plt
import mpl_toolkits.mplot3d as Axes3D

# Load the dat file into python
data = np.loadtxt("output.dat",dtype=np.float64)

# Extract the variables
t = data[:,0];
x = data[:,1];
y = data[:,2];
z = data[:,3];


init = [0.0, 1.0, 0.0];



fig = plt.figure()
str1 = "init = {}".format(init)
str2 = ", $R = 20$, $S = 10$, $B = \\frac{8}{3}$"
ax = fig.gca(projection='3d')
ax.plot(x,y,z,'r',label='Lorentz Butterfly')
ax.set_xlabel("x")
ax.set_ylabel("y")
ax.set_zlabel("z")
plt.title("Lorentz Butterfly Attracter")
plt.suptitle(str1+str2)
plt.savefig("Lorentz_butterfly.png",format='png',dpi=400)
plt.show()






from mpl_toolkits import mplot3d
import numpy as np
import matplotlib.pyplot as plt

fig = plt.figure()
ax = plt.axes(projection='2d')

# z = np.linspace(0, 1, 100)
x =  np.sin(25 )
y =  np.cos(25 )

ax.plot3D(x, y, 'green')
ax.set_title('3D Line Plot')
plt.show()
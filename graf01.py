import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt("datos01.txt")
plt.figure()
plt.plot(datos[:,1],datos[:,0])
plt.savefig('adveccion.pdf')

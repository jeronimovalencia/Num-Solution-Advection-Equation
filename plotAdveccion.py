import numpy as np
import matplotlib.pyplot as plt

datos = np.genfromtxt("datosAdveccion.dat")

plt.figure()
plt.title("Tiempo = "+str(datos[0,1]))
plt.plot(datos[1:,0],datos[1:,1])
plt.savefig("grafica.pdf")

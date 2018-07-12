import numpy as np
import matplotlib.pyplot as plt

datos = np.genfromtxt("datosAdveccion.dat")

plt.figure(figsize=(10,5 ))
plt.title("Solucion a la ec. de Adveccion")
plt.plot(datos[1:,0],datos[1:,1],label="Tiempo = "+str(datos[0,1]))
plt.plot(datos[1:,0],datos[1:,2],label="Cond. Inicial")
plt.legend(loc='upper left')
plt.savefig("grafica.pdf")

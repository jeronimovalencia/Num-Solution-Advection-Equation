grafica.pdf : plotAdveccion.py datosAdveccion.dat
	python plotAdveccion.py
	xdg-open grafica.pdf
	rm datosAdveccion.dat

datosAdveccion.dat : datosAdveccion.exe
	./datosAdveccion.exe > datosAdveccion.dat
	rm datosAdveccion.exe

datosAdveccion.exe : ValenciaJeronimoAdveccion.cpp
	g++ ValenciaJeronimoAdveccion.cpp -o datosAdveccion.exe

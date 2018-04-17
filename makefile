adveccion.pdf: graf01.py datos01.txt
	python graf01.py

datos01.txt: Ej20 
	./Ej20 > datos01.txt

Ej20: Ej20.cpp
	c++ Ej20.cpp -o Ej20 

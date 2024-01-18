all	: output

output	: Guillot_Natthan_app.o Guillot_Natthan_Horaire.o Guillot_Natthan_train.o Guillot_Natthan_Compagnie.o
	g++	Guillot_Natthan_app.o Guillot_Natthan_Horaire.o Guillot_Natthan_train.o Guillot_Natthan_Compagnie.o -o output

main.o : Guillot_Natthan_app.cpp
	g++ -c Guillot_Natthan_app.cpp

Guillot_Natthan_Horaire.o : Guillot_Natthan_Horaire.cpp Guillot_Natthan_Horaire.h
	g++ -c Guillot_Natthan_Horaire.cpp

Guillot_Natthan_train.o : Guillot_Natthan_train.cpp Guillot_Natthan_train.h
	g++ -c Guillot_Natthan_train.cpp

Guillot_Natthan_Compagnie.o : Guillot_Natthan_Compagnie.cpp Guillot_Natthan_Compagnie.h
	g++ -c Guillot_Natthan_Compagnie.cpp

clean:
	rm *.o output
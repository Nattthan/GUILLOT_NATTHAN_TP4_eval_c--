all	:	output

output	:	main.o	Dresseur.o	Pokemon.o TypePokemon.o
	g++	main.o	Dresseur.o	Pokemon.o TypePokemon.o	-o	output

main.o : main.cpp
	g++ -c main.cpp

Dresseur.o : Dresseur.cpp Dresseur.hpp
	g++ -c Dresseur.cpp

Pokemon.o : Pokemon.cpp Pokemon.hpp
	g++ -c Pokemon.cpp

TypePokemon.o : TypePokemon.cpp TypePokemon.hpp
	g++ -c TypePokemon.cpp

clean:
	rm *.o output
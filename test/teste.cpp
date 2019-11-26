#include <iostream>
#include <string>
#include "anfibio.hpp"
#include "animal.hpp"
#include "ave.hpp"
#include "funcionario.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"
// #include "tratador.hpp"
// #include "veterinario.hpp"
#include "pet_manager.hpp"

using namespace std;

int main(int argc, char * argv[]) {
	
	int optionInterface = 0;
	vector<Animal> animais;

	do {

		int optionAnimal = 0;

		optionInterface = interface_grafica();

		
		if( optionInterface == 1 )
		{

			optionAnimal = opcoesAnimais();

			if(optionAnimal == 1)
			{
				Anfibio anfibio;
				cadastrarAnfibio(anfibio);
				animais.push_back(anfibio);
			}
			else if(optionAnimal == 2)
			{
				Ave ave;
				cadastrarAve(ave);
				animais.push_back(ave);
			}
			else if(optionAnimal == 3)
			{
				Mamifero mamifero;
				cadastrarMamifero(mamifero);
				animais.push_back(mamifero);
			}
			else if(optionAnimal == 4)
			{
				Reptil reptil;
				cadastrarReptil(reptil);
				animais.push_back(reptil);
			}

		}

		else if( optionInterface == 2 )
		{
			// listarAnimais(animais);
		}

	} while(optionInterface != 0);

	return 0;
}
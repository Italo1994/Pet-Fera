#ifndef GERENCIAR_PET_HPP
#define GERENCIAR_PET_HPP

#include <iostream>
#include <string>
#include <vector>
#include "animal.hpp"


/* ##################  FUNÇÃO ADD_ANIMAL => NÃO RECEBE PARÂMETROS  ################# */

using namespace std;
	
	void interface_grafica();

	int opcoes();

	Animal cadastrar_animal(int opcaoAnimal);


#endif
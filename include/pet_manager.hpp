#ifndef PET_MANAGER_HPP
#define PET_MANAGER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "animal.hpp"
#include "anfibio.hpp"
#include "ave.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"


/* ##################  FUNÇÃO ADD_ANIMAL => NÃO RECEBE PARÂMETROS  ################# */

using namespace std;
	
	int interface_grafica();

	int opcoesAnimais();

	void cadastrarAnfibio(Anfibio &m_anfibio);

	void cadastrarAve(Ave &m_ave);

	void cadastrarMamifero(Mamifero &m_mamifero);

	void cadastrarReptil(Reptil &m_reptil);


#endif
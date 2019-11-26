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
	
	/**
       * Uma função para gerar uma interface gráfica de apoio ao usuário.
       * @param não recebe nenhum parâmetro.
       * 
       * @return retorna a opção do menu escolhida pelo usuário
    */
	int interface_grafica();

	/**
       * Uma função para mostrar ao usuário os tipos de animais que podem ser cadastrados.
       * @param não recebe nenhum parâmetro.
       * 
       * @return retorna a opção do tipo de animal escolhida pelo usuário
    */
	int opcoesAnimais();

	/**
       * Uma função para cadastrar um animal do tipo Anfibio.
       * @param recebe um objeto do tipo Anfibio como parâmetro.
       * 
       * @return retorna um objeto do tipo Anfibio
    */
	void cadastrarAnfibio(Anfibio &m_anfibio);

	/**
       * Uma função para cadastrar um animal do tipo Ave.
       * @param recebe um objeto do tipo Ave como parâmetro.
       * 
       * @return retorna um objeto do tipo Ave
    */
	void cadastrarAve(Ave &m_ave);

	/**
       * Uma função para cadastrar um animal do tipo Mamifero.
       * @param recebe um objeto do tipo Mamifero como parâmetro.
       * 
       * @return retorna um objeto do tipo Mamifero
    */
	void cadastrarMamifero(Mamifero &m_mamifero);

	/**
       * Uma função para cadastrar um animal do tipo Reptil.
       * @param recebe um objeto do tipo Reptil como parâmetro.
       * 
       * @return retorna um objeto do tipo Reptil
    */
	void cadastrarReptil(Reptil &m_reptil);

	void listarAnimais(vector<Animal> &animais);

#endif
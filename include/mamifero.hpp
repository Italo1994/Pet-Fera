#ifndef MAMIFERO_H_
#define MAMIFERO_H_

#include <iostream>
#include <string>
#include "animal.hpp"

using namespace std;

	class Mamifero : public Animal {
		private:
			string cor_pelo; // cor do pelo do mamifero

		public:
			// construtores e destrutor da classe
			Mamifero();
			Mamifero(string m_cor_pelo);
			~Mamifero();

			//métodos getters e setters referentes a classe
			void setCorDoPelo(string m_cor_pelo);
			string getCorDoPelo();
	};

#endif
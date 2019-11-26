#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <iostream>
#include "animal.hpp"

using namespace std;

	class Anfibio : public Animal {
		private:
			int total_de_mudas; // mudas do anfíbio
			//Date ultima_muda;

		public:
			// construtor
			Anfibio();
			// construtor parametrizado
			Anfibio(int m_total_de_mudas);
			// destrutor
			~Anfibio();

			// métodos getters e setters referentes a classe 
			void setTotalDeMudas(int m_total_de_mudas);
			int getTotalDeMudas();
	};

#endif
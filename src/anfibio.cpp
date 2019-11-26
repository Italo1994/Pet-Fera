#include "anfibio.hpp"

#construtor
Anfibio::Anfibio()
{

}

Anfibio::Anfibio(int m_total_de_mudas)
{
	total_de_mudas = m_total_de_mudas;
}

#destrutor 
Anfibio::~Anfibio()
{

}


void Anfibio::setTotalDeMudas(int m_total_de_mudas)
{
	total_de_mudas = m_total_de_mudas;
}

int Anfibio::getTotalDeMudas()
{
	return total_de_mudas;
}

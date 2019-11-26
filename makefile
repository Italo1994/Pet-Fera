CC = g++ #compilador

CPPFLAGS = -Wall -pedantic -std=c++11 #flags

#executavel
AP3: animal.o anfibio.o ave.o mamifero.o reptil.o funcionario.o veterinario.o tratador.o pet_manager.o main.o 
	@$(CC) $(CPPFLAGS) -Iinclude animal.o anfibio.o ave.o mamifero.o reptil.o funcionario.o veterinario.o tratador.o pet_manager.o main.o -o AP3											
		
	@mv *.o build/ #enviando os .o para pasta objects
	
# o -I include diz que a biblioteca está nessa pasta

animal.o: src/animal.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/animal.cpp
	@echo "Instalando animal..."

anfibio.o: src/anfibio.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/anfibio.cpp
	@echo "Instalando anfibio..."

ave.o: src/ave.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/ave.cpp
	@echo "Instalando ave..."

mamifero.o: src/mamifero.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/mamifero.cpp
	@echo "Instalando mamifero..."

reptil.o: src/reptil.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/reptil.cpp
	@echo "Instalando reptil..."

funcionario.o: src/funcionario.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/funcionario.cpp
	@echo "Instalando funcionario..."	

veterinario.o: src/veterinario.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/veterinario.cpp
	@echo "Instalando veterinario..."

tratador.o: src/tratador.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/tratador.cpp
	@echo "Instalando tratador..."

pet_manager.o: src/pet_manager.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/pet_manager.cpp
	@echo "Instalando pet_manager..."

main.o: src/main.cpp
	@$(CC) $(CPPFLAGS) -c -Iinclude src/main.cpp
	@echo "Aguarde..."
	@echo "Pronto!!!\nPara mais informações digite o comando --> ./AP3\n"
clean:
	@rm -rf AP3
	@echo "Diretorio limpo"
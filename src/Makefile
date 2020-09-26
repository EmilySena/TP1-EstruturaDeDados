# Emily Oliveira Sena
#TP1 - Estrututa de Dados

CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra
EXEC=./tp1 # nome do executavel que sera gerado, nao troque
TMPOUT=tp1.testresult

$(EXEC): main.cpp PilhaEncadeada.o FilaEncadeada.o Node.o
	$(CC) $(CFLAGS) main.cpp PilhaEncadeada.o FilaEncadeada.o Node.o -o $(EXEC)

PilhaEncadeada.o: PilhaEncadeada.cpp
	$(CC) $(CFLAGS) -c PilhaEncadeada.cpp -o PilhaEncadeada.o
FilaEncadeada.o: FilaEncadeada.cpp
	$(CC) $(CFLAGS) -c FilaEncadeada.cpp -o FilaEncadeada.o
Node.o: PilhaEncadeada.cpp
	$(CC) $(CFLAGS) -c Node.cpp -o Node.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf Node.o
	rm -rf FilaEncadeada.o
	rm -rf PilhaEncadeada.o
	



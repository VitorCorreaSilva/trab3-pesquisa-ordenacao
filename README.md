# Sistema de ordenação de dados em C
Este repositório foi criado e editado por mim para o trabalho A3 da disciplina de Pesquisa, Ordenação e Técnicas de Armazenamento ministradas pelo mestre Jader Marques da Silva do curso de Ciência da Computação da Universidade Ritter dos Reis. O objetivo é desenvolver um sistema simples a ordenação de dados com as especificações assinaladas pelo professor.


## O Desafio
O desafio consiste no desenvolvimento de um programa em C que leia “N” valores e armazene em memória. O programa deverá ter a possibilidade de ordenar números, caracteres (strings) e datas. O grupo deverá escolher no mínimo 3 (três) métodos de ordenação para implementar no programa. Dessa forma, o programa deverá ter a opção de leitura dos dados (manual e automática –através da leitura de arquivo ou geração randômica) e após a opção de ordenar dados usando os 3 (três) métodos de ordenação escolhidos pelo grupo. Para cada um dos métodos utilizados, o programa deverá apresentar os dados inseridos, os dados ordenados, informar quantas comparações (movimentações) foram necessárias para realizar a ordenação, bem como o tempo necessário para ordenar os dados (tempo para cada um dos métodos de ordenação). Ao usuário selecionar a opção de ordenar dados, o programa sempre irá apresentar o resultado da ordenação dos três métodos. O programa deverá ter a opção de ordenar valores numéricos inteiros, reais, datas (em formato DD/MM/AAAA) e caracteres, como nomes e palavras.:

- O grupo deverá desenvolver uma opção para inserção de vários valores, sem precisar inserir manualmente. Esta técnica pode ser através da leitura de um arquivo texto ou por meio de geração randômica. Mesmo com este recurso, o programa também deverá permitir a inserção manual de valores.
- O grupo deverá escolher e implementar (em C) 3 (três) métodos de ordenação estudados em aula.
- O grupo deverá utilizar funções recursivas para a implementação do programa.
- O grupo deverá considerar a característica do algoritmo a ser utilizado antes da implementação.
- O grupo poderá melhorar o programa, incluindo novas funcionalidades, desde que tenha como demonstrar a utilização do algoritmo de ordenação utilizado.
- Podem ser utilizadas diversas estruturas de dados, além de vetores (árvores, por exemplo).
- O programa deverá possuir uma função de contagem do tempo de execução de cada algoritmo, para análise entre as opções de ordenação. Essa função servirá para apresentar o tempo necessário para a execução de algoritmo.
- Na apresentação (em aula ou ao vivo no blackboard) ao professor, o grupo deverá ter clareza no funcionamento do algoritmo de ordenação utilizado. O professor poderá realizar perguntar específicas sobre o funcionamento do algoritmo utilizado.
- O grupo deverá apresentar a execução do programa com grande volume de dados, através da importação de arquivo ou geração de dados aleatórios. O número mínimo de dados a serem inseridos para esta ordenação é de 100 valores (na inserção via arquivo ou randômica), podendo ser um valor maior. O programa deverá ter a opção de inserção de valores manualmente. Neste caso, não há necessidade de inserção mínima de 100 valores.
- O grupo deverá apresentar a execução da ordenação com grande volume de valores numéricos e com a inserção manual.


## A Estrutura
A estrutura do projeto conta com um diretório chamado `source/` onde estão todos os arquivos com código escrito. Dentro deste foram criados arquivos de cabeçalho no formato `.h`. Estes contém todas as definições das classes que usamos no código. E também foram criados os arquivos `.c` onde esta a implementação das funções definidas anteriormente. No momento em que o build é executado será também criado um novo diretório na pasta raiz do projeto chamado `objects/` e o arquivo da aplicação chamado `trab3-pesquisa-ordenacao`.


## O Build
Para executar o build que gera os binários e o executavel do projeto sem muitas complicações foi implementado um arquivo `makefile`. Ele foi desenvolvido com base nesta [documentação](https://www.gnu.org/software/make/manual/make.html). Nesse arquivo foram criado os seguintes métodos:
- `make all`: executa as instruções para compilação e gera os binários e o executável do projeto. Para executar basta estar no mesmo diretório do arquivo `makefile` e digitar `make all` conforme abaixo. 


- `make clean`: Serve para limpar os arquivos dos ultimos builds e não possui um retorno quando tem sucesso. É aconselhavel sempre executar antes de um `make all` para garantir que todos os arquivos serão compilados novamente. Para a execução devemos estar no mesmo diretório do arquivo `makefile`  e digitar `make clean` conforme código abaixo.

## Video com explicação
Para exemplificar gravei um [video](https://youtu.be/KTIr944OyZI) explicando o funcionamento do programa.
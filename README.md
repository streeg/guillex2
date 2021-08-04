# Trabalho da Disciplina de Compiladores 2021-1


## Trabalho Prático - Descrição das Etapas
O projeto consiste na implementação da análise e síntese (independente de máquina) para uma linguagem de programação a ser descrita em documento próprio. O trabalho prático da disciplina será dividido em quatro fases:

1. Implementação do analisador léxico
2. Implementação do analisador sintático
3. Implementação do analisador semântico
4. Implementação do gerador de código intermediário

que são detalhadas nas atividades correspondentes neste ambiente de aprendizagem. As datas de entrega dos documentos e código de cada fase são também dados pelas datas das tarefas específicas constantes deste ambiente de aprendizagem.

##Trabalho Prático - Descrição da Linguagem

A linguagem C-IPL foi projetada para incluir facilidade no tratamento de listas em programas escritos em C. Para tal, foi escolhido um subconjunto da linguagem C e feita a introdução de uma nova primitiva de dados para listas e de operações sobre esta nova primitiva. As demais primitivas e comandos de C têm semântica padrão.

- Os tipos de dados da linguagem são int, float e list. Os tipos int e float são simples. A declaração de uma variável do tipo list se dá pela definição do tipo básico da lista (ver exemplos abaixo). Como restrição em relação à sintaxe usual de C, a declaração de variáveis não poderá ser seguida de atribuição.

- A linguagem contém constantes numéricas (para inteiros e reais (sim, isso inclui números negativos)) e a constante NIL (para listas); constantes do tipo string são usadas tão somente para impressão.

- As operações binárias aritméticas são adição, subtração, multiplicação e divisão, com regras de precedência e semântica usuais.

- As operações lógicas são negação, disjunção e conjunção, com  aridade, regras de precedência e semântica usuais. Não há tipo booleano na linguagem: exatamente como em C, valores diferentes de zero e  NIL são tratados como verdadeiro.

- As operações binárias relacionais são as usuais da aritmética: menor, menor ou igual, maior, maior ou igual, igual e diferente, com regras de precedência e semântica usuais. A única exceção é para os comparadores de igual e diferente para comparar uma lista com a constante NIL.

- Conversões implícitas entre expressões aritméticas devem ser tratadas de forma usual, permitindo tanto a ampliação (no caso de cálculo e comparação aritméticos, passagem de parâmetro por cópia e retorno de função) quanto redução de tipo (no caso de atribuição, passagem de parâmetros por cópia e retorno de função). Não há conversão de tipo entre listas e os demais tipos (ou vice-versa). Se for possível identificar a tentativa de realização de operações entre operandos que não admitem conversão entre si, o tradutor deve emitir aviso de que a operação é indefinida. A conversão de float para int se dá pelo descarte da parte decimal (não pelo arrendondamento; overflow, como usual, corresponde a comportamento indefinido).

- Um programa consiste de uma sequência de declarações de variáveis e funções, onde cada função declarada é seguida de sua definição (ou seja, um bloco de comandos, contendo declarações de variáveis e blocos de comandos). Toda função tem um tipo de retorno declarado que pode ser quaisquer um dos tipos primitivos da nova linguagem (int, float, list). Diferentemente de C, qualquer função pode ter zero argumentos (note que não há o tipo VOID na linguagem; mas isso deve ser especificado como uma lista vazia de parâmetros).

- Necessariamente, o programa deve conter uma função "main".

- As regras de escopo são as mesmas de C. Uma variável ou função só podem ser usadas depois de declaradas e em seus respectivos escopos.

- O comando de atribuição tem a sintaxe usual. No caso da variável ser inteira ou real, a semântica é a usual. Para listas, ver abaixo.

- Os comandos da linguagem para controle de fluxo são restritos aos seguintes: condicionais (if, if-else), iteração (for), chamada de função e retorno. Todos os comandos têm a semântica usual para o fragmento da linguagem C.

- Os comandos da linguagem para entrada e saída são: read, write, writeln. O parâmetro do comando de leitura (read) é uma variável de tipo simples; o parâmetro do comando de escrita (write, writeln) é uma expressão de tipo simples ou uma constante. O comando writeln é equivalente ao comando write seguido da escrita de quebra de linha.

- Na chamada de funções, tipos inteiros e reais são passados por cópia; o tipo lista é passado por referência.

- Toda função retorna uma expressão do tipo de retorno declarado.

- As operações sobre listas são descritas a seguir:

-- declaração: int list, float list.

-- atribuição: a atribuição é feita por referência.
-- construtores (associativos à direita): a constante NIL já foi mencionada; o operador : é o construtor binário infixo de listas: o operando esquerdo é uma expressão (rvalue) e o o operando à esquerda é uma lista (lvalue). O elemento é sempre acrescentado ao início da lista.

-- operadores (associativos à direita)

header: ? é o operador unário que retorna o valor do primeiro elemento de uma lista; a lista permanece inalterada; uso do operador em uma lista vazia tem comportamento indefinido.

tail: ! é operador unário que retorna a cauda de uma lista; a lista permanece inalterada; o uso do operador em uma lista vazia tem comportamento indefinido.

-- destrutor (associativo à direita)

tail: % é operador unário que retorna a cauda da lista; a lista tem seu primeiro elemento removido; o uso do operador em uma lista vazia tem comportamento indefinido.

-- funções (associativas à direita):

map: >> é o operador binário infixo que tem como primeiro argumento uma função unária e como segundo argumento uma lista; retorna uma lista com a função aplicada aos elementos do segundo elemento; não altera a lista passada como argumento.

filter: << é o operador binário infixo que tem como primeiro argumento uma função unária e como segundo argumento uma lista; retorna a lista dos elementos do segundo argumento para os quais a função dada como primeiro argumento retorna valor diferente de zero; não altera a lista passada como argumento.

## Exemplo
```
int list IL;
float list FL;

int list read_list(int n) {
	int i;
	i =  -435.7;
	int list new;
	new = NIL;
	for (i = 0; i < n ; i = i + 1) {
		int elem;
		writeln("Digite o elemento da lista: ");
		read(elem);
		new = elem : new;
	}
	return new;
}

float succ(int i) {
	return i+1;
}


int leq_10(float x) {
	return x <= 10;
}


int main() {

	writeln("Digite os número de elementos da lista: ");

	int n;
	float list FL10;
	read(n);
	
	IL  = read_list(n);
	FL = succ >> IL;

	FL10 = leq_10 <<  FL;
	if (FL10 != NIL) {
		float list AUXL;
		int n; n = 0;
		for (AUXL=FL10; AUXL != NIL; AUXL = !AUXL) {
			n = n + 1;
			write(?AUXL); write(" ");
		}
		writeln(" ");
		write("A nova lista tem "); write(n); writeln(" elementos.");
	}
	else writeln("A nova lista não possui elementos.");

	return 0;
}
```

# Formatação dos trabalhos escritos

1) Todos os trabalhos a serem entregues nesta disciplina devem seguir o padrão de formatação constante das Lecture Notes in Computer Science. Para o pacote de padrões de formatação em latex (pronuncia-se lah-teck; divirta-se vendo Donald Knuth comentando sobre tex e latex em: https://www.youtube.com/watch?v=8HuwiBPLV3A) e no formato doc encontram-se, respectivamente, em:

ftp://ftp.springernature.com/cs-proceeding/llncs/llncs2e.zip
ftp://ftp.springernature.com/cs-proceeding/llncs/word/splnproc1703.zip

2) O padrão de formatação da bibliografia é alfabético. No latex, isso pode ser feito utilizando o seguinte comando antes da bibliografia: \bibliographystyle{alpha}. Usar o equivalente no seu sistema de edição preferido.

3) Trabalhos podem ser escritos em inglês ou português. Se for escrever em português, configure adequadamente os pacotes de hifenação do seu sistema de edição.

3) Independente do sistema de edição que você escolher, utilize editores de equações que garantam a apresentação tipográfica adequada de notação matemática.

4) Sempre verifique seu texto para erros ortográficos usando ferramentas adequadas para tal.

# Laboratórios de AvaliaçãoUm laboratório de avaliação é uma atividade do ambiente de aprendizagem que permite que alunos examinem e avaliem os trabalhos de seus colegas. Este tipo de avaliação é chamada "revisão por pares".

O uso deste tipo de atividade nesta disciplina tem vários objetivos:

1) Cada aluno tem (certa) liberdade de escolhas no desenvolvimento de seus projetos. Esta atividade permite que você conheça os diferentes projetos, compreenda a necessidade de diferentes decisões para diferentes processos de desenvolvimento e aprenda mais sobre técnicas que podem ou não estar sendo utilizadas em seu próprio projeto.

2) O processo de avaliação permite o desenvolvimento de habilidades de extrema importância para o exercício da atividade acadêmica e/ou industrial. Em particular, permite o desenvolvimento de análise técnica e teórica crítica, além da compreensão dos aspectos técnicos/teóricos relevantes e a adequação de suas justificativas.

3) Avaliação por pares é um processo colaborativo. Você aprende a interagir com seus colegas, avaliando tanto aspectos fracos quanto aspectos fortes de seus trabalhos. Na identificação e relato de aspectos fracos (erros, justificativas inadequadas, fundamentação inadequada, omissão de aspectos de requisitos, insuficiência de abrangência e/ou profundidade, etc), você irá fornecer informação que permite que seus colegas melhorem a apresentação de seus trabalhos. Na identificação e relato de aspectos fortes (adequação a requisitos, uso adequado de técnicas, conformidade com padrões, qualidade de apresentação, etc), você estará incentivando seus colegas na continuação de boas práticas profissionais e acadêmicas.

4) O processo de avaliação colabora para o desenvolvimento da escrita técnica já que exige que você se expresse clara e tecnicamente sobre os conteúdos que irá avaliar.

5) A avaliação por pares exige reflexão sobre suas próprias atitudes e conhecimento, permitindo que você identifique falhas e tenha atitude ativa em suas resoluções.

Durante o curso, a avaliação por pares será restrita a documentos e código do projeto de seus colegas. Cada fase de avaliação precederá a fase do projeto em si, permitindo que seus comentários contribuam efetivamente para a melhoria destes artefatos antes de sua entrega para a avaliação que será feita pela docente responsável pela disciplina.

Cada um dos laboratórios é atividade obrigatória, contando tanto para a presença como para sua menção final. Você participará de duas formas: submetendo seu trabalho e avaliando dois outros trabalhos. Você só poderá participar da atividade de avaliação por pares se tiver submetido seu próprio trabalho para avaliação.

O seu trabalho irá receber uma nota de seus colegas, além de comentários. A sua avaliação também irá ser revista, pontuada e chancelada (ou não) pela docente responsável pela disciplina. Isto significa que a nota que você der para o trabalho do seu colega poderá ser revista, sendo sobrescrita pela docente para cima ou para baixo, se ela não for adequada. A sua nota na parte de avaliação será dada em conformidade com a adequação de sua avaliação. É também importante que você se atenha aos prazos dados e que você seja cortês e construtivo nos seus comentários.
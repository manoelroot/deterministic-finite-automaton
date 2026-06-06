# DFA - Documentação

Visão geral
- Código simples em C que demonstra uma única transição de um Autômato Finito Determinístico (AFD). O programa inicializa o estado como `Q0`, aplica a transição para o símbolo `1` usando a tabela `delta` e imprime o estado resultante.

Compilação e execução
```bash
make    # usa o MAKEFILE fornecido
make run
```

Mapeamento do código
- `current`: variável que guarda o estado atual (inicializada como `Q0`).
- `delta`: tabela de transição (por exemplo, `int delta[][2] = { ... }`).
- Transição aplicada: `current = delta[current][1]` (lê símbolo `1`).
- Saída: `printf("Current state: %d\\n", current);` e `return 0;`.

Exemplo mínimo de `delta` (ilustrativo)
```c
// supondo Q = {0,1,2} e Σ = {0,1}
int delta[3][2] = {
	/* from Q0 */ {0,1},
	/* from Q1 */ {2,1},
	/* from Q2 */ {2,2}
};

int current = 0; // Q0
current = delta[current][1]; // aplica símbolo '1'
// imprime o estado atual
```

Teoria compacta
- AFD = (Q, Σ, δ, q0, F)
	- `Q`: conjunto finito de estados.
	- `Σ`: alfabeto de entrada.
	- `δ`: função de transição δ: Q × Σ → Q implementada como tabela `delta`.
	- `q0`: estado inicial (`Q0`).
	- `F`: estados de aceitação (não usados neste exemplo simples).

Regras e recomendações
- Sempre inicializar `current = q0` antes de processar a entrada.
- Para cada símbolo `a` da entrada, atualizar: `current = delta[current][a]`.
- Validar índices em `delta` para evitar acesso fora do array.

Arquitetura e diagrama
- Veja o diagrama representativo gerado em `diagram.svg` para um fluxo visual do programa.

Contribuições e extensões possíveis
- Expandir o programa para processar strings (sequência de símbolos).
- Adicionar verificação de entrada e estados de aceitação para decidir sobre aceitação da string.

Licença
- Use conforme desejar — este repositório serve apenas como exemplo didático.

# Graph_Cleber_Victor

|Nome|Matrícula|
|--- | ---     |
|Victor Hugo Dias Coelho   | 16/0019401  |
|Cleber José de Castro Júnior| 	16/0025834  |

## Problema:
* O grupo decidiu que seria melhor se resolvessemos um problema de grafo do URI;
* O número do problema é [1128](https://www.urionlinejudge.com.br/judge/pt/problems/view/1128);

## Texto do problema:
* Numa certa cidade há N intersecções ligadas por ruas de mão única e ruas com mão dupla de direcão. É uma cidade moderna, de forma que muitas ruas atravessam túneis ou têm viadutos. Evidentemente é necessário que se possa viajar entre quaisquer duas intersecções, isto é, dadas duas intersecções V e W, deve ser possível viajar de V para W e de W para V.

* Sua tarefa é escrever um programa que leia a descrição do sistema de tráfego de uma cidade e determine se o requisito de conexidade é satisfeito ou não.

## Entradas:
* A entrada contém vários casos de teste. A primeira linha de um caso de teste contém dois números inteiros N e M, separados por um espaço em branco, indicando respectivamente o número de intersecções (2 ≤ N ≤ 2000) e o número de ruas (2 ≤ M ≤ N(N−1)/2). O caso de teste tem ainda mais M linhas, que contêm, cada uma, uma descrição de cada uma das M ruas. A descrição consiste de três inteiros V, W e P, separados por um espaço em branco, onde V e W são identificadores distintos de intersecções (1 ≤ V, W ≤ N , V ≠ W ) e P pode ser 1 ou 2; se P = 1 então a rua é de mão única, e vai de V para W; se P = 2 então a rua é de mão dupla, liga V e W. Não existe duas ruas ligando as mesmas intersecções.

* O ultimo caso de teste é seguido por uma linha que contém apenas dois números zero separados por um espaço em branco.

## Saída:
Para cada caso de teste seu programa deve imprimir uma linha contendo um inteiro G, onde G é igual a 1 se o requisito de conexidade está satisfeito, ou G é igual a 0, caso contrário.

## Observação:
* O input do problema estará no input.txt sendo necessário apenas compilar o programa com: ``` g++ 1128.cpp -Wall -o 1128``` .
* E para executar o programa use: ```./1128 < input.txt ``` .

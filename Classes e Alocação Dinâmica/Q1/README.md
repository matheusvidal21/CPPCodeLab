# Questão 1) 

## b) O que é recursão de cauda? Quais as implicações da recursão em cauda na execução do programa? Qual a solução para a recursão em cauda? 
  A recursão de cauda é um tipo de função recursiva em que o passo recursivo é a última operação a ser realizada na função. Ou seja, a chamada recursiva é feita na última instrução do programa, e não há mais operações para serem realizadas após ela.

  Por exemplo, a função abaixo é uma recursão de cauda
    def conta_regressiva(n):
      if n == 0:
          print("Acabou!")
      else:
          print(n)
          conta_regressiva(n-1)

  Veja que a última instrução da função é a chamada recursiva.

  A principal implicação é que ao utilizar a recursão de cauda, o compilador poderá otimizar o código fonte para reduzir o uso de memória. Pois não será necessário manter uma pilha de chamadas na memória para armazenar informações sobre chamadas anteriores da função. Em vez disso, ele pode reutilizar o mesmo espaço de memória para cada chamada recursiva, o que pode levar a uma melhoria significativa no desempenho da função, principalmente, solucionando o estouro de pilha.


## c) A função recursiva que você implementou gera recursão de cauda? Justifique.
  Não é um recusão de cauda, porque na linha:
    "return tribonnaciRecursivo(n - 1) + tribonnaciRecursivo(n - 2) + tribonnaciRecursivo(n - 3);"
  a função precisa manter uma pilha de chamadas na memória para armazenar informações sobre as chamadas anteriores. Ou seja, não é a última instrução executada na função. Depois que as chamadas recursivas são feitas, é necessário executar as operações de adição para somar os resultados e retornar o valor final, o que não é possível otimizar com a recursão de cauda.


## d) Em alguns casos, quando estamos trabalhando com funções recursivas, ocorre o Stack Overflow. Explique o que é e porque ocorre esse overflow.
  O Stack Overflow, como o nome já diz, é um erro de estouro de pilha. O erro ocorre quando o tamanho da pilha de chamadas de uma função excede o limite máximo de espaço reservado para a pilha na memória. Pode acontecer, principalmente, quando uma função é chamada recursivamente muitas (ou infinitas) vezes, e as informações de chamada acumulam-se na pilha até que não haja mais espaço disponível para armazená-las.

  
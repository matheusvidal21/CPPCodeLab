# Questão 2)

## 2.1) O que é "git cherry-pick"?
  O "git cherry-pick" é um comando que permite a aplicação de um commit específico de uma branch para outra, sem que seja necessário trazer todas as alterações da branch original. Por exemplo, quando o desenvolvedor back-end cria uma estrutura de dados que o front-end também vai utilizar. O desenvolvedor front-end pode usar o git cherry pick para continuar trabalhando no commit que tem o banco de dados, mas da sua maneira.

## 2.3) Você pode explicar o que “git reset” faz?
  O comando "git reset" é um comando poderoso que permite redefinir o estado do seu repositório Git para um commit anterior em sua história. É muito útil quando é necessário desfazer alterações em commits anteriores, descartar alterações em seu diretório de trabalho ou desfazer uma mesclagem. O git reset opera nas "três árvores do Git". Essas árvores são o Histórico de commits (HEAD), o Índice de staging e o diretório de trabalho.

## 2.4) O que é o "HEAD" no Git? 
  O HEAD no Git uma referência de ramificação atual, uma espécie de ponteiro para a última confirmação que você fez ou a última confirmação registrada. O HEAD é um conceito fundamental do Git porque é usado para determinar o estado atual do seu repositório. Ele indica qual branch está sendo trabalhada e qual é o último commit nessa branch.

## 2.6) Qual é a diferença entre um 'fork' e um 'branch'?
  Ambos são conceitos importantes, mas com própositos diferentes no Git.

  Um "fork" é uma cópia completa de um repositório Git em uma nova conta do GitHub ou em outro serviço de hospedagem de código. A principal função do fork é que ele permite que desenvolvedores possam trabalhar em seu próprio conjunto de alterações em um projeto sem afetar o repositório original.

  Por outro lado, um "branch" é uma linha separada de desenvolvimento dentro de um repositório Git. As branches permitem que você crie novas funcionalidades, corrija bugs ou experimente novas ideias sem afetar a branch principal do projeto.

  De forma resumida, a principal diferença entre um "fork" e um "branch" é que um fork é uma cópia independente de um repositório completo que é mantido em outro local, enquanto um branch é uma linha separada de desenvolvimento dentro do mesmo repositório que permite o desenvolvimento paralelo.

## 2.10) O que é um "pull request"?
  Pull Request quer dizer solicitação de puxar, em uma tradução livre. Então, como o nome já diz, o pull request (frequentemente chamado de PR) é uma solicitação feita por um desenvolvedor, para que suas alterações de código sejam integradas em um repositório. O pull request é muito utilizado para contribuir com projetos open source, mas também pode ser usado para colaboração interna em equipes de desenvolvimento. Em uma equipe de desenvolvimento, cada programador poderá trabalhar em sua própria branch. Contudo, cada parte do projeto precisa ser unida à principal, que é chamada de branch master. Justamente essa união da branch à branch master é realizada através do Pull Request.


## Um exemplo de fluxo de trabalho de Git utilizando os conceitos acima:

1. Fazer um fork do repositório original no GitHub
   
2. Clonar o seu fork do repositório:
   git clone https://github.com/nome_usuario/nome_repositorio.git

3. Criar uma nova branch: 
   git checkout -b minha_feature_branch

4. Fazer alterações no código e commitar:
   git add arquivo_modificado
   git commit -m "Minha mensagem de commit"

Supondo que depois de trabalhar mais no projeto, fazer algumas alterações, e realizar outro commit, você encontrou bugs nas alterações recente;

5. Voltar atrás no commit anterior com reset:
   git reset HEAD~1

Supondo que outro desenvolvedor entrou para o projeto, e já está trabalhando na própria branch. Caso você queira selecionar um commit específico do outro desenvolvedor para sua branch:

6. git cherry-pick "id do commit do desenvolvedor"

6. Enviar um pull request para o repositório original, solicitando que suas alterações sejam consideradas.





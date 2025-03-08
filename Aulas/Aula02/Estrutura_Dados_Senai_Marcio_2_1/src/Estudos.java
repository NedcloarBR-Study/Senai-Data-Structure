public class Estudos extends Aluno {
  public static void main(String[] args) {
    Aluno aluno = new Aluno();
    aluno.nome = "Aluno Esforçado";
    aluno.setIdade(24);
    aluno.matricula = "825433551";

    System.out
        .println("Nome: " + aluno.nome + "\n" + "Idade: " + aluno.getIdade() + "\n" + "Matrícula: " + aluno.matricula);
  }
}

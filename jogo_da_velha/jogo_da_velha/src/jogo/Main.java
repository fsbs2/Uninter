package jogo;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		
		
		System.out.println("Jogo da Velha");
		char x;
		Scanner sc = new Scanner(System.in);
		
		do {
			System.out.println("Escolha a dificuldade: a , b ou c");
			x = sc.next().charAt(0);				
		} while (x != 'a' && x != 'b' && x !='c');
		
		sc.nextLine();
		
		
		Computador m = null;
		
		
			if(x == 'a') {
				System.out.println("Você escolheu o computador A");
				m = new Pc_A();
			
			}else if(x == 'b') {
				System.out.println("Você escolheu o computador B");
				m = new Pc_B();
			
			}else if(x == 'c') {
				System.out.println("Você escolheu o computador C");
				m = new Pc_C();
			}
			
		
		
		Jogador user = new Jogador();		
		
		Tabuleiro tabuleiro = new Tabuleiro();
		
		
		tabuleiro.printar();
		System.out.println("");
		System.out.println("Escolha uma posição");
		
		int turno =0;
		
		//jogo
		
		while(turno <=5) {
		
		user.jogarJogador(tabuleiro,user);
		turno = tabuleiro.vitoria(tabuleiro,turno);
		turno = tabuleiro.deuVelha(tabuleiro,turno);
			if(turno<6) {
				m.jogarMaquina(tabuleiro);
				tabuleiro.printar();
				System.out.println("Pc");
				tabuleiro.vitoria(tabuleiro,turno);
			}
		turno++;
		}
		
		System.out.println("Fim do jogo");
		
		sc.close();
		

	}

}

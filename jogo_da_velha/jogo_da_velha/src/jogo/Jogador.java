package jogo;
import java.util.Scanner;
public class Jogador {
	int player_1 = 1;
	int posicao;
	
	
	public Tabuleiro jogarJogador(Tabuleiro tabuleiro,Jogador user) {
		Scanner ler = new Scanner(System.in);
		posicao = ler.nextInt();
		System.out.println("");
		
			if(posicao==1) {
				if(tabuleiro.campo[0][0] !=88 && tabuleiro.campo[0][0] != 79) {
				tabuleiro.campo[0][0]=79;
				}else {
					user.jogarJogador(tabuleiro, user);
				}
				System.out.println("");
			}
			if(posicao==2) {
				if(tabuleiro.campo[0][1] !=88 && tabuleiro.campo[0][1] != 79) {
					tabuleiro.campo[0][1]=79;
					}else {
						user.jogarJogador(tabuleiro, user);
					}
				System.out.println("");
			}
			if(posicao==3) {
				if(tabuleiro.campo[0][2] !=88 && tabuleiro.campo[0][2] != 79) {
					tabuleiro.campo[0][2]=79;
					}else {
						user.jogarJogador(tabuleiro, user);
					}
				System.out.println("");
			}
			if(posicao==4) {
				if(tabuleiro.campo[1][0] !=88 && tabuleiro.campo[1][0] != 79) {
					tabuleiro.campo[1][0]=79;
					}else {
						user.jogarJogador(tabuleiro, user);
					}
				System.out.println("");
			}
			if(posicao==5) {
				if(tabuleiro.campo[1][1] !=88 && tabuleiro.campo[1][1] != 79) {
					tabuleiro.campo[1][1]=79;
					}else {
						user.jogarJogador(tabuleiro, user);
					}
				System.out.println("");
			}
			if(posicao==6) {
				
				if(tabuleiro.campo[1][2] !=88 && tabuleiro.campo[1][2] != 79) {
					tabuleiro.campo[1][2]=79;
					}else {
						user.jogarJogador(tabuleiro, user);
					}
				System.out.println("");
			}
			if(posicao==7) {
				if(tabuleiro.campo[2][0] !=88 && tabuleiro.campo[2][0] != 79) {
					tabuleiro.campo[2][0]=79;
					}else {
						user.jogarJogador(tabuleiro, user);
					}
				System.out.println("");
			}
			if(posicao==8) {
				if(tabuleiro.campo[2][1] !=88 && tabuleiro.campo[2][1] != 79) {
					tabuleiro.campo[2][1]=79;
					}else {
						user.jogarJogador(tabuleiro, user);
					}
				System.out.println("");
			}
			if(posicao==9) {
				if(tabuleiro.campo[2][2] !=88 && tabuleiro.campo[2][2] != 79) {
					tabuleiro.campo[2][2]=79;
					}else {
						user.jogarJogador(tabuleiro, user);
					}
				System.out.println("");
			}
			
			
			
			tabuleiro.printar();
			System.out.println("jogador");
			System.out.println("");
			System.out.println("");
		return tabuleiro;	
		
	}
}

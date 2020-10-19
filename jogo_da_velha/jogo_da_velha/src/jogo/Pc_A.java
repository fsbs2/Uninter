package jogo;

import java.util.Random;

public class Pc_A extends Computador{
	int player_2 = 2;
	
	
	public Tabuleiro jogarMaquina(Tabuleiro tabuleiro) {
		
		Random pc  = new Random();
		int linha = pc.nextInt(3);
		int coluna = pc.nextInt(3);
		
		if(tabuleiro.campo[linha][coluna] !=88 && tabuleiro.campo[linha][coluna] != 79) {
			tabuleiro.campo[linha][coluna] = 88;
		}else {
			
			 jogarMaquina(tabuleiro);
		}
		
		return tabuleiro;
	}
	
}

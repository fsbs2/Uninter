package jogo;

public class Pc_B extends Computador{
	
	
	
	
	
	public Tabuleiro jogarMaquina(Tabuleiro tabuleiro) {
		
		
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				if(tabuleiro.campo[i][j] !=88 && tabuleiro.campo[i][j] !=79) {
					tabuleiro.campo[i][j] = 88;
				return tabuleiro;
				}
			}
		}
		
		return tabuleiro;
	}
}

package jogo;

public class Pc_C extends Computador {
	
	
	
	
	
		@Override
		public Tabuleiro jogarMaquina(Tabuleiro tabuleiro) {
			for(int i=2;i>=0;i--) {
				for(int j=2;j>=0;j--) {
					if(tabuleiro.campo[i][j] !=88 && tabuleiro.campo[i][j] !=79) {
						tabuleiro.campo[i][j] = 88;
					return tabuleiro;
					}
				}
			}
			return tabuleiro;
		}
}

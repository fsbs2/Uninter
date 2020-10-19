package jogo;

public class Pc_C extends Computador {
	
	
	
	
	
		
		public Tabuleiro jogarMaquina(Tabuleiro tabuleiro) {
			
			if(tabuleiro.campo[1][1] != 79 && tabuleiro.campo[1][1] != 88 ) {
				tabuleiro.campo[1][1]=88;
				return tabuleiro;
			}
			if(tabuleiro.campo[1][2] != 79 && tabuleiro.campo[1][2] != 88) {
				tabuleiro.campo[1][2]=88;
				return tabuleiro;
			}
			else if(tabuleiro.campo[0][0] != 79 && tabuleiro.campo[0][0] != 88) {
				tabuleiro.campo[0][0]=88;
				return tabuleiro;
			}
			else if(tabuleiro.campo[1][0] != 79 && tabuleiro.campo[1][0] != 88) {
				tabuleiro.campo[1][0]=88;
				return tabuleiro;
			}
			else if(tabuleiro.campo[2][0] != 79 && tabuleiro.campo[2][0] != 88) {
				tabuleiro.campo[2][0]=88;
				return tabuleiro;
			}
			else if(tabuleiro.campo[0][2] != 79 && tabuleiro.campo[0][2] != 88) {
				tabuleiro.campo[0][2]=88;
				return tabuleiro;
			}
			else if(tabuleiro.campo[0][1] != 79 && tabuleiro.campo[0][1] != 88) {
				tabuleiro.campo[0][1]=88;
				return tabuleiro;
			}
			else if(tabuleiro.campo[2][1] != 79 && tabuleiro.campo[2][1] != 88) {
				tabuleiro.campo[2][1]=88;
				return tabuleiro;
			}
			else{
				tabuleiro.campo[2][2]=88;
				return tabuleiro;
			}
				
		}
}





/*for(int i=2;i>=0;i--) {
for(int j=2;j>=0;j--) {
	if(tabuleiro.campo[i][j] !=88 && tabuleiro.campo[i][j] !=79) {
		tabuleiro.campo[i][j] = 88;
	return tabuleiro;
	}
}
}*/
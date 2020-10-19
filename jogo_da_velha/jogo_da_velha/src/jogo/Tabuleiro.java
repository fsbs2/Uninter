package jogo;

public class Tabuleiro {
	public char [][] campo= {
			{49,50,51},
			{52,53,54},
			{55,56,57},
	};
	
	
	
	public int vitoria(Tabuleiro tabuleiro,int turno) {
		
		//linhas pc
		if(tabuleiro.campo[0][0]== 88 && 
		   tabuleiro.campo[0][1]== 88 &&  
		   tabuleiro.campo[0][2]== 88) {
			  		System.out.println("Pc ganhou");
			  		return turno=6;		
		}
		if(tabuleiro.campo[1][0]== 88 && 
		   tabuleiro.campo[1][1]== 88 &&  
		   tabuleiro.campo[1][2]== 88) {
					System.out.println("Pc ganhou");
					return turno=6;
		}
		if(tabuleiro.campo[2][0]== 88 && 
		   tabuleiro.campo[2][1]== 88 &&  
	       tabuleiro.campo[2][2]== 88) {
					System.out.println("Pc ganhou");
					return turno=6;
		}
		
		//linhas jogador
		if(tabuleiro.campo[0][0]== 79 && 
		   tabuleiro.campo[0][1]== 79 &&  
		   tabuleiro.campo[0][2]== 79) {
					System.out.println("Jogador ganhou");
					return turno=6;
		}
		if(tabuleiro.campo[1][0]== 79 && 
		   tabuleiro.campo[1][1]== 79 &&  
		   tabuleiro.campo[1][2]== 79) {
					System.out.println("Jogador ganhou");
					return turno=6;
		}
		if(tabuleiro.campo[2][0]== 79 && 
		   tabuleiro.campo[2][1]== 79 &&  
		   tabuleiro.campo[2][2]== 79) {
					System.out.println("Jogador ganhou");
					return turno=6;
		}
				
			//colunas Pc
			
		if(tabuleiro.campo[0][0]== 88 && 
		   tabuleiro.campo[1][0]== 88 &&  
		   tabuleiro.campo[2][0]== 88) {
					System.out.println("Pc ganhou");
					return turno=6;
		}
		if(tabuleiro.campo[0][1]== 88 && 
		   tabuleiro.campo[1][1]== 88 &&  
		   tabuleiro.campo[2][1]== 88) {
					System.out.println("Pc ganhou");
					return turno=6;
		}
		if(tabuleiro.campo[0][2]== 88 && 
		   tabuleiro.campo[1][2]== 88 &&  
		   tabuleiro.campo[2][2]== 88) {
					System.out.println("Pc ganhou");
					return turno=6;
		}
		
			
		// colunas Jogador
		
		
		if(tabuleiro.campo[0][0]== 79 && 
		   tabuleiro.campo[1][0]== 79 &&  
		   tabuleiro.campo[2][0]== 79) {
					System.out.println("Jogador ganhou");
					return turno=6;
		}
		if(tabuleiro.campo[0][1]== 79 && 
		   tabuleiro.campo[1][1]== 79 &&  
		   tabuleiro.campo[2][1]== 79) {
					System.out.println("Jogador ganhou");
					return turno=6;
	    }
		if(tabuleiro.campo[0][2]== 79 && 
		   tabuleiro.campo[1][2]== 79 &&  
		   tabuleiro.campo[2][2]== 79) {
					System.out.println("Jogador ganhou");
					return turno=6;
		}
		
		
		//Cruzado Pc
		
		if(tabuleiro.campo[0][0]== 88 && 
		   tabuleiro.campo[1][1]== 88 &&  
		   tabuleiro.campo[2][2]== 88) {
					System.out.println("Pc ganhou");
					return turno=6;
		}
		if(tabuleiro.campo[2][0]== 88 && 
		   tabuleiro.campo[1][1]== 88 &&  
		   tabuleiro.campo[0][2]== 88) {
					System.out.println("Pc ganhou");
					return turno=6;
		}
					
			
					
		//cruzado Jogador
		
		if(tabuleiro.campo[0][0]== 79 && 
		   tabuleiro.campo[1][1]== 79 &&  
		   tabuleiro.campo[2][2]== 79) {
					System.out.println("Jogador ganhou");
					return turno=6;
		}
		if(tabuleiro.campo[2][0]== 88 && 
		   tabuleiro.campo[1][1]== 88 &&  
		   tabuleiro.campo[0][2]== 88) {
					System.out.println("Pc ganhou");
					return turno=6;
		}
					
		return turno;
		
	}
	

	public int deuVelha(Tabuleiro tabuleiro,int turno ){ 
		
	if(turno != 6) {
		if( tabuleiro.campo[0][0]!= 49  &&
		    tabuleiro.campo[0][1]!= 50  &&
		    tabuleiro.campo[0][2]!= 51  &&
		    tabuleiro.campo[1][0]!= 52  &&
		    tabuleiro.campo[1][1]!= 53  &&
		    tabuleiro.campo[1][2]!= 54  &&
		    tabuleiro.campo[2][0]!= 55  &&
		    tabuleiro.campo[2][1]!= 56  &&
		    tabuleiro.campo[2][2]!= 57 ) {
			System.out.println("Deu velha");
			 return turno = 6;
		}
	}
	
	   return turno;
		
	}
	
	
	
	
	public void printar() {
		
		
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				System.out.print(campo[i][j]);
				System.out.print("\t");
			}
			System.out.println("");
		}
	}

}


/*
tabuleiro.campo[0][0]== 88 || tabuleiro.campo[0][0] == 79 &&
tabuleiro.campo[0][1]== 88 || tabuleiro.campo[0][1] == 79 &&
tabuleiro.campo[0][2]== 88 || tabuleiro.campo[0][2] == 79 &&
tabuleiro.campo[1][0]== 88 || tabuleiro.campo[1][0] == 79 &&
tabuleiro.campo[1][1]== 88 || tabuleiro.campo[1][1] == 79 &&
tabuleiro.campo[1][2]== 88 || tabuleiro.campo[1][2] == 79 &&
tabuleiro.campo[2][0]== 88 || tabuleiro.campo[2][0] == 79 &&
tabuleiro.campo[2][1]== 88 || tabuleiro.campo[2][1] == 79 &&
tabuleiro.campo[2][2]== 88 || tabuleiro.campo[2][2] == 79)
*/
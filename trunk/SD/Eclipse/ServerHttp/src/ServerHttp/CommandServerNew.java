package ServerHttp;

import java.io.*;
import java.net.*;
import java.util.*;

public class CommandServerNew {
	
	private ServerSocket serverSocket; 
	private Socket clientSocket;
	private ServerSocket httpsocket; 
		
	static List<Socket> l = new ArrayList<Socket>();
	
	public CommandServerNew(ServerSocket server) {
		this.httpsocket = server;
		try {				
			serverSocket = new ServerSocket(4444);
			while(true){
				clientSocket = serverSocket.accept(); 
				l.add(clientSocket);
				new AtiendeCommand(clientSocket,this).start();
				System.out.println("Ingresó un cliente\n");					
			}		
		} 
		catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	public void shutdown(){
		try{
			//serverSocket.close();
			httpsocket.close();
			for (Socket clientSocket : l) {
				if(clientSocket!=null && !clientSocket.isClosed())
					clientSocket.close();
			}			
		}
		catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	public int conectados(){
		int clientes = 0;
			for (Socket clientSocket : l) {
				if(clientSocket!=null && !clientSocket.isClosed())
					clientes++;
			}			
			return clientes;
	}
}


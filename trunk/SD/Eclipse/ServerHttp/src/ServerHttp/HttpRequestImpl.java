package ServerHttp;

import java.io.BufferedReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.Properties;

public class HttpRequestImpl implements HttpRequest{
	private BufferedReader in;
	private Properties prop;
	private String allText;
	private String tipo_mimes[];
	
	
public HttpRequestImpl(BufferedReader in, Properties prop){
	this.in = in;
	this.prop = prop;
	
	allText =getPlainMessage();
	
}	

	@Override
	public String getPlainMessage() {
		// TODO Auto-generated method stub
		int puntero = 0;
		String line = null;
		String allText = "";
		
		do{
		try{
			line = in.readLine();
		} 
		catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		if(line!=null)
			allText = allText.concat(line+"\r\n");
		} while (line!=null && line.trim().length() > 0);
		return allText;
	}

	@Override
	public String getPath() {
		String cadena[];
		// AGREGAR COMENTARIOS DE LO Q HACE LA FUNCION
		//String allText = getPlainMessage();
		String url [];
		String file_req [];
		cadena = allText.split("\r\n");
		url=cadena[0].split(" ");
		if(url[1].indexOf("?")>-1){
			//tengo query en la direccion solicitada
			file_req=url[1].split("\\?");		
			return file_req[0];
		}
		else
			//no tengo query en la direccion solicitada
			return url[1];	
	}
	

	@Override
	public String getQuery() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String getVerb() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public boolean isVerbAllowed() {
		// TODO Auto-generated method stub
			String cadena[]=null;
			//String allText = getPlainMessage();
			String arreglo [];
			cadena = allText.split("\r\n");
			arreglo=cadena[0].split(" ");
			//
			if (arreglo[0].equalsIgnoreCase("GET")){
				System.out.println("true");
				return true;
			}
			else if(arreglo[0].equalsIgnoreCase("POST")){
				System.out.println("true");
				return true;				
			}				
			else{
				System.out.println("false");
				return false;
			}
	}

	@Override
	public String getRequestMimeType() {
		
		final String[] tipo_mimes = {".jpg",".png",".html",".htm",".css",".js"};		
		String url;
		String extension [];
		url = getPath();
		int i;
		
		extension=url.split("\\.");
	
		
		for ( i = 0; i < tipo_mimes.length; i++) {
			if(tipo_mimes[i].equals("."+extension[1]))
				break;
		}
		
		return prop.getProperty(tipo_mimes[i]); //FIXME revisar si entra un mime no soportado en httpServer.properties
	}

}

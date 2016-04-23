package ServerHttp;

import java.io.BufferedReader;
import java.io.IOException;
import java.util.Properties;

public class HttpRequestImpl implements HttpRequest{
	private BufferedReader in;
	private Properties prop;
	
	private String cadena [];
	
public HttpRequestImpl(BufferedReader in, Properties prop){
	this.in = in;
	this.prop = prop;
}	

	private void lee_req_cliente(){
		//LEE texto crudo de la peticion del cliente.
		int puntero = 0;
		String line = null;
		try {		
			while ((line = in.readLine().toString()) != null) {
				cadena[puntero] = line;
				puntero++;
			}
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}		
		return;
	}



	@Override
	public String getPlainMessage() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String getPath() {
		// AGREGAR COMENTARIOS DE LO Q HACE LA FUNCION	
		lee_req_cliente();
		String url [];
		String file_req [];
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
			String arreglo [];
			arreglo=cadena.split(" ");
			System.out.println(arreglo[0]);
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
		// TODO Auto-generated method stub
		String cadena = null;
		try {
			cadena = in.readLine().toString();
			System.out.println(in.readLine().toString());
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		String arreglo [];
		arreglo=cadena.split(".");
		System.out.println(arreglo);
		//Integer.parseInt(prop.getProperty("httpserver.port", "8080"));
		
		return null;
	}

}

package ServerHttp;

import java.io.BufferedReader;
import java.io.IOException;
import java.util.Properties;

public class HttpRequestImpl implements HttpRequest{
	private BufferedReader in;
	private Properties prop;
	
public HttpRequestImpl(BufferedReader in, Properties prop){
	this.in = in;
	this.prop = prop;
}	
	@Override
	public String getPlainMessage() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String getPath() {
		// TODO Auto-generated method stub
		return prop.getProperty("web.site.folder");
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
			String cadena = null;
			try {
				cadena = in.readLine().toString();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
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

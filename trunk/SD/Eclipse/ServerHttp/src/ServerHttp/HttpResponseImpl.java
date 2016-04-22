package ServerHttp;

import java.util.ArrayList;

public class HttpResponseImpl implements HttpResponse{
	
	private ArrayList<String> headers = new ArrayList<String>();
	private String allheaders = null;
	
	
	// write the http response
	@Override
	public String getStatus404(){
	return ("HTTP/1.1 404 Not Found");
	}
	@Override
	public String getStatus405(){
	return ("HTTP/1.1 405 Method Not Allowed");
	}
	@Override
	public String getStatus500(){
	return("HTTP/1.1 500 Internal Server Error");
	}
	@Override
	public String getStatus503(){
	return("HTTP/1.1 503 Service Unavailable");
	}
	@Override
	public void addHeader(String name, String value){
	 //completar
		headers.add(name+": "+value);		
	}
	@Override
	public String getHeaders(){
	//completar
		for (String new_header : headers){
			allheaders+=new_header+"\r\n";			
		}
	return(allheaders);
	}
	@Override
	public String getResponseHeaderOK(){
	return("HTTP/1.1 200 OK\r\n<html>Server: Mi propio Server\r\nContent-Type:text/html\r\n</html>\r\n");
	//out.println("");
	//out.println("<html>");
	//out.println("<head><title>WEb simple grupo 5</title></head>");
	//out.println("<body>");
	//out.println("<h1>Todo bien por aca</h1>");
	//out.println("<//body>");
	//out.println("</html>");
	}
}

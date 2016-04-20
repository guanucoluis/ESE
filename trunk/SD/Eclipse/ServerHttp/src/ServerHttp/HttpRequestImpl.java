package ServerHttp;

import java.io.BufferedReader;
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
		return false;
	}

	@Override
	public String getRequestMimeType() {
		// TODO Auto-generated method stub
		return null;
	}

}

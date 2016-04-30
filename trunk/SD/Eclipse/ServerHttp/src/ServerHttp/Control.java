package ServerHttp;

import java.io.File;

public class Control {
	public String doControl(String line) {
		String result = "Comandos: list, exit, shutdown";
		if (line == null)
			return result;
		if (line.equalsIgnoreCase("list"))
			result = doList();
		if (line.equalsIgnoreCase("exit"))
			result = "Chau.";
		if (line.equalsIgnoreCase("shutdown"))
			result = "Muerte a Server";
		if (line.equalsIgnoreCase("who"))
			result = "Conectados";
		return result;
	}
	
	private String doList() {
		File f=new File(System.getProperty("user.dir"));
		String result="\tListado:\t\t"+f.getAbsolutePath()+"\t";
		String[] files=f.list();
		for(String s:files)
			result+="\t"+s;
		return result;
		}
}
package ServerHttp;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class HttpUtilImpl implements HttpUtil {
	File Folder;
	
public HttpUtilImpl(File folder){
	this.Folder = folder;
}

	@Override
	public byte[] readFile(String virtualPath) throws IOException {
		// abre el archivo
//		File file = new File(Folder.getAbsolutePath()+virtualPath);
//		FileInputStream fis = new FileInputStream(file);
//		byte bufferfile[] = new byte[(int) file.length()];
//		fis.read(bufferfile);
//		fis.close();
		
		Path path = Paths.get(Folder.getAbsolutePath()+virtualPath);
		byte bufferfile[] = Files.readAllBytes(path);
		return bufferfile;
	}


	@Override
	public boolean fileExists(String virtualPath) {
		// chequea si existe el archivo y es accesible.
		File file = new File(Folder.getAbsolutePath()+virtualPath);
		if (file.exists()){
			return true;
		}
		else
		return false;
	}
}




#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sys.io {
	public class File : global::haxe.lang.HxObject {
		
		public File(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public File() {
			global::sys.io.File.__hx_ctor_sys_io_File(this);
		}
		
		
		protected static void __hx_ctor_sys_io_File(global::sys.io.File __hx_this) {
		}
		
		
		public static void saveContent(string path, string content) {
			global::sys.io.FileOutput f = global::sys.io.File.write(path, new global::haxe.lang.Null<bool>(false, true));
			f.writeString(content, null);
			f.close();
		}
		
		
		public static global::sys.io.FileOutput write(string path, global::haxe.lang.Null<bool> binary) {
			bool binary1 = ( ( ! (binary.hasValue) ) ? (true) : ((binary).@value) );
			global::System.IO.FileStream stream = new global::System.IO.FileStream(((string) (path) ), ((global::System.IO.FileMode) (global::System.IO.FileMode.Create) ), ((global::System.IO.FileAccess) (global::System.IO.FileAccess.Write) ), ((global::System.IO.FileShare) (global::System.IO.FileShare.ReadWrite) ));
			return new global::sys.io.FileOutput(((global::System.IO.FileStream) (stream) ));
		}
		
		
	}
}



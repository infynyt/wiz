
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sys.io {
	public class Process : global::haxe.lang.HxObject {
		
		public Process(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Process(string cmd, global::Array<string> args, global::haxe.lang.Null<bool> detached) {
			global::sys.io.Process.__hx_ctor_sys_io_Process(this, cmd, args, detached);
		}
		
		
		protected static void __hx_ctor_sys_io_Process(global::sys.io.Process __hx_this, string cmd, global::Array<string> args, global::haxe.lang.Null<bool> detached) {
			if (((detached)).@value) {
				throw ((global::System.Exception) (global::haxe.Exception.thrown("Detached process is not supported on this platform")) );
			}
			
			__hx_this.native = global::sys.io.Process.createNativeProcess(cmd, args);
			__hx_this.native.Start();
			__hx_this.stdout = new global::cs.io.NativeInput(((global::System.IO.Stream) (__hx_this.native.StandardOutput.BaseStream) ));
			__hx_this.stderr = new global::cs.io.NativeInput(((global::System.IO.Stream) (__hx_this.native.StandardError.BaseStream) ));
			__hx_this.stdin = new global::cs.io.NativeOutput(((global::System.IO.Stream) (__hx_this.native.StandardInput.BaseStream) ));
		}
		
		
		public static global::System.Diagnostics.Process createNativeProcess(string cmd, global::Array<string> args) {
			unchecked {
				global::System.Diagnostics.Process native = new global::System.Diagnostics.Process();
				native.StartInfo.CreateNoWindow = ((bool) (true) );
				native.StartInfo.RedirectStandardError = ((bool) (native.StartInfo.RedirectStandardInput = ((bool) (native.StartInfo.RedirectStandardOutput = ((bool) (true) )) )) );
				if (( args != null )) {
					if (( ( global::haxe.lang.StringExt.indexOf(cmd, "/", default(global::haxe.lang.Null<int>)) != -1 ) || ( global::haxe.lang.StringExt.indexOf(cmd, "\\", default(global::haxe.lang.Null<int>)) != -1 ) )) {
						cmd = global::sys.FileSystem.fullPath(cmd);
					}
					
					native.StartInfo.FileName = ((string) (cmd) );
					native.StartInfo.UseShellExecute = ((bool) (false) );
					native.StartInfo.Arguments = ((string) (global::sys.io.Process.buildArgumentsString(args)) );
				}
				else {
					if (( global::Sys.systemName() == "Windows" )) {
						global::System.Diagnostics.ProcessStartInfo tmp = native.StartInfo;
						string _g = global::System.Environment.GetEnvironmentVariable(((string) ("COMSPEC") ));
						string tmp1 = null;
						if (( _g == null )) {
							tmp1 = "cmd.exe";
						}
						else {
							string comspec = _g;
							tmp1 = comspec;
						}
						
						tmp.FileName = ((string) (tmp1) );
						native.StartInfo.Arguments = ((string) (global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("/C \"", cmd), "\"")) );
					}
					else {
						native.StartInfo.FileName = ((string) ("/bin/sh") );
						native.StartInfo.Arguments = ((string) (global::sys.io.Process.buildArgumentsString(new global::Array<string>(new string[]{"-c", cmd}))) );
					}
					
					native.StartInfo.UseShellExecute = ((bool) (false) );
				}
				
				return native;
			}
		}
		
		
		public static string buildArgumentsString(global::Array<string> args) {
			unchecked {
				if (( global::Sys.systemName() == "Windows" )) {
					global::Array<string> _g = new global::Array<string>(new string[]{});
					{
						int _g1 = 0;
						while (( _g1 < args.length )) {
							string a = args[_g1];
							 ++ _g1;
							_g.push(global::haxe.SysTools.quoteWinArg(a, false));
						}
						
					}
					
					return _g.@join(" ");
				}
				else {
					global::Array<string> _g2 = new global::Array<string>(new string[]{});
					{
						int _g3 = 0;
						while (( _g3 < args.length )) {
							string arg = args[_g3];
							 ++ _g3;
							global::StringBuf b = new global::StringBuf();
							b.b.Append(((string) ("\"") ));
							{
								int _g4 = 0;
								int _g5 = arg.Length;
								while (( _g4 < _g5 )) {
									int i = _g4++;
									global::haxe.lang.Null<int> c = global::haxe.lang.StringExt.charCodeAt(arg, i);
									if ( ! (c.hasValue) ) {
									}
									else {
										switch (((c)).@value) {
											case 34:
											case 92:
											{
												b.addChar(92);
												break;
											}
											
											
											default:
											{
												break;
											}
											
										}
										
									}
									
									b.addChar((c).@value);
								}
								
							}
							
							b.b.Append(((string) ("\"") ));
							_g2.push(b.b.ToString());
						}
						
					}
					
					return _g2.@join(" ");
				}
				
			}
		}
		
		
		public global::haxe.io.Input stdout;
		
		public global::haxe.io.Input stderr;
		
		public global::haxe.io.Output stdin;
		
		public global::System.Diagnostics.Process native;
		
		public virtual global::haxe.lang.Null<int> exitCode(global::haxe.lang.Null<bool> block) {
			bool block1 = ( ( ! (block.hasValue) ) ? (true) : ((block).@value) );
			if (( ( block1 == false ) &&  ! (this.native.HasExited)  )) {
				return default(global::haxe.lang.Null<int>);
			}
			
			this.native.WaitForExit();
			return new global::haxe.lang.Null<int>(this.native.ExitCode, true);
		}
		
		
		public virtual void close() {
			this.native.Close();
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 572311959:
					{
						this.native = ((global::System.Diagnostics.Process) (@value) );
						return @value;
					}
					
					
					case 68006728:
					{
						this.stdin = ((global::haxe.io.Output) (@value) );
						return @value;
					}
					
					
					case 132916898:
					{
						this.stderr = ((global::haxe.io.Input) (@value) );
						return @value;
					}
					
					
					case 133414859:
					{
						this.stdout = ((global::haxe.io.Input) (@value) );
						return @value;
					}
					
					
					default:
					{
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 1214453688:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "close", 1214453688)) );
					}
					
					
					case 25738091:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "exitCode", 25738091)) );
					}
					
					
					case 572311959:
					{
						return this.native;
					}
					
					
					case 68006728:
					{
						return this.stdin;
					}
					
					
					case 132916898:
					{
						return this.stderr;
					}
					
					
					case 133414859:
					{
						return this.stdout;
					}
					
					
					default:
					{
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_invokeField(string field, int hash, object[] dynargs) {
			unchecked {
				switch (hash) {
					case 1214453688:
					{
						this.close();
						break;
					}
					
					
					case 25738091:
					{
						return (this.exitCode(global::haxe.lang.Null<object>.ofDynamic<bool>(( (( dynargs.Length > 0 )) ? (dynargs[0]) : (null) )))).toDynamic();
					}
					
					
					default:
					{
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				return null;
			}
		}
		
		
		public override void __hx_getFields(global::Array<string> baseArr) {
			baseArr.push("native");
			baseArr.push("stdin");
			baseArr.push("stderr");
			baseArr.push("stdout");
			base.__hx_getFields(baseArr);
		}
		
		
	}
}


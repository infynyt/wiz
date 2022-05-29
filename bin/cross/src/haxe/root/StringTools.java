package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class StringTools extends haxe.lang.HxObject
{
	public StringTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public StringTools()
	{
		//line 38 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		haxe.root.StringTools.__hx_ctor__StringTools(this);
	}
	
	
	protected static void __hx_ctor__StringTools(haxe.root.StringTools __hx_this)
	{
	}
	
	
	public static boolean isSpace(java.lang.String s, int pos)
	{
		//line 283 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		java.lang.Object c = haxe.lang.StringExt.charCodeAt(s, pos);
		//line 284 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		if ( ! ((( ( ((int) (haxe.lang.Runtime.toInt(c)) ) > 8 ) && ( ((int) (haxe.lang.Runtime.toInt(c)) ) < 14 ) ))) ) 
		{
			//line 284 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return haxe.lang.Runtime.eq(c, 32);
		}
		else
		{
			//line 284 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return true;
		}
		
	}
	
	
	public static java.lang.String ltrim(java.lang.String s)
	{
		//line 300 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		int l = s.length();
		//line 301 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		int r = 0;
		//line 302 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		while (( ( r < l ) && haxe.root.StringTools.isSpace(s, r) ))
		{
			//line 303 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			 ++ r;
		}
		
		//line 305 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		if (( r > 0 )) 
		{
			//line 306 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return haxe.lang.StringExt.substr(s, r, ( l - r ));
		}
		else
		{
			//line 308 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return s;
		}
		
	}
	
	
}



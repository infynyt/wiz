
#pragma warning disable 109, 114, 219, 429, 168, 162
public sealed class EReg : global::haxe.lang.HxObject {
	
	public EReg(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public EReg(string r, string opt) {
		global::EReg.__hx_ctor__EReg(this, r, opt);
	}
	
	
	private static void __hx_ctor__EReg(global::EReg __hx_this, string r, string opt) {
		unchecked {
			int opts = ((int) (global::haxe.lang.Runtime.toInt(((object) (global::System.Text.RegularExpressions.RegexOptions.CultureInvariant) ))) );
			{
				int _g = 0;
				int _g1 = opt.Length;
				while (( _g < _g1 )) {
					int i = _g++;
					switch (((int) (opt[i]) )) {
						case 99:
						{
							opts |= ((int) (global::haxe.lang.Runtime.toInt(((object) (global::System.Text.RegularExpressions.RegexOptions.Compiled) ))) );
							break;
						}
						
						
						case 103:
						{
							__hx_this.isGlobal = true;
							break;
						}
						
						
						case 105:
						{
							opts |= ((int) (global::haxe.lang.Runtime.toInt(((object) (global::System.Text.RegularExpressions.RegexOptions.IgnoreCase) ))) );
							break;
						}
						
						
						case 109:
						{
							opts |= ((int) (global::haxe.lang.Runtime.toInt(((object) (global::System.Text.RegularExpressions.RegexOptions.Multiline) ))) );
							break;
						}
						
						
					}
					
				}
				
			}
			
			__hx_this.regex = new global::System.Text.RegularExpressions.Regex(((string) (r) ), ((global::System.Text.RegularExpressions.RegexOptions) (((object) (opts) )) ));
		}
	}
	
	
	public global::System.Text.RegularExpressions.Regex regex;
	
	public global::System.Text.RegularExpressions.Match m;
	
	public bool isGlobal;
	
	public string cur;
	
	public bool match(string s) {
		this.m = this.regex.Match(((string) (s) ));
		this.cur = s;
		return ( this.m as global::System.Text.RegularExpressions.Group ).Success;
	}
	
	
	public string matched(int n) {
		if (( ( this.m == null ) || ( ((uint) (n) ) > this.m.Groups.Count ) )) {
			throw ((global::System.Exception) (global::haxe.Exception.thrown("EReg::matched")) );
		}
		
		if ( ! (this.m.Groups[n].Success) ) {
			return null;
		}
		
		return ( this.m.Groups[n] as global::System.Text.RegularExpressions.Capture ).Value;
	}
	
	
	public object matchedPos() {
		int tmp = ( this.m as global::System.Text.RegularExpressions.Capture ).Index;
		{
			int __temp_odecl1 = ( this.m as global::System.Text.RegularExpressions.Capture ).Length;
			return new global::haxe.lang.DynamicObject(new int[]{}, new object[]{}, new int[]{5393365, 5594516}, new double[]{((double) (__temp_odecl1) ), ((double) (tmp) )});
		}
		
	}
	
	
	public bool matchSub(string s, int pos, global::haxe.lang.Null<int> len) {
		unchecked {
			int len1 = ( ( ! (len.hasValue) ) ? (-1) : ((len).@value) );
			this.m = ( (( len1 < 0 )) ? (this.regex.Match(((string) (s) ), ((int) (pos) ))) : (this.regex.Match(((string) (s) ), ((int) (pos) ), ((int) (len1) ))) );
			this.cur = s;
			return ( this.m as global::System.Text.RegularExpressions.Group ).Success;
		}
	}
	
	
	public string map(string s, global::haxe.lang.Function f) {
		unchecked {
			int offset = 0;
			global::System.Text.StringBuilder buf_b = new global::System.Text.StringBuilder();
			while (true) {
				if (( offset >= s.Length )) {
					break;
				}
				else if ( ! (this.matchSub(s, offset, default(global::haxe.lang.Null<int>))) ) {
					buf_b.Append(((string) (global::Std.@string(global::haxe.lang.StringExt.substr(s, offset, default(global::haxe.lang.Null<int>)))) ));
					break;
				}
				
				object p = this.matchedPos();
				buf_b.Append(((string) (global::Std.@string(global::haxe.lang.StringExt.substr(s, offset, new global::haxe.lang.Null<int>(( ((int) (global::haxe.lang.Runtime.getField_f(p, "pos", 5594516, true)) ) - ((int) (offset) ) ), true)))) ));
				buf_b.Append(((string) (global::Std.@string(global::haxe.lang.Runtime.toString(f.__hx_invoke1_o(default(double), this)))) ));
				if (( ((int) (global::haxe.lang.Runtime.getField_f(p, "len", 5393365, true)) ) == 0 )) {
					buf_b.Append(((string) (global::Std.@string(global::haxe.lang.StringExt.substr(s, ((int) (global::haxe.lang.Runtime.getField_f(p, "pos", 5594516, true)) ), new global::haxe.lang.Null<int>(1, true)))) ));
					offset = ( ((int) (global::haxe.lang.Runtime.getField_f(p, "pos", 5594516, true)) ) + 1 );
				}
				else {
					offset = ( ((int) (global::haxe.lang.Runtime.getField_f(p, "pos", 5594516, true)) ) + ((int) (global::haxe.lang.Runtime.getField_f(p, "len", 5393365, true)) ) );
				}
				
				if ( ! (this.isGlobal) ) {
					break;
				}
				
			}
			
			if (( (  ! (this.isGlobal)  && ( offset > 0 ) ) && ( offset < s.Length ) )) {
				buf_b.Append(((string) (global::Std.@string(global::haxe.lang.StringExt.substr(s, offset, default(global::haxe.lang.Null<int>)))) ));
			}
			
			return buf_b.ToString();
		}
	}
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			switch (hash) {
				case 4949376:
				{
					this.cur = global::haxe.lang.Runtime.toString(@value);
					return @value;
				}
				
				
				case 1821933:
				{
					this.isGlobal = global::haxe.lang.Runtime.toBool(@value);
					return @value;
				}
				
				
				case 109:
				{
					this.m = ((global::System.Text.RegularExpressions.Match) (@value) );
					return @value;
				}
				
				
				case 1723805383:
				{
					this.regex = ((global::System.Text.RegularExpressions.Regex) (@value) );
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
				case 5442204:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "map", 5442204)) );
				}
				
				
				case 1126920507:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "matchSub", 1126920507)) );
				}
				
				
				case 1271070480:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "matchedPos", 1271070480)) );
				}
				
				
				case 159136996:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "matched", 159136996)) );
				}
				
				
				case 52644165:
				{
					return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "match", 52644165)) );
				}
				
				
				case 4949376:
				{
					return this.cur;
				}
				
				
				case 1821933:
				{
					return this.isGlobal;
				}
				
				
				case 109:
				{
					return this.m;
				}
				
				
				case 1723805383:
				{
					return this.regex;
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
				case 5442204:
				{
					return this.map(global::haxe.lang.Runtime.toString(dynargs[0]), ((global::haxe.lang.Function) (dynargs[1]) ));
				}
				
				
				case 1126920507:
				{
					return this.matchSub(global::haxe.lang.Runtime.toString(dynargs[0]), ((int) (global::haxe.lang.Runtime.toInt(dynargs[1])) ), global::haxe.lang.Null<object>.ofDynamic<int>(( (( dynargs.Length > 2 )) ? (dynargs[2]) : (null) )));
				}
				
				
				case 1271070480:
				{
					return this.matchedPos();
				}
				
				
				case 159136996:
				{
					return this.matched(((int) (global::haxe.lang.Runtime.toInt(dynargs[0])) ));
				}
				
				
				case 52644165:
				{
					return this.match(global::haxe.lang.Runtime.toString(dynargs[0]));
				}
				
				
				default:
				{
					return base.__hx_invokeField(field, hash, dynargs);
				}
				
			}
			
		}
	}
	
	
	public override void __hx_getFields(global::Array<string> baseArr) {
		baseArr.push("cur");
		baseArr.push("isGlobal");
		baseArr.push("m");
		baseArr.push("regex");
		base.__hx_getFields(baseArr);
	}
	
	
}




#pragma warning disable 109, 114, 219, 429, 168, 162
public class Math {
	
	public Math() {
	}
	
	
	public static readonly double NaN = global::System.Double.NaN;
	
	public static readonly double POSITIVE_INFINITY = global::System.Double.PositiveInfinity;
	
	public static int round(double v) {
		unchecked {
			int vint = ((int) (v) );
			double dec = ( v - vint );
			if (( ( dec >= 1 ) || ( dec <= -1 ) )) {
				return vint;
			}
			
			if (( dec >= .5 )) {
				return ( vint + 1 );
			}
			
			if (( dec < -.5 )) {
				return ( vint - 1 );
			}
			
			return vint;
		}
	}
	
	
}


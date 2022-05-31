package tech.infynyt.wiz;

class Wiz {
	public static final args:Array<String> = Sys.args();

	public static function main():Void {
		if (args.length == 0) {
			Console.log("Usage: wiz (command) [args]");
			return;
		}

		switch (args[0]) {
			case "install":
				if (args[1] == null) {
					Console.log("Usage: wiz install (package)");
					return;
				} else {
					var timestart = Date.now().getTime();
					Console.log("Installing package " + args[1]);
					var success = Handler.install(args[1]);
					var timeend = Date.now().getTime();
					if (success) {
						Console.success("Installed in " + ((timeend - timestart) / 1000) + " seconds");
					} else {
						Console.error("Failed in " + ((timeend - timestart) / 1000) + " seconds");
					}
				}
		}
		return;
	}
}

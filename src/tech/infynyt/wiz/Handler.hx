package tech.infynyt.wiz;

import haxe.Exception;
import haxe.io.Path;
import sys.io.File;
import haxe.zip.Entry;
import haxe.zip.Tools;
import haxe.zip.Uncompress;
import haxe.io.Bytes;
import tink.http.Client;

class Handler {
	public static function install(name:String):Bool {
		// first we must check if the package exists
		Console.log("Fetching package: " + name);
		var pkg:Package = fetch(name);
		if (pkg == null) {
			Console.error("Package not found: " + name);
			return false;
		}
		Console.success("Package found: " + name);
		Console.log("Downloading package: " + name);
		var bin = Handler.download(pkg);
		if (bin == null) {
			Console.error("Package download failed: " + name);
			return false;
		}

		return false;
	}

	public static function uninstall(name:String):Bool {
		return false;
	}

	public static function fetch(name:String):Package {
		if (name == "test") {
			return {
				name: "test",
				version: "1.0.0",
				repository: "",
				license: "MIT",
				description: "",
				dependencies: [],
				keywords: [],
				main: "Test.hx",
				// downloadUrl: "http://localhost:9724/packages/test/1.0.0/test.zip",
				downloadUrl: "http://infynyt.github.io/packages/test/1.0.0/",
				author: "SidGames5",
			};
		};
		return null;
	}

	public static function download(pkg:Package):Bytes {
		var output = null;

		var binurl = pkg.downloadUrl + "pkg.hl";

		// var req = new Http(pkg.downloadUrl);
		// req.request();
		// req.onError = function(e:String) {
		// 	Console.error("Http request failed: " + e);
		// 	return null;
		// };
		// req.onData = function(data:String) {
		// 	Console.success("Http request success: " + data);
		// 	output = data;
		// 	return data;
		// };
		Console.log("Fetching:" + binurl);
		Client.fetch(binurl).all().handle(function(o) switch o {
			case Success(res):
				Console.debug("Status code: " + res.header.statusCode);
				var data = res.body.toBytes();
				output = data;
				Console.debug("Data: " + data);
			case Failure(e):
				Console.error("Http request failed: " + e);
		});
		return output;
	}

	public static function execute(bin:String):Bool {
		// first we must save the binary file on the disk (we cant keep storing it in memory)
		File.saveBytes(Path.join([Sys.getCwd(), "tmp/", "installtemp.tmp"]), bin);
		return false;
	}

	public static function clean(dir:String):Bool {
		return false;
	}
}

if(isfile("C:\\Users\\pmbie\\CodingLocal\\hackisufall2018\\example.dll"))
	ccall((:makeCaca, "C:\\Users\\pmbie\\CodingLocal\\hackisufall2018\\example.dll"), Cint, ())
else
	println("example.dll does not exist")
end

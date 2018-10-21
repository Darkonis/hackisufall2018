#using Clang.cindex
#cindex.parseheader()
#process = CDLL('./example.dll')
if(isfile("./example.so"))
	ccall((:Makecaca,"./example.so"), Cint, (Cint,),(0))
else
	println("example.so does not exist")
end

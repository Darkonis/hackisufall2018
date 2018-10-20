#using Clang.cindex
#cindex.parseheader()
if(isfile("example.dll"))
	ccall((:Makecaca,"/example.dll"), Cint, (Cint,),(0))
else
	println("example.dll does not exist")
end

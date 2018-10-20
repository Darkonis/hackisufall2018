#using Clang.cindex
#cindex.parseheader()
if(isfile("C:/Users/flame/AppData/Local/Packages/CanonicalGroupLimited.UbuntuonWindows_79rhkp1fndgsc/LocalState/rootfs/usr/lib/x86_64-linux-gnu/libcaca.so"))
	ccall((:caca_wait_event,"C:/Users/flame/AppData/Local/Packages/CanonicalGroupLimited.UbuntuonWindows_79rhkp1fndgsc/LocalState/rootfs/usr/lib/x86_64-linux-gnu/libcaca++.so.0"), Cint, (Cint,),(0))
else
	println("example.dll does not exist")
end

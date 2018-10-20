if(isfile("C:\\Windows\\system32\\msvcrt.dll"))
    t = ccall( (:clock, "C:\\Windows\\system32\\msvcrt.dll"), Int32, ())
end

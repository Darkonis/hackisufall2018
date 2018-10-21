using Clang.cindex
using Clang.wrap_c
header="C:/Users/flame/Desktop/hackisufall2018/"
petsc_header = [joinpath(header, "example.h")]
clang_includes = String[]
push!(clang_includes,header)
clang_extraargs = ["-v"]
function wrap_header(top_hdr::String, cursor_header::String)
    return startswith(dirname(cursor_header), header)
end
function wrap_cursor(name::String, cursor)
    exc = false
    exc |= contains(name, "c")
    return !exc
end
lib_file(hdr::String) = "C:/Users/flame/AppData/Local/Packages/CanonicalGroupLimited.UbuntuonWindows_79rhkp1fndgsc/LocalState/rootfs/usr/lib/x86_64-linux-gnu/libcaca.so"
output_file(hdr::String) = "caca.jl"

const wc = wrap_c.init(;
                        headers = petsc_header,
                        output_file = "caca.jl",
                        common_file = "caca_common.jl",
                        clang_includes      = clang_includes,
                        clang_args          = clang_extraargs,
                        header_wrapped      = wrap_header,
                        header_library      = lib_file,
                        header_outputfile   = output_file,
                        cursor_wrapped      = wrap_cursor,
                        clang_diagnostics = true)
#readline()
run(wc)

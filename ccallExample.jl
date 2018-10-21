function mycompare{T}(a_::Ptr{T}, b_::Ptr{T})
    a = unsafe_load(a_)
    b = unsafe_load(b_)
    return a < b ? cint(-1) : a > b ? cint(+1) : cint(0)
end
cint(n) = convert(Cint, n)

const mycompare_c = cfunction(mycompare, Cint, (Ptr{double}, Ptr{double}))

A = [3.2, 6.2, 2.8, 5.7]
ccall(:qsort, Void, (Ptr{double}, Csize_t, Csize_t, Ptr{void}),
    A, length(A), sizeof(eltype(A)), mycompare_c)

println(A)

contype = input("Enter type of connection (s or p): ", "s")
n = input("Enter number of resistors: ")
r = input("Enter values of resistors: ")

if contype == "s"
    r_eq = sum(r)
    print("Total resistance in series: " + r_eq)
else
    r_eq = 0
    r_eq = sum(1/r)
    rtotal = 1/r_eq
    print("Total resistance in parallel: " + rtotal)
end

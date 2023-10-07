function fib_values = fibonacci_series(n)

    fib_values = zeros(1,n);
    fib_values(2) = 1;
    
    for i = 3:n
        fib_values(i) = fib_values(i-1) + fib_values(i-2);
    end
end
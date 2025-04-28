main :: IO ()
main = do
  putStrLn "Ingrese un número:"
  input <- getLine
  let n = read input :: Integer
  if n < 0
    	then putStrLn "El factorial no está definido para números negativos."
  else putStrLn ("El factorial es: " ++ show (factorial n))

factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n - 1)

(define (average x y)
  (/ (+ x y) 2))

(define (improve guess x)
  (average guess (/ x guess)))

(define (good-enough? cur old)
   (< (/ (abs (- cur old))
         old)
      0.001))

(define (sqrt-iter cur old x)
  (if (good-enough? cur old)
      cur
      (sqrt-iter (improve cur x)
                 cur
                 x)))

(define (sqrt-improved x)
  (sqrt-iter x 1 x)) 

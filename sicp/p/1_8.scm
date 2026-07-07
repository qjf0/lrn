(define (improve y x)
  (/ (+ (/ x (* y y)) 
        (* 2 y))
     3))

(define (good-enough? cur old)
   (< (/ (abs (- cur old))
         old)
      0.001))

(define (cbrt-iter cur old x)
  (if (good-enough? cur old)
      cur
      (cbrt-iter (improve cur x)
                 cur
                 x)))

(define (cbrt x)
  (if (= 0 x) 0
              (cbrt-iter (* x 1.0)
                         1.0 
                         (* x 1.0))) 

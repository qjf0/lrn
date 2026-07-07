(define (sum-of-two-largest x y z)
        (- (+ x y z) (min x y z)))

; Answer to the English version
(define (square x) (* x x))
(define (sum-square-two-largest x y z)
  (- (+ (square x) (square y) (square z))
     (square (min x y z)))) 

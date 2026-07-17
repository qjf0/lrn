; Recursion
(define (fn_rec n)
  (if (< n 3)
      n
      (+ (fn_rec (- n 1))
         (* 2 (fn_rec (- n 2)))
         (* 3 (fn_rec (- n 3)))))

; Iteration

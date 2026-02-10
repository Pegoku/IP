for _ in range(int(input())):
  b = list(map(int, input().split()))
  books = {}
  booksNum = 1
  for n in b:
    if n > 0:
      books[booksNum] = n
      booksNum += 1
    if n < 0:
      if books[booksNum-1] == n:
        books[booksNum-1].pop()
        booksNum -= 1
      else:
        print("PARANORMAL")
        continue
  print("NORMAL")
    
    
  
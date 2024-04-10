from hydle_family import keller

def me(name, age, qualities):
  name = 'Keller'
  age = 15
  qualities = {'funny': keller.funny(), 
               'kind': keller.kind(), 
               'smart': keller.smart()
              }

if __name__ == '__keller__':
  k = keller()
  k.me()

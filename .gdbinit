set print pretty on
set print array-indexes on
set print elements 0
set print static-members on
set print object on
python
import sys
sys.path.insert(0, '/usr/share/gcc-16/python')
from libstdcxx.v6.printers import register_libstdcxx_printers
register_libstdcxx_printers(None)
end

# Mostrar automáticamente variables locales, argumentos y globales al pausar
define hook-stop
    info locals
    info args
    info globals
end

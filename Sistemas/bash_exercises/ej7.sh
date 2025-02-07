#!/usr/bin/env bash

# Recorrer todos los archivos en test7/
for archivo in test7/*.conf
do
  # Verificar si el archivo existe (evita errores si no hay .conf)
  if [ -f "$archivo" ]; then
    echo "Modificando: $archivo"
    sed -i 's/localhost/127.0.0.1/g' "$archivo"
  fi
done

echo "Reemplazo completado."

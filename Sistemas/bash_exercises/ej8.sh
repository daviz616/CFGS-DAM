#!/usr/bin/env bash

# Verificar si el archivo existe
if [ ! -f "test8/usuarios.txt" ]; then
  echo "Error: El archivo test8/usuarios.txt no existe."
  exit 1
fi

# Leer cada usuario del archivo
while IFS= read -r USUARIO; do
  if [ "$USUARIO" == "maria" ]; then
    echo "Hola maria"
  else
    echo "Hola, $USUARIO"
  fi
done < test8/usuarios.txt

# Tarea

Para comprobar correr el siguiente código:
    ´´´ Bash
    no="No"; num=0; for i in $(seq 1 100); do if [ $(./Tarea) == "$no" ]; then ((num++)); fi; done; echo "$num"
    ´´´
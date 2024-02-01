import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


class Prestamo:
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        # Inicialización de los atributos del préstamo
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        # Cálculo de la amortización al momento de la creación del objeto
        self.amortizacion = self.calcular_amortizacion()

    def calcular_amortizacion(self):
        try:
            # Cálculo de la tasa de interés mensual
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            # Cálculo de la cuota mensual utilizando la fórmula
            # de amortización de préstamos
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / (1 - (1 + tasa_interes_mensual) ** -self.cuotas)
            saldo_restante = self.monto_prestamo
            amortizacion = []

            # Iteración sobre cada cuota para calcular intereses,
            # amortización y saldo restante
            for cuota in range(1, self.cuotas + 1):
                interes_pendiente = saldo_restante * tasa_interes_mensual
                amortizacion_principal = cuota_mensual - interes_pendiente

                saldo_restante -= amortizacion_principal
                amortizacion.append({'Cuota': cuota,
                                     'Interes': interes_pendiente,
                                     'Amortizacion': amortizacion_principal,
                                     'Saldo Restante': saldo_restante})

            return amortizacion
        except ZeroDivisionError:
            print("La cantidad de cuotas no puede ser cero.")
            return []

    def generar_reporte(self, archivo_salida):
        try:
            # Creación de un DataFrame con la información de amortización
            df = pd.DataFrame(self.amortizacion)
            # Guardar el DataFrame en un archivo CSV
            df.to_csv(archivo_salida, index=False)
            print(f"Reporte generado con exito: {archivo_salida}")

        except Exception as e:
            print(f'Ocurrió un error al generar el reporte: {str(e)}')

    def graficar_amortizacion(self):
        # Creación de un DataFrame con la información de amortización
        df = pd.DataFrame(self.amortizacion)

        # Creación de un array para usar en la gráfica de barras
        data = np.array([df['Interes'], df['Amortizacion']])

        # Creación de la gráfica de barras
        plt.bar(df['Cuota'], data[0], label='Interés')
        plt.bar(df['Cuota'], data[1], bottom=data[0],  label='Amortizacion')

        # Configuración de etiquetas y título de la gráfica
        plt.xlabel('Numero de cuota')
        plt.ylabel('Monto ($)')
        plt.title('Amortizacion e Interés por Cuota')
        plt.legend()
        plt.show()

def main():
    try:
        # Solicitar al usuario la información del préstamo
        monto_prestamo = float(input("Ingrese el monto del préstamo: "))
        tasa_interes_anual = float(input("Ingrese la tasa de interés anual (%): "))
        cuotas = int(input("Ingrese la cantidad de cuotas: "))

        # Crear un objeto de la clase Prestamo con la información proporcionada
        prestamo = Prestamo(monto_prestamo, tasa_interes_anual, cuotas)

        # Generar el reporte en un archivo CSV
        archivo_salida = "reporte_amortizacion.csv"
        prestamo.generar_reporte(archivo_salida)

        # Graficar la amortización
        prestamo.graficar_amortizacion()

    except ValueError:
        print("Error, Ingresar solo valores numericos.")

    except Exception as e:
        print(f'Ocurrió un error inesperado: {str(e)}')


if __name__ == "__main__":
    main()

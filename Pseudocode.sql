BEGIN
  DECLARE temp        AS DOUBLE
  DECLARE sum         AS DOUBLE  = 0.0
  DECLARE validCount  AS INTEGER = 0
  DECLARE average     AS DOUBLE

  FOR i = 1 TO 10 DO
    PRINT "Enter temperature reading ", i, " (°C): "
    INPUT temp

    IF temp < 0 THEN
      PRINT "Invalid reading skipped."
      CONTINUE           ← skip remaining body, go to next iteration
    END IF

    sum        = sum + temp
    validCount = validCount + 1
    PRINT "Valid reading accepted: ", temp, " °C"

  END FOR

  IF validCount > 0 THEN
    average = sum / validCount
    PRINT "Average of ", validCount, " valid readings = ", average, " °C"
  ELSE
    PRINT "No valid readings entered. Cannot calculate average."
  END IF

END
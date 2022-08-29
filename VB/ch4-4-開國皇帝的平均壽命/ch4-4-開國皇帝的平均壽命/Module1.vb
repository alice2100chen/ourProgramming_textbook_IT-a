Module Module1

    Sub Main()
        Dim i, num, sum As Integer
        Dim average As Double
        Dim life = {50, 62, 55, 64, 70, 50, 80, 71, 52}
        sum = 0
        num = life.Length
        For i = 0 To (num - 1)
            sum = sum + life(i)
        Next
        average = sum / num
        Console.Write("平均:" & average)
        Console.Read()
    End Sub

End Module

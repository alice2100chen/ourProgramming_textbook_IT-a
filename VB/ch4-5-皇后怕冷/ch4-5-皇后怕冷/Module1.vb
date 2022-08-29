Module Module1

    Dim x, t As Double
    Function temp(ByVal c, ByVal h, ByVal s) As Double
        t = c - (h / 1000) * 6 - s ^ 0.5
        Return t
    End Function
    Sub Main()
        x = temp(20, 1545, 12)
        Console.Write(x)
        Console.Read()
    End Sub

End Module

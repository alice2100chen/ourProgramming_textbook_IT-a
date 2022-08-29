Module Module1

    Sub Main()
        Dim sum As Integer
        Dim p = {72, 24, 35}
        sum = 0
        For i = 0 To 2
            sum = sum + p(i)
        Next
        Console.Write(sum)
        Console.Read()
    End Sub

End Module

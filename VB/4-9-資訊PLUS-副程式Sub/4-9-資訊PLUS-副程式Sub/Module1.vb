Module Module1

    Sub p(ByVal n)
        For i = 1 To n
            Console.WriteLine("HAPPY!")
        Next
    End Sub
    Sub Main()
        Dim x As Integer
        x = 3
        Call p(x)
        Console.Read()
    End Sub

End Module

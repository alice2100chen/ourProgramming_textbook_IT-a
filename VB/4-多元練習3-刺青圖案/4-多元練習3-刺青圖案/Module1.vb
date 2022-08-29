Module Module1
    Sub tatoo(ByVal s, ByVal num)
        For i = 0 To (num - 1)
            Console.Write(s(i))
        Next
    End Sub
    Sub Main()
        Dim n, x As Integer
        Dim s = {" @ ", " # ", " $ ", " % ", " ^ ", " & ", " * ", " + ", " : ", " ! ", " = "}
        Console.Write("給一個數字: ")
        n = Val(Console.ReadLine())
        x = s.Length
        If n > x Then
            Console.Write("數字太大")
        Else
            tatoo(s, n)
        End If
        Console.Read()
    End Sub

End Module

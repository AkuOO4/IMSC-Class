   Public Sub Main()

      Randomize

      Dim raptor_prompt_variable_zzyz As String
      Dim product
      Dim num1
      Dim num2

      product = 1
      raptor_prompt_variable_zzyz = "enter a number1"
      num1 = InputBox(raptor_prompt_variable_zzyz)
      raptor_prompt_variable_zzyz = "enter a number 2"
      num2 = InputBox(raptor_prompt_variable_zzyz)
      product = num1 * num2
      MsgBox product
   
End Sub


object Form1: TForm1
  Left = 623
  Top = 326
  Width = 729
  Height = 407
  Caption = 'mini_Notepad'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Memo: TMemo
    Left = 0
    Top = 0
    Width = 713
    Height = 348
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnKeyDown = MemoKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 504
    Top = 24
    object File1: TMenuItem
      Caption = '&File'
      object Newfile1: TMenuItem
        Caption = '&New             Ctrl+N'
        OnClick = Newfile1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Openfile1: TMenuItem
        Caption = '&Open file...  Ctrl+O'
        OnClick = Openfile1Click
      end
      object Save1: TMenuItem
        Caption = '&Save             Ctrl+S'
        OnClick = Save1Click
      end
      object Saveas1: TMenuItem
        Caption = '&Save as...'
        OnClick = Saveas1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Exit1: TMenuItem
        Caption = '&Exit'
        OnClick = Exit1Click
      end
    end
    object Edit1: TMenuItem
      Caption = '&Edit'
      object CutCtrilX1: TMenuItem
        Caption = 'Cut       Ctril+X'
        OnClick = CutCtrilX1Click
      end
      object CopyCtrilC1: TMenuItem
        Caption = '&Copy    Ctril+C'
        OnClick = CopyCtrilC1Click
      end
      object PasteCtrlV1: TMenuItem
        Caption = '&Paste    Ctrl+V'
        OnClick = PasteCtrlV1Click
      end
    end
    object Format1: TMenuItem
      Caption = '&Format'
      object Wraplines1: TMenuItem
        Caption = '&Wrap lines'
        OnClick = Wraplines1Click
      end
      object Font1: TMenuItem
        Caption = '&Font'
        OnClick = Font1Click
      end
    end
    object Help1: TMenuItem
      Caption = '&Help'
      object Info1: TMenuItem
        Caption = '&Info'
        object GitHub1: TMenuItem
          Caption = '&GitHub'
          OnClick = GitHub1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Text files (txt)|*.txt|All files|*.*'
    Left = 448
    Top = 24
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Text files (txt)|*.txt|All files|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 392
    Top = 24
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 336
    Top = 24
  end
end

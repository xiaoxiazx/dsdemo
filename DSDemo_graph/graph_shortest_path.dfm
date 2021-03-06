object GraphAlgorithmForm: TGraphAlgorithmForm
  Left = 188
  Top = 143
  Caption = #22270#26368#30701#36335#24452#31639#27861#28436#31034
  ClientHeight = 511
  ClientWidth = 1100
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object pnl: TPanel
    Left = 479
    Top = 8
    Width = 615
    Height = 495
    Cursor = crCross
    Hint = #31243#12558#38548#30038#31734#29916#36299
    BevelInner = bvLowered
    BevelOuter = bvLowered
    Enabled = False
    TabOrder = 0
    object img: TImage
      Left = 0
      Top = 0
      Width = 617
      Height = 497
      Transparent = True
      OnMouseDown = imgMouseDown
      OnMouseUp = imgMouseUp
    end
  end
  object GroupBox1: TGroupBox
    Left = 304
    Top = 8
    Width = 169
    Height = 53
    Caption = #26500#22270#25805#20316#38754#26495
    TabOrder = 4
    object CreateNodeBtn: TButton
      Left = 3
      Top = 20
      Width = 74
      Height = 25
      Caption = #21019#24314#33410#28857
      TabOrder = 0
      OnClick = CreateNodeBtnClick
    end
    object ResetBtn: TButton
      Left = 83
      Top = 20
      Width = 75
      Height = 25
      Caption = #37325#32622#30011#26495
      TabOrder = 1
      OnClick = ResetBtnClick
    end
  end
  object GraphType: TRadioGroup
    Left = 3
    Top = 8
    Width = 121
    Height = 53
    Caption = #36873#25321#22270#31867#22411
    TabOrder = 1
  end
  object DirectBtn: TRadioButton
    Left = 6
    Top = 30
    Width = 57
    Height = 21
    Caption = #26377#21521#22270
    Checked = True
    TabOrder = 2
    TabStop = True
    OnClick = DirectBtnClick
  end
  object NoDirectBtn: TRadioButton
    Left = 69
    Top = 32
    Width = 58
    Height = 17
    Caption = #26080#21521#22270
    Ctl3D = True
    ParentCtl3D = False
    TabOrder = 3
    OnClick = NoDirectBtnClick
  end
  object GroupBox2: TGroupBox
    Left = 10
    Top = 80
    Width = 142
    Height = 402
    Caption = #36873#25321#26377#21521#22270#31639#27861
    TabOrder = 5
    object Label2: TLabel
      Left = 70
      Top = 27
      Width = 32
      Height = 17
      AutoSize = False
      Caption = #32456#28857
    end
    object Label1: TLabel
      Left = 10
      Top = 26
      Width = 27
      Height = 18
      AutoSize = False
      Caption = #36215#28857
    end
    object CircleCheckBtn: TButton
      Left = 11
      Top = 239
      Width = 119
      Height = 26
      Caption = #29615#21028#26029
      TabOrder = 0
    end
    object TopologicalSortBtn: TButton
      Left = 11
      Top = 304
      Width = 119
      Height = 26
      Caption = #25299#25169#25490#24207#24207#21015
      TabOrder = 1
    end
    object FloydBtn: TButton
      Left = 11
      Top = 108
      Width = 119
      Height = 26
      Caption = #26368#30701#36335#24452'Floyd'
      TabOrder = 2
      OnClick = FloydBtnClick
    end
    object ShortestPathBtn: TButton
      Left = 11
      Top = 44
      Width = 119
      Height = 25
      Caption = #26368#20339#36335#24452
      TabOrder = 3
      OnClick = ShortestPathBtnClick
    end
    object DijBtn: TButton
      Left = 11
      Top = 175
      Width = 119
      Height = 26
      Caption = #26368#30701#36335#24452'Dijkstra'
      TabOrder = 4
      OnClick = DijBtnClick
    end
    object CriticalPathBtn: TButton
      Left = 11
      Top = 360
      Width = 119
      Height = 25
      Caption = #20851#38190#36335#24452
      TabOrder = 5
    end
    object EndComboBox: TComboBox
      Left = 97
      Top = 23
      Width = 33
      Height = 21
      TabOrder = 6
    end
    object StartComboBox: TComboBox
      Left = 37
      Top = 23
      Width = 32
      Height = 21
      TabOrder = 7
    end
  end
  object memo: TMemo
    Left = 170
    Top = 80
    Width = 303
    Height = 402
    Color = clSilver
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 6
  end
end

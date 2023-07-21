from gui import button
from gui import color
from gui import label

class Player:    
    WIDTH: int  = 60
    HEIGHT: int = 30
    
    def __init__(self, column_x: int, button_color: tuple, label_color: tuple, name="Computer"):
        self.name = name
        self.button_color = button_color
        self.label_color  = label_color
        
        # Scorecard buttons
        self.OnesButton          = button.Button(self.button_color, column_x, 200, self.WIDTH, self.HEIGHT, "Ones")
        self.TwosButton          = button.Button(self.button_color, column_x, 230, self.WIDTH, self.HEIGHT, "Twos")
        self.ThreesButton        = button.Button(self.button_color, column_x, 260, self.WIDTH, self.HEIGHT, "Threes")
        self.FoursButton         = button.Button(self.button_color, column_x, 290, self.WIDTH, self.HEIGHT, "Fours")
        self.FivesButton         = button.Button(self.button_color, column_x, 320, self.WIDTH, self.HEIGHT, "Fives")
        self.SixesButton         = button.Button(self.button_color, column_x, 350, self.WIDTH, self.HEIGHT, "Sixes")
        self.ThreeKindButton     = button.Button(self.button_color, column_x, 470, self.WIDTH, self.HEIGHT, "3K")
        self.FourKindButton      = button.Button(self.button_color, column_x, 500, self.WIDTH, self.HEIGHT, "4k")
        self.FullHouseButton     = button.Button(self.button_color, column_x, 530, self.WIDTH, self.HEIGHT, "FH")
        self.SmallStraightButton = button.Button(self.button_color, column_x, 560, self.WIDTH, self.HEIGHT, "SS")        
        self.LargeStraightButton = button.Button(self.button_color, column_x, 590, self.WIDTH, self.HEIGHT, "LS")        
        self.YahtzeeButton       = button.Button(self.button_color, column_x, 620, self.WIDTH, self.HEIGHT, "Yahtzee")
        self.ChanceButton        = button.Button(self.button_color, column_x, 650, self.WIDTH, self.HEIGHT, "Chance")
        
        # Scorecard labels
        self.UpperBonus = label.Label(column_x, 380, (self.WIDTH, self.HEIGHT), 'bonus')
        self.UpperScore = label.Label(column_x, 410, (self.WIDTH, self.HEIGHT), 'sum')
        self.LowerScore = label.Label(column_x, 680, (self.WIDTH, self.HEIGHT), 'sum')
        self.TotalScore = label.Label(column_x, 710, (self.WIDTH, self.HEIGHT), 'Total')
        
    def draw_player_scorecard(self, window):
        # upper
        self.OnesButton.draw(window)
        self.TwosButton.draw(window)
        self.ThreesButton.draw(window)
        self.FoursButton.draw(window)
        self.FivesButton.draw(window)
        self.SixesButton.draw(window)
        self.UpperScore.draw(window)
        self.UpperBonus.draw(window)
        
        # lower
        self.ThreeKindButton.draw(window)
        self.FourKindButton.draw(window)
        self.FullHouseButton.draw(window)
        self.SmallStraightButton.draw(window)
        self.LargeStraightButton.draw(window)
        self.YahtzeeButton.draw(window)
        self.ChanceButton.draw(window)
        self.LowerScore.draw(window)
        self.TotalScore.draw(window)
        
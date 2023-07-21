from gui import player
from gui import scoreslot
import pygame

scorecard_colors = {
    'white': (255, 255, 255),
    'black': (0, 0, 0),
}

class Scorecard:
    INITIAL_COLUMN_X: int = 165
    INITIAL_COLUMN_Y: int = 200
    COLUMN1_X = INITIAL_COLUMN_X
    COLUMN2_X = INITIAL_COLUMN_X + 60
    COLUMN3_X = COLUMN2_X + 60
    COLUMN4_X = COLUMN3_X + 60
    
    def __init__(self, colors: dict, font: dict):
        self.colors           = colors
        self.background_color = scorecard_colors.get('white')
        self.button_color     = scorecard_colors.get('black')
        self.label_color      = scorecard_colors.get('white')
        self.font             = font
        
        # Init Scorecard
        self.ones           = scoreslot.Scoreslot(0, 200, '1s', False, False)
        self.twos           = scoreslot.Scoreslot(0, 230, '2s', False, False)
        self.threes         = scoreslot.Scoreslot(0, 260, '3s', False, False)
        self.fours          = scoreslot.Scoreslot(0, 290, '4s', False, False)
        self.fives          = scoreslot.Scoreslot(0, 320, '5s', False, False)
        self.sixes          = scoreslot.Scoreslot(0, 350, '6s', False, False)
        self.upper_total_1  = scoreslot.Scoreslot(0, 380, 'Upper Score',False, True)
        self.upper_bonus    = scoreslot.Scoreslot(0, 410, 'Bonus if >= 63',False, True)
        self.upper_total_2  = scoreslot.Scoreslot(0, 440, 'Total Upper Score',False, True)
        self.three_kind     = scoreslot.Scoreslot(0, 470, '3 of a Kind', False, False)
        self.four_kind      = scoreslot.Scoreslot(0, 500, '4 of a Kind', False, False)
        self.full_house     = scoreslot.Scoreslot(0, 530, 'Full House', False, False)
        self.small_straight = scoreslot.Scoreslot(0, 560, 'Small Straight', False, False)
        self.large_straight = scoreslot.Scoreslot(0, 590, 'Large Straight', False, False)
        self.yahtzee        = scoreslot.Scoreslot(0, 620, 'YAHTZEE!', False, False)
        self.chance         = scoreslot.Scoreslot(0, 650, 'Chance', False, False)
        self.bonus          = scoreslot.Scoreslot(0, 680, 'Lower Bonus', False, False)
        self.lower_total_1  = scoreslot.Scoreslot(0, 710, 'Upper Score', False, True)
        self.lower_total_2  = scoreslot.Scoreslot(0, 740, 'Upper Total', False, True)
        self.grand_total    = scoreslot.Scoreslot(0, 770, 'Grand Total', False, True)
        
        self.PlayerOne = player.Player(self.COLUMN1_X, self.button_color, self.label_color, name="Player One")
        
    def draw_scorecard(self, window, width: int, height: int):
        # draw verticle lines
        pygame.draw.rect(window, self.background_color, [0, 200, 225, height - 200])
        pygame.draw.line(window, scorecard_colors.get('black'), (0, 200), (width, 200), 3)
        pygame.draw.line(window, scorecard_colors.get('black'), (165, 200), (165, height), 3)
        pygame.draw.line(window, scorecard_colors.get('black'), (225, 200), (225, height), 3)        
        
        # draw scorecard
        self.ones.draw(window, self.colors, self.font)
        self.twos.draw(window, self.colors, self.font)
        self.threes.draw(window, self.colors, self.font)
        self.fours.draw(window, self.colors, self.font)
        self.fives.draw(window, self.colors, self.font)
        self.sixes.draw(window, self.colors, self.font)
        self.upper_total_1.draw(window, self.colors, self.font)
        self.upper_bonus.draw(window, self.colors, self.font)
        self.upper_total_2.draw(window, self.colors, self.font)
        self.three_kind.draw(window, self.colors, self.font)
        self.four_kind.draw(window, self.colors, self.font)
        self.full_house.draw(window, self.colors, self.font)
        self.small_straight.draw(window, self.colors, self.font)
        self.large_straight.draw(window, self.colors, self.font)
        self.yahtzee.draw(window, self.colors, self.font)
        self.chance.draw(window, self.colors, self.font)
        self.bonus.draw(window, self.colors, self.font)
        self.lower_total_1.draw(window, self.colors, self.font)
        self.lower_total_2.draw(window, self.colors, self.font)
        self.grand_total.draw(window, self.colors, self.font)
        
        self.PlayerOne.draw_player_scorecard(window)   
     
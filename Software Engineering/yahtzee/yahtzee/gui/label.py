from gui import color
import pygame

label_colors = {
    'background': color.WHITE,
    'text_color': color.BLACK
}

class Label:
    def __init__(self, x: int, y: int, dimensions: tuple, text: str):
        self.x_pos = x
        self.y_pos = y
        self.dimensions = dimensions
        self.text = text
            
    def draw(self, window):
        # init font and style
        font = pygame.font.Font('freesansbold.ttf', 18)
        
        # render text to screen
        label = font.render(self.text, 1, label_colors.get('text_color'))
        window.blit(label, (self.x_pos + (self.dimensions[0] / 2 - label.get_width() / 2), self.y_pos + (self.dimensions[1] / 2 - label.get_height() / 2)))      
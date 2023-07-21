import pygame

class Scoreslot:
    def __init__(self, x: int, y: int,text: str, possible: bool, done: bool) -> None:

        self.x_pos = x
        self.y_pos = y
        self.text = text
        self.possible = possible
        self.done = done
         
    def draw(self, window, colors: dict, font: dict):
        pygame.draw.line(window, colors.get('black'), (self.x_pos, self.y_pos), (self.x_pos + 225, self.y_pos), 2)
        pygame.draw.line(window, colors.get('black'), (self.x_pos, self.y_pos + 30), (self.x_pos + 225, self.y_pos + 30), 2)
        
        if not self.done:
            if self.possible:
                text = font.render(self.text, True, (34, 140, 34))
            elif not self.possible:
                text = font.render(self.text, True, (255, 0, 0))
        else:
            text = font.render(self.text, True, (0, 0, 0))
            
        window.blit(text, (self.x_pos + 5, self.y_pos + 10))   
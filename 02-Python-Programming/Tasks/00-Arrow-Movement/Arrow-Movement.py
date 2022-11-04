import pygame
from datetime import datetime

Resolution = Width, Height = 1200, 800

pygame.init()
Surface = pygame.display.set_mode(Resolution)
Clock = pygame.time.Clock()

Clock12 = dict(zip(range(12), range(0, 360, 30))) # For hours
Clock60 = dict(zip(range(60), range(0, 360, 6))) # For Minutes and Seconds

font = pygame.font.SysFont('verdana', 60)

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()
    # Set Background
    Surface.fill(pygame.Color('black'))
    # Get Time
    time = datetime.now()
    # Draw Clock
    pygame.draw.circle(Surface, pygame.Color('darkslategray'), (Width // 2, Height // 2), 350)
    # Digital Clock
    time_render = font.render(f'{time:%H:%M:%S}', True, pygame.Color('forestgreen'), pygame.Color('orange'))
    Surface.blit(time_render, (0, 0))

    pygame.display.flip()
    Clock.tick(20)
    
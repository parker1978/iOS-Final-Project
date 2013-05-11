#import "BRNotificationTimeViewController.h"

@interface BRNotificationTimeViewController ()

@end

@implementation BRNotificationTimeViewController
@synthesize whatTimeLabel;
@synthesize timePicker;

- (IBAction)didChangeTime:(id)sender {
    NSDateComponents *components = [[NSCalendar currentCalendar] components:NSHourCalendarUnit|NSMinuteCalendarUnit fromDate:self.timePicker.date];
    
    NSLog(@"Changed time to: %d:%d",components.hour,components.minute);
}

@end

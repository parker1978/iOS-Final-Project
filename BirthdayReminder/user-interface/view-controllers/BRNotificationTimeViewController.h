#import "BRCoreViewController.h"

@interface BRNotificationTimeViewController : BRCoreViewController

@property (weak, nonatomic) IBOutlet UILabel *whatTimeLabel;
@property (weak, nonatomic) IBOutlet UIDatePicker *timePicker;
- (IBAction)didChangeTime:(id)sender;

@end

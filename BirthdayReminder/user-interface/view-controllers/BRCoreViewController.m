#import "BRCoreViewController.h"

@interface BRCoreViewController ()

@end

@implementation BRCoreViewController

-(void) viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor grayColor];
}

-(IBAction)cancelAndDismiss:(id)sender
{
    NSLog(@"Cancel");
    [self dismissViewControllerAnimated:YES completion:^{
        //view controller dismiss animation completed
    }];
}

- (IBAction)saveAndDismiss:(id)sender
{
    NSLog(@"Save");
    [self dismissViewControllerAnimated:YES completion:^{
        //view controller dismiss animation completed
    }];
}

@end

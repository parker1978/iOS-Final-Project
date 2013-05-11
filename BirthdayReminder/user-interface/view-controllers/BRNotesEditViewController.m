#import "BRNotesEditViewController.h"

@interface BRNotesEditViewController ()

@end

@implementation BRNotesEditViewController
@synthesize saveButton;
@synthesize textView;

-(void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [self.textView becomeFirstResponder];
}

#pragma mark UITextViewDelegate

- (void)textViewDidChange:(UITextView *)textView
{
    NSLog(@"User changed the notes text: %@",self.textView.text);
}

@end

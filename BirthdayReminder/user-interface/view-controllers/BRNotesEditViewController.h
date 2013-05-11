#import "BRCoreViewController.h"

@interface BRNotesEditViewController : BRCoreViewController <UITextViewDelegate>

@property (weak, nonatomic) IBOutlet UIBarButtonItem *saveButton;
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end

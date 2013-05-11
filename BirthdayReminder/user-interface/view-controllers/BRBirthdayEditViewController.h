#import <UIKit/UIKit.h>
#import "BRCoreViewController.h"

@interface BRBirthdayEditViewController : BRCoreViewController <UITextFieldDelegate,UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) NSMutableDictionary *birthday;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *saveButton;
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *includeYearLabel;
@property (weak, nonatomic) IBOutlet UISwitch *includeYearSwitch;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UIView *photoContainerView;
@property (weak, nonatomic) IBOutlet UILabel *picPhotoLabel;
@property (weak, nonatomic) IBOutlet UIImageView *photoView;

- (IBAction)didChangeNameText:(id)sender;
- (IBAction)didToggleSwitch:(id)sender;
- (IBAction)didChangeDatePicker:(id)sender;
- (IBAction)didTapPhoto:(id)sender;

@end

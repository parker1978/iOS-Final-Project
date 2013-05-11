#import <UIKit/UIKit.h>
#import "BRCoreViewController.h"

@interface BRBirthdayDetailViewController : BRCoreViewController

@property(nonatomic,strong) NSMutableDictionary *birthday;
@property (weak, nonatomic) IBOutlet UIImageView *photoView;

@end

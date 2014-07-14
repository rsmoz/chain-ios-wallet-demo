//
//  CNExportPKeyViewController.h
//  
//
//
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface CNExportPKeyViewController : UIViewController <MFMessageComposeViewControllerDelegate, UIActionSheetDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *QREncoderView;
@property (weak, nonatomic) IBOutlet UIButton *MyAddressLabel;
@property (strong, nonatomic) NSString *MyPrivateKey;


@end
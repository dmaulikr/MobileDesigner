//
//  NewProjectViewController.h
//  MobileDesigner
//

#import <UIKit/UIKit.h>


@interface NewProjectViewController : UIViewController <UITextFieldDelegate> {
	UITextField* projectTitleField;
	UITextField* widthField;
	UITextField* heightField;
	UIButton* mapItButton;
	UIButton* okButton;
	UIButton* cancelButton;
}

@property (retain) IBOutlet UITextField *projectTitleField;
@property (retain) IBOutlet UITextField *widthField;
@property (retain) IBOutlet UITextField *heightField;
@property (retain) IBOutlet UIButton *mapItButton;
@property (retain) IBOutlet UIButton *okButton;
@property (retain) IBOutlet UIButton *cancelButton;


- (IBAction)okPressed:(UIButton*)sender;
- (IBAction)cancelPressed:(UIButton*)sender;
- (IBAction)mapItButtonPressed:(UIButton*)sender;

@end
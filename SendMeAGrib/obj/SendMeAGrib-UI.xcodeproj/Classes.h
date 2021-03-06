//
// This code has been automatically generated by RemObjects Elements for interaction with Xcode. 
//
// It is not meant to compile, and any changes will be ignored and discarded. 
//

@interface AppDelegate: NSObject



@end

@interface MainWindowController: NSWindowController

@property (weak, nonatomic) IBOutlet NSButton *animationButton;
@property (weak, nonatomic) IBOutlet NSArrayController *AnimationSelectionsArrayController;
@property (weak, nonatomic) IBOutlet NSButton *automaticScheduleButton;
@property (weak, nonatomic) IBOutlet NSStepper *forecastStepper;
@property (weak, nonatomic) IBOutlet NSTextField *forecastTextField;
@property (weak, nonatomic) IBOutlet NSStepper *intervalStepper;
@property (weak, nonatomic) IBOutlet NSTextField *intervalTextField;
@property (weak, nonatomic) IBOutlet NSPopUpButton *KeyPopupButton;
@property (weak, nonatomic) IBOutlet NSArrayController *KeysArrayController;
@property (weak, nonatomic) IBOutlet NSMatrix *numberOfDays;
@property (weak, nonatomic) IBOutlet NSTextField *outputValueTextField;
@property (weak, nonatomic) IBOutlet NSButton *sendButton;
@property (weak, nonatomic) IBOutlet NSButton *settingsButton;
@property (weak, nonatomic) IBOutlet NSPopover *settingsPopover;
@property (weak, nonatomic) IBOutlet NSTextField *startTextField;
@property (weak, nonatomic) IBOutlet NSButton *timesButton;
@property (weak, nonatomic) IBOutlet NSTextField *timesTextField;

- (IBAction)cancelRequest:(id)sender;
- (IBAction)doSettings:(id)sender;
- (IBAction)sendMail:(id)sender;

@end

@interface SettingsViewController: NSViewController


- (IBAction)doCancel:(id)sender;
- (IBAction)doOk:(id)sender;

@end


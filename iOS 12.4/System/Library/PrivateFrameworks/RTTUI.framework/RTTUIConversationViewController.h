/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <RTTUI/RTTUIUtteranceCellDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <RTTUI/RTTUIServiceCellDelegate.h>

@protocol OS_dispatch_queue;
@class RTTUITextView, CAShapeLayer, UIButton, AXDispatchTimer, NSMutableCharacterSet, NSDictionary, NSMutableString, NSLock, NSObject, RTTConversation, NSString, DDParsecCollectionViewController, UITableView, RTTUtterance, TUCall, NSMutableArray;

@interface RTTUIConversationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, RTTUIUtteranceCellDelegate, UITextViewDelegate, RTTUIServiceCellDelegate> {

	RTTUITextView* _textView;
	CAShapeLayer* _bubbleLayer;
	UIButton* _gaButton;
	AXDispatchTimer* _ttyPredictionsTimer;
	NSMutableCharacterSet* _unsupportedCharacterSet;
	NSDictionary* _asciiSubstitutions;
	AXDispatchTimer* _voAnnouncementTimer;
	NSMutableString* _voAnnouncementBuffer;
	NSLock* _realtimeSendLock;
	NSObject*<OS_dispatch_queue> _utteranceRequestQueue;
	BOOL _serviceMessageVisible;
	BOOL _processingUtteranceBuffer;
	RTTConversation* _conversation;
	NSString* _currentServiceMessage;
	DDParsecCollectionViewController* _lookupController;
	UITableView* _tableView;
	RTTUtterance* _currentUtterance;
	TUCall* _call;
	NSMutableArray* _utteranceBuffer;

}

@property (nonatomic,retain) DDParsecCollectionViewController * lookupController;              //@synthesize lookupController=_lookupController - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) RTTConversation * conversation;                                   //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) RTTUtterance * currentUtterance;                                  //@synthesize currentUtterance=_currentUtterance - In the implementation block
@property (nonatomic,retain) TUCall * call;                                                    //@synthesize call=_call - In the implementation block
@property (nonatomic,retain) NSMutableArray * utteranceBuffer;                                 //@synthesize utteranceBuffer=_utteranceBuffer - In the implementation block
@property (assign,nonatomic) BOOL processingUtteranceBuffer;                                   //@synthesize processingUtteranceBuffer=_processingUtteranceBuffer - In the implementation block
@property (nonatomic,retain) NSString * currentServiceMessage;                                 //@synthesize currentServiceMessage=_currentServiceMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForConversation:(id)arg1 ;
+(id)viewControllerForCall:(id)arg1 ;
-(void)setCall:(TUCall *)arg1 ;
-(TUCall *)call;
-(RTTConversation *)conversation;
-(void)setConversation:(RTTConversation *)arg1 ;
-(void)utteranceCellDidUpdateContent:(id)arg1 ;
-(void)callDidConnect:(id)arg1 ;
-(void)setUtteranceBuffer:(NSMutableArray *)arg1 ;
-(void)setTextViewUtterance:(id)arg1 ;
-(void)setLookupController:(DDParsecCollectionViewController *)arg1 ;
-(void)setupTableView;
-(void)deviceDidReceiveString:(id)arg1 forUtterance:(id)arg2 ;
-(void)updateTableViewSizeAnimated:(BOOL)arg1 ;
-(void)toggleMute:(id)arg1 ;
-(void)updateMuteButton;
-(void)shareCallInfo:(id)arg1 ;
-(id)addUtterance:(id)arg1 ;
-(void)setProcessingUtteranceBuffer:(BOOL)arg1 ;
-(NSMutableArray *)utteranceBuffer;
-(id)cellAtIndexPath:(id)arg1 ;
-(void)processUtteranceQueue;
-(void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3 ;
-(BOOL)processingUtteranceBuffer;
-(id)currentContactPath;
-(id)cannedResponses;
-(void)updateVoiceOverAnnouncement:(id)arg1 ;
-(void)sendNewUtteranceString:(id)arg1 ;
-(id)textViewUtterance;
-(void)setCurrentUtterance:(RTTUtterance *)arg1 ;
-(RTTUtterance *)currentUtterance;
-(void)realtimeTextDidChange;
-(void)gaButtonPressed:(id)arg1 ;
-(void)updateViewForKeyboard:(id)arg1 ;
-(BOOL)utteranceIsSelected;
-(DDParsecCollectionViewController *)lookupController;
-(id)inputTextView;
-(void)replyCell:(id)arg1 didActivateWithReplyButtonType:(unsigned long long)arg2 ;
-(void)updateGAButton:(BOOL)arg1 ;
-(void)updateServiceCellWithString:(id)arg1 ;
-(void)setCurrentServiceMessage:(NSString *)arg1 ;
-(id)currentCall;
-(NSString *)currentServiceMessage;
-(id)init;
-(void)dealloc;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_define:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
@end

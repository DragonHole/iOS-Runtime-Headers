/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IAMWebMessageControllerDelegate.h>
#import <libobjc.A.dylib/IAMViewControllerMetricsDelegate.h>

@protocol IAMWebMessagePresentationCoordinatorDelegate;
@class NSURL, IAMWebMessageController, ICInAppMessageEntry, NSString;

@interface IAMWebMessagePresentationCoordinator : NSObject <IAMWebMessageControllerDelegate, IAMViewControllerMetricsDelegate> {

	NSURL* _webArchiveURL;
	BOOL _isPresenting;
	id<IAMWebMessagePresentationCoordinatorDelegate> _delegate;
	IAMWebMessageController* _webMessageController;
	ICInAppMessageEntry* _webMessageEntry;

}

@property (nonatomic,retain) IAMWebMessageController * webMessageController;                                //@synthesize webMessageController=_webMessageController - In the implementation block
@property (nonatomic,retain) ICInAppMessageEntry * webMessageEntry;                                         //@synthesize webMessageEntry=_webMessageEntry - In the implementation block
@property (assign,nonatomic,__weak) id<IAMWebMessagePresentationCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isPresenting;                                                             //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsPresenting:(BOOL)arg1 ;
-(void)setWebMessageController:(IAMWebMessageController *)arg1 ;
-(IAMWebMessageController *)webMessageController;
-(ICInAppMessageEntry *)webMessageEntry;
-(void)_handleWebMessageClose;
-(void)webMessageControllerWebViewDidRequestClose:(id)arg1 ;
-(void)webMessageControllerWebViewDidRequestOpenURL:(id)arg1 url:(id)arg2 ;
-(void)webMessageControllerWebViewDidReportEvent:(id)arg1 event:(id)arg2 ;
-(void)webMessageControllerWebViewDidRequestAction:(id)arg1 actionConfiguration:(id)arg2 ;
-(void)viewController:(id)arg1 willDismissWithAction:(long long)arg2 ;
-(id)initWithWebMessageEntry:(id)arg1 webArchiveURL:(id)arg2 ;
-(void)setWebMessageEntry:(ICInAppMessageEntry *)arg1 ;
-(void)load;
-(void)setDelegate:(id<IAMWebMessagePresentationCoordinatorDelegate>)arg1 ;
-(id<IAMWebMessagePresentationCoordinatorDelegate>)delegate;
-(id)presentingViewController;
-(BOOL)isPresenting;
-(BOOL)present;
@end
